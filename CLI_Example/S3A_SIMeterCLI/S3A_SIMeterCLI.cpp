// S3A_SIMeterCLI.cpp : Defines the entry point for the console application.
//
#include "AudioFile\AudioFile.h"
#include "../../Source/S3A_SiMeter/S3A_SiMeter.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <chrono>

int main(int argc, char **argv)
{
	cout << "Example C++ program for using the S3A Speech Intelligibility Meter\n";
 
	cout << "Reading Audio\n";
	AudioFile<double> a;
	a.load("./Audio/m1_125.wav");
	cout << ".";
	AudioFile<double> b;
	b.load("./Audio/radio_CS.wav");
	cout << "."; 
	if (a.getSampleRate() != b.getSampleRate())
	{
		std::cout << "Sample rates differ!\n";
		system("pause");
		return 0;
	}
	/*Create a meter object with the number of channels and the input Fs of a*/
	S3A_SiMeter meter(a.getNumChannels(), a.getSampleRate());

	cout << "Starting SI Calculation\n";
	
	
	/********************************************************************************************
	The following block ensures that target and masker are of the same length
	if this is true before processing, this can be omitted
	*********************************************************************************************/
	/* If the length of a ar b differ, just window the longer to be the length of the shorter*/
	int minsize = std::min(a.samples[0].size(), b.samples[0].size());
	double measurementTime = double(minsize) / double(a.getSampleRate());
	if (measurementTime > 25)
		measurementTime = 25;


	vector<vector<double>> _a;
	vector<vector<double>> _b; 
	
	for (int i = 0; i < a.getNumChannels(); i++)
	{
		vector<double> __a;
		std::copy(a.samples[i].begin(), a.samples[i].begin() + minsize, std::back_inserter(__a));
		vector<double> __b;
		std::copy(b.samples[i].begin(), b.samples[i].begin() + minsize, std::back_inserter(__b));
		_a.push_back(__a);
		_b.push_back(__b);
	}
	/********************************************************************************************/
	
	double intel = 0;

	auto start = std::chrono::high_resolution_clock::now();
	auto pstart = std::chrono::high_resolution_clock::now();

	if (a.getNumChannels() > 1) {
		meter.UpdateBuffersBinaural(_a, _b);
		pstart = std::chrono::high_resolution_clock::now();
		intel = meter.GetIntelligibilityBinaural(measurementTime);
	}
	else {
		meter.UpdateBuffers(_a, _b);
		pstart = std::chrono::high_resolution_clock::now();
		intel = meter.GetIntelligibility(measurementTime);
	}
	auto finish = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
	auto pduration = std::chrono::duration_cast<std::chrono::microseconds>(finish - pstart);

	cout << "\n\nEstimated intelligibility is " << intel << "\nbased on a " << measurementTime << "s measurement time\n";
	cout << "Processing took " << duration.count() << "ms including filling buffers\n";
	cout << "Processing took " << pduration.count() << "us to estimate SI from buffered signals\n\n\n";

	system("pause");
	return 0;
}

