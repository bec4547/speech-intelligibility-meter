// HRTFs for +/- 30 degrees taken from the Listen HRTF Database
// http://recherche.ircam.fr/equipes/salles/listen/
// Subject 1003 azimuth 330 and 30 elevation 0
// Before Fourier transform, time domain (HRIR) data were
// resampled to 16k and windowed to 320 points using assymetric Hann windowing

#include <vector>
#include <complex>
using namespace std;
static class HRTFs {
public:
	HRTFs();
	~HRTFs();
	static vector<vector<complex<double>>> GetHRTFs();
private:

};

inline HRTFs::HRTFs()
{

}

inline HRTFs::~HRTFs()
{
}
// Returns vector of vectors containing double complex HRTF data
// output[0] = 330 degree left
// output[1] = 330 degree right
// output[2] = 30 degree left
// output[3] = 30 degree right

inline vector<vector<complex<double>>> HRTFs::GetHRTFs() {
	vector<complex<double>> leftL = { 
	{ -0.001484, 0.000000 },
	{ -0.005516, 0.015964 },
	{ 0.039723, 0.004046 },
	{ 0.016459, -0.038690 },
	{ -0.020628, -0.039314 },
	{ -0.048348, -0.010622 },
	{ -0.042475, 0.032296 },
	{ 0.000507, 0.055553 },
	{ 0.038920, 0.032068 },
	{ 0.043186, -0.003791 },
	{ 0.030592, -0.027199 },
	{ 0.006109, -0.038957 },
	{ -0.018753, -0.036334 },
	{ -0.040618, -0.017112 },
	{ -0.044932, 0.016022 },
	{ -0.025059, 0.045605 },
	{ 0.022347, 0.055833 },
	{ 0.054296, 0.015096 },
	{ 0.044028, -0.026613 },
	{ 0.009097, -0.045191 },
	{ -0.016765, -0.030797 },
	{ -0.032273, -0.024050 },
	{ -0.043191, 0.015825 },
	{ -0.010785, 0.036561 },
	{ 0.012588, 0.020657 },
	{ 0.010294, 0.013248 },
	{ 0.020013, 0.011024 },
	{ 0.026849, -0.006422 },
	{ 0.015039, -0.017385 },
	{ 0.011878, -0.030795 },
	{ -0.021791, -0.041112 },
	{ -0.051085, -0.009226 },
	{ -0.043047, 0.032376 },
	{ -0.007398, 0.056136 },
	{ 0.033771, 0.044453 },
	{ 0.061301, 0.010410 },
	{ 0.050231, -0.036121 },
	{ 0.010888, -0.069968 },
	{ -0.044923, -0.048152 },
	{ -0.061816, -0.014124 },
	{ -0.066681, 0.038804 },
	{ -0.013800, 0.089317 },
	{ 0.064794, 0.061367 },
	{ 0.082539, -0.004008 },
	{ 0.057592, -0.065108 },
	{ -0.012014, -0.085344 },
	{ -0.075596, -0.048824 },
	{ -0.079983, 0.032458 },
	{ -0.019240, 0.070341 },
	{ 0.030096, 0.050672 },
	{ 0.044358, 0.014878 },
	{ 0.038768, -0.009540 },
	{ 0.027911, -0.029369 },
	{ 0.005679, -0.040524 },
	{ -0.019756, -0.037943 },
	{ -0.044586, -0.028409 },
	{ -0.068719, 0.021367 },
	{ -0.023712, 0.074166 },
	{ 0.039684, 0.062631 },
	{ 0.067670, 0.017934 },
	{ 0.067215, -0.035628 },
	{ 0.015742, -0.073586 },
	{ -0.032049, -0.058043 },
	{ -0.063921, -0.030102 },
	{ -0.065720, 0.020130 },
	{ -0.058365, 0.056677 },
	{ 0.005133, 0.110407 },
	{ 0.100600, 0.071284 },
	{ 0.126292, -0.025001 },
	{ 0.078935, -0.124802 },
	{ -0.054326, -0.151362 },
	{ -0.157764, -0.060033 },
	{ -0.146522, 0.093983 },
	{ -0.026207, 0.159609 },
	{ 0.106059, 0.131542 },
	{ 0.158907, -0.000818 },
	{ 0.100125, -0.107922 },
	{ -0.000734, -0.139160 },
	{ -0.111475, -0.094017 },
	{ -0.123311, 0.019752 },
	{ -0.072466, 0.087521 },
	{ 0.006365, 0.116941 },
	{ 0.091530, 0.063061 },
	{ 0.091840, -0.017231 },
	{ 0.047121, -0.065986 },
	{ -0.001079, -0.069999 },
	{ -0.046547, -0.051944 },
	{ -0.062244, -0.002701 },
	{ -0.041112, 0.023463 },
	{ -0.026786, 0.048993 },
	{ 0.012107, 0.046890 },
	{ 0.031376, 0.044283 },
	{ 0.070937, 0.006169 },
	{ 0.048039, -0.047122 },
	{ 0.010016, -0.060265 },
	{ -0.032070, -0.069621 },
	{ -0.090981, -0.016399 },
	{ -0.064465, 0.057411 },
	{ -0.003196, 0.082040 },
	{ 0.055258, 0.056743 },
	{ 0.075636, -0.000570 },
	{ 0.046972, -0.051765 },
	{ -0.004127, -0.068281 },
	{ -0.047700, -0.030377 },
	{ -0.043022, 0.004556 },
	{ -0.025498, 0.022721 },
	{ -0.012168, 0.035956 },
	{ 0.021528, 0.028776 },
	{ 0.020288, 0.006235 },
	{ 0.020153, 0.003999 },
	{ 0.027283, -0.011537 },
	{ 0.011373, -0.036110 },
	{ -0.019100, -0.020971 },
	{ -0.015755, -0.018401 },
	{ -0.042951, -0.000052 },
	{ -0.021509, 0.037162 },
	{ 0.007926, 0.033978 },
	{ 0.025757, 0.024683 },
	{ 0.036431, -0.001116 },
	{ 0.027622, -0.018904 },
	{ 0.010869, -0.042258 },
	{ -0.026849, -0.031578 },
	{ -0.029620, -0.007688 },
	{ -0.037877, 0.003260 },
	{ -0.034088, 0.044197 },
	{ 0.022345, 0.054651 },
	{ 0.046240, 0.022428 },
	{ 0.058137, -0.015584 },
	{ 0.024063, -0.063789 },
	{ -0.035300, -0.051444 },
	{ -0.052508, -0.008739 },
	{ -0.040941, 0.031442 },
	{ -0.001063, 0.039299 },
	{ 0.012338, 0.027864 },
	{ 0.030143, 0.017938 },
	{ 0.033124, -0.006181 },
	{ 0.025038, -0.026341 },
	{ -0.000548, -0.039588 },
	{ -0.028497, -0.029416 },
	{ -0.043975, -0.001770 },
	{ -0.032049, 0.033092 },
	{ 0.001208, 0.045108 },
	{ 0.034760, 0.032939 },
	{ 0.049762, -0.005809 },
	{ 0.026172, -0.043543 },
	{ -0.020380, -0.042826 },
	{ -0.036591, -0.009282 },
	{ -0.031588, 0.017570 },
	{ -0.001756, 0.033608 },
	{ 0.018493, 0.015418 },
	{ 0.020200, -0.000692 },
	{ 0.007280, -0.014020 },
	{ -0.002215, -0.005847 },
	{ -0.000774, -0.007166 },
	{ -0.007567, -0.002885 },
	{ -0.004660, 0.001057 },
	{ -0.004999, 0.003900 },
	{ 0.000752, 0.006143 },
	{ 0.003838, 0.003764 },
	{ 0.003973, -0.002130 },
	{ -0.001136, 0.000000 },
	{ 0.003973, 0.002130 },
	{ 0.003838, -0.003764 },
	{ 0.000752, -0.006143 },
	{ -0.004999, -0.003900 },
	{ -0.004660, -0.001057 },
	{ -0.007567, 0.002885 },
	{ -0.000774, 0.007166 },
	{ -0.002215, 0.005847 },
	{ 0.007280, 0.014020 },
	{ 0.020200, 0.000692 },
	{ 0.018493, -0.015418 },
	{ -0.001756, -0.033608 },
	{ -0.031588, -0.017570 },
	{ -0.036591, 0.009282 },
	{ -0.020380, 0.042826 },
	{ 0.026172, 0.043543 },
	{ 0.049762, 0.005809 },
	{ 0.034760, -0.032939 },
	{ 0.001208, -0.045108 },
	{ -0.032049, -0.033092 },
	{ -0.043975, 0.001770 },
	{ -0.028497, 0.029416 },
	{ -0.000548, 0.039588 },
	{ 0.025038, 0.026341 },
	{ 0.033124, 0.006181 },
	{ 0.030143, -0.017938 },
	{ 0.012338, -0.027864 },
	{ -0.001063, -0.039299 },
	{ -0.040941, -0.031442 },
	{ -0.052508, 0.008739 },
	{ -0.035300, 0.051444 },
	{ 0.024063, 0.063789 },
	{ 0.058137, 0.015584 },
	{ 0.046240, -0.022428 },
	{ 0.022345, -0.054651 },
	{ -0.034088, -0.044197 },
	{ -0.037877, -0.003260 },
	{ -0.029620, 0.007688 },
	{ -0.026849, 0.031578 },
	{ 0.010869, 0.042258 },
	{ 0.027622, 0.018904 },
	{ 0.036431, 0.001116 },
	{ 0.025757, -0.024683 },
	{ 0.007926, -0.033978 },
	{ -0.021509, -0.037162 },
	{ -0.042951, 0.000052 },
	{ -0.015755, 0.018401 },
	{ -0.019100, 0.020971 },
	{ 0.011373, 0.036110 },
	{ 0.027283, 0.011537 },
	{ 0.020153, -0.003999 },
	{ 0.020288, -0.006235 },
	{ 0.021528, -0.028776 },
	{ -0.012168, -0.035956 },
	{ -0.025498, -0.022721 },
	{ -0.043022, -0.004556 },
	{ -0.047700, 0.030377 },
	{ -0.004127, 0.068281 },
	{ 0.046972, 0.051765 },
	{ 0.075636, 0.000570 },
	{ 0.055258, -0.056743 },
	{ -0.003196, -0.082040 },
	{ -0.064465, -0.057411 },
	{ -0.090981, 0.016399 },
	{ -0.032070, 0.069621 },
	{ 0.010016, 0.060265 },
	{ 0.048039, 0.047122 },
	{ 0.070937, -0.006169 },
	{ 0.031376, -0.044283 },
	{ 0.012107, -0.046890 },
	{ -0.026786, -0.048993 },
	{ -0.041112, -0.023463 },
	{ -0.062244, 0.002701 },
	{ -0.046547, 0.051944 },
	{ -0.001079, 0.069999 },
	{ 0.047121, 0.065986 },
	{ 0.091840, 0.017231 },
	{ 0.091530, -0.063061 },
	{ 0.006365, -0.116941 },
	{ -0.072466, -0.087521 },
	{ -0.123311, -0.019752 },
	{ -0.111475, 0.094017 },
	{ -0.000734, 0.139160 },
	{ 0.100125, 0.107922 },
	{ 0.158907, 0.000818 },
	{ 0.106059, -0.131542 },
	{ -0.026207, -0.159609 },
	{ -0.146522, -0.093983 },
	{ -0.157764, 0.060033 },
	{ -0.054326, 0.151362 },
	{ 0.078935, 0.124802 },
	{ 0.126292, 0.025001 },
	{ 0.100600, -0.071284 },
	{ 0.005133, -0.110407 },
	{ -0.058365, -0.056677 },
	{ -0.065720, -0.020130 },
	{ -0.063921, 0.030102 },
	{ -0.032049, 0.058043 },
	{ 0.015742, 0.073586 },
	{ 0.067215, 0.035628 },
	{ 0.067670, -0.017934 },
	{ 0.039684, -0.062631 },
	{ -0.023712, -0.074166 },
	{ -0.068719, -0.021367 },
	{ -0.044586, 0.028409 },
	{ -0.019756, 0.037943 },
	{ 0.005679, 0.040524 },
	{ 0.027911, 0.029369 },
	{ 0.038768, 0.009540 },
	{ 0.044358, -0.014878 },
	{ 0.030096, -0.050672 },
	{ -0.019240, -0.070341 },
	{ -0.079983, -0.032458 },
	{ -0.075596, 0.048824 },
	{ -0.012014, 0.085344 },
	{ 0.057592, 0.065108 },
	{ 0.082539, 0.004008 },
	{ 0.064794, -0.061367 },
	{ -0.013800, -0.089317 },
	{ -0.066681, -0.038804 },
	{ -0.061816, 0.014124 },
	{ -0.044923, 0.048152 },
	{ 0.010888, 0.069968 },
	{ 0.050231, 0.036121 },
	{ 0.061301, -0.010410 },
	{ 0.033771, -0.044453 },
	{ -0.007398, -0.056136 },
	{ -0.043047, -0.032376 },
	{ -0.051085, 0.009226 },
	{ -0.021791, 0.041112 },
	{ 0.011878, 0.030795 },
	{ 0.015039, 0.017385 },
	{ 0.026849, 0.006422 },
	{ 0.020013, -0.011024 },
	{ 0.010294, -0.013248 },
	{ 0.012588, -0.020657 },
	{ -0.010785, -0.036561 },
	{ -0.043191, -0.015825 },
	{ -0.032273, 0.024050 },
	{ -0.016765, 0.030797 },
	{ 0.009097, 0.045191 },
	{ 0.044028, 0.026613 },
	{ 0.054296, -0.015096 },
	{ 0.022347, -0.055833 },
	{ -0.025059, -0.045605 },
	{ -0.044932, -0.016022 },
	{ -0.040618, 0.017112 },
	{ -0.018753, 0.036334 },
	{ 0.006109, 0.038957 },
	{ 0.030592, 0.027199 },
	{ 0.043186, 0.003791 },
	{ 0.038920, -0.032068 },
	{ 0.000507, -0.055553 },
	{ -0.042475, -0.032296 },
	{ -0.048348, 0.010622 },
	{ -0.020628, 0.039314 },
	{ 0.016459, 0.038690 },
	{ 0.039723, -0.004046 },
	{ -0.005516, -0.015964 }
	};

	vector<complex<double>> leftR = { 
	{ -0.001796, 0.000000 },
	{ -0.013208, 0.020156 },
	{ 0.054379, 0.025547 },
	{ 0.049732, -0.043470 },
	{ 0.002925, -0.073008 },
	{ -0.055192, -0.059002 },
	{ -0.085407, -0.004920 },
	{ -0.063686, 0.056371 },
	{ -0.018961, 0.077525 },
	{ 0.032620, 0.079944 },
	{ 0.078091, 0.044612 },
	{ 0.092322, -0.013529 },
	{ 0.067582, -0.067894 },
	{ 0.013595, -0.097396 },
	{ -0.046211, -0.095186 },
	{ -0.111402, -0.052184 },
	{ -0.124180, 0.043776 },
	{ -0.063175, 0.117464 },
	{ 0.035340, 0.127705 },
	{ 0.101375, 0.065504 },
	{ 0.104464, -0.004029 },
	{ 0.105393, -0.063872 },
	{ 0.018117, -0.131872 },
	{ -0.068889, -0.086430 },
	{ -0.083586, -0.029907 },
	{ -0.083875, 0.017742 },
	{ -0.060230, 0.053980 },
	{ -0.022451, 0.080818 },
	{ 0.020470, 0.083478 },
	{ 0.075080, 0.064780 },
	{ 0.100140, 0.006519 },
	{ 0.098464, -0.056812 },
	{ 0.043650, -0.115576 },
	{ -0.046351, -0.127851 },
	{ -0.118615, -0.069258 },
	{ -0.148456, 0.024414 },
	{ -0.089458, 0.118746 },
	{ -0.002340, 0.143480 },
	{ 0.089001, 0.130106 },
	{ 0.166235, 0.036265 },
	{ 0.157720, -0.077896 },
	{ 0.067482, -0.174787 },
	{ -0.070310, -0.186414 },
	{ -0.181458, -0.080111 },
	{ -0.189663, 0.055891 },
	{ -0.097263, 0.174061 },
	{ 0.041309, 0.182409 },
	{ 0.144716, 0.110146 },
	{ 0.172465, -0.009192 },
	{ 0.126254, -0.110364 },
	{ 0.031268, -0.159448 },
	{ -0.068696, -0.145771 },
	{ -0.144961, -0.081825 },
	{ -0.180053, 0.025743 },
	{ -0.127929, 0.144398 },
	{ -0.008520, 0.205653 },
	{ 0.141716, 0.172086 },
	{ 0.231296, 0.029186 },
	{ 0.186228, -0.139435 },
	{ 0.046201, -0.217850 },
	{ -0.099005, -0.187916 },
	{ -0.182897, -0.092009 },
	{ -0.203298, 0.031318 },
	{ -0.162391, 0.146274 },
	{ -0.050851, 0.241110 },
	{ 0.127775, 0.249982 },
	{ 0.295996, 0.117808 },
	{ 0.325662, -0.133058 },
	{ 0.151813, -0.338844 },
	{ -0.132712, -0.362695 },
	{ -0.347470, -0.174834 },
	{ -0.369435, 0.110413 },
	{ -0.195517, 0.317195 },
	{ 0.045198, 0.346927 },
	{ 0.245083, 0.253528 },
	{ 0.352350, 0.052971 },
	{ 0.325112, -0.181336 },
	{ 0.158148, -0.370621 },
	{ -0.144325, -0.401182 },
	{ -0.379067, -0.219970 },
	{ -0.440169, 0.093019 },
	{ -0.276806, 0.365570 },
	{ 0.035815, 0.453955 },
	{ 0.324360, 0.327936 },
	{ 0.453757, 0.033012 },
	{ 0.370650, -0.270367 },
	{ 0.101579, -0.435275 },
	{ -0.201406, -0.400823 },
	{ -0.403376, -0.171693 },
	{ -0.410065, 0.130459 },
	{ -0.237877, 0.340574 },
	{ 0.037431, 0.419958 },
	{ 0.284867, 0.297100 },
	{ 0.413731, 0.047871 },
	{ 0.344365, -0.218243 },
	{ 0.131124, -0.401493 },
	{ -0.169467, -0.385393 },
	{ -0.373207, -0.165822 },
	{ -0.375314, 0.102375 },
	{ -0.213975, 0.313072 },
	{ 0.041615, 0.366445 },
	{ 0.249496, 0.236754 },
	{ 0.326795, 0.022429 },
	{ 0.253546, -0.177686 },
	{ 0.078881, -0.278329 },
	{ -0.097975, -0.253899 },
	{ -0.228056, -0.134443 },
	{ -0.244594, 0.031693 },
	{ -0.176320, 0.169387 },
	{ -0.020494, 0.233183 },
	{ 0.114523, 0.185657 },
	{ 0.197034, 0.072839 },
	{ 0.193555, -0.063507 },
	{ 0.097441, -0.160413 },
	{ -0.012152, -0.167005 },
	{ -0.101927, -0.128990 },
	{ -0.157685, -0.030188 },
	{ -0.123056, 0.057138 },
	{ -0.076612, 0.114674 },
	{ 0.014169, 0.132246 },
	{ 0.077914, 0.094344 },
	{ 0.116163, 0.030293 },
	{ 0.109135, -0.037749 },
	{ 0.066087, -0.091216 },
	{ 0.008133, -0.114941 },
	{ -0.067467, -0.103546 },
	{ -0.118201, -0.038367 },
	{ -0.121870, 0.037548 },
	{ -0.069440, 0.118484 },
	{ 0.021654, 0.125813 },
	{ 0.098468, 0.086828 },
	{ 0.121705, -0.003971 },
	{ 0.091128, -0.069763 },
	{ 0.019957, -0.108067 },
	{ -0.045779, -0.086012 },
	{ -0.074809, -0.040659 },
	{ -0.086012, 0.008441 },
	{ -0.056821, 0.054423 },
	{ -0.023481, 0.071549 },
	{ 0.028546, 0.079137 },
	{ 0.069277, 0.041134 },
	{ 0.078796, -0.008242 },
	{ 0.057036, -0.057703 },
	{ 0.004682, -0.073125 },
	{ -0.035871, -0.060576 },
	{ -0.063242, -0.023700 },
	{ -0.064149, 0.019779 },
	{ -0.031183, 0.050254 },
	{ 0.001194, 0.057497 },
	{ 0.035624, 0.036916 },
	{ 0.042736, 0.013788 },
	{ 0.041890, -0.012435 },
	{ 0.031647, -0.032143 },
	{ 0.005362, -0.045721 },
	{ -0.020813, -0.044210 },
	{ -0.047763, -0.023180 },
	{ -0.057281, 0.013129 },
	{ -0.032080, 0.051192 },
	{ 0.008679, 0.059985 },
	{ 0.046607, 0.037625 },
	{ 0.057779, 0.000000 },
	{ 0.046607, -0.037625 },
	{ 0.008679, -0.059985 },
	{ -0.032080, -0.051192 },
	{ -0.057281, -0.013129 },
	{ -0.047763, 0.023180 },
	{ -0.020813, 0.044210 },
	{ 0.005362, 0.045721 },
	{ 0.031647, 0.032143 },
	{ 0.041890, 0.012435 },
	{ 0.042736, -0.013788 },
	{ 0.035624, -0.036916 },
	{ 0.001194, -0.057497 },
	{ -0.031183, -0.050254 },
	{ -0.064149, -0.019779 },
	{ -0.063242, 0.023700 },
	{ -0.035871, 0.060576 },
	{ 0.004682, 0.073125 },
	{ 0.057036, 0.057703 },
	{ 0.078796, 0.008242 },
	{ 0.069277, -0.041134 },
	{ 0.028546, -0.079137 },
	{ -0.023481, -0.071549 },
	{ -0.056821, -0.054423 },
	{ -0.086012, -0.008441 },
	{ -0.074809, 0.040659 },
	{ -0.045779, 0.086012 },
	{ 0.019957, 0.108067 },
	{ 0.091128, 0.069763 },
	{ 0.121705, 0.003971 },
	{ 0.098468, -0.086828 },
	{ 0.021654, -0.125813 },
	{ -0.069440, -0.118484 },
	{ -0.121870, -0.037548 },
	{ -0.118201, 0.038367 },
	{ -0.067467, 0.103546 },
	{ 0.008133, 0.114941 },
	{ 0.066087, 0.091216 },
	{ 0.109135, 0.037749 },
	{ 0.116163, -0.030293 },
	{ 0.077914, -0.094344 },
	{ 0.014169, -0.132246 },
	{ -0.076612, -0.114674 },
	{ -0.123056, -0.057138 },
	{ -0.157685, 0.030188 },
	{ -0.101927, 0.128990 },
	{ -0.012152, 0.167005 },
	{ 0.097441, 0.160413 },
	{ 0.193555, 0.063507 },
	{ 0.197034, -0.072839 },
	{ 0.114523, -0.185657 },
	{ -0.020494, -0.233183 },
	{ -0.176320, -0.169387 },
	{ -0.244594, -0.031693 },
	{ -0.228056, 0.134443 },
	{ -0.097975, 0.253899 },
	{ 0.078881, 0.278329 },
	{ 0.253546, 0.177686 },
	{ 0.326795, -0.022429 },
	{ 0.249496, -0.236754 },
	{ 0.041615, -0.366445 },
	{ -0.213975, -0.313072 },
	{ -0.375314, -0.102375 },
	{ -0.373207, 0.165822 },
	{ -0.169467, 0.385393 },
	{ 0.131124, 0.401493 },
	{ 0.344365, 0.218243 },
	{ 0.413731, -0.047871 },
	{ 0.284867, -0.297100 },
	{ 0.037431, -0.419958 },
	{ -0.237877, -0.340574 },
	{ -0.410065, -0.130459 },
	{ -0.403376, 0.171693 },
	{ -0.201406, 0.400823 },
	{ 0.101579, 0.435275 },
	{ 0.370650, 0.270367 },
	{ 0.453757, -0.033012 },
	{ 0.324360, -0.327936 },
	{ 0.035815, -0.453955 },
	{ -0.276806, -0.365570 },
	{ -0.440169, -0.093019 },
	{ -0.379067, 0.219970 },
	{ -0.144325, 0.401182 },
	{ 0.158148, 0.370621 },
	{ 0.325112, 0.181336 },
	{ 0.352350, -0.052971 },
	{ 0.245083, -0.253528 },
	{ 0.045198, -0.346927 },
	{ -0.195517, -0.317195 },
	{ -0.369435, -0.110413 },
	{ -0.347470, 0.174834 },
	{ -0.132712, 0.362695 },
	{ 0.151813, 0.338844 },
	{ 0.325662, 0.133058 },
	{ 0.295996, -0.117808 },
	{ 0.127775, -0.249982 },
	{ -0.050851, -0.241110 },
	{ -0.162391, -0.146274 },
	{ -0.203298, -0.031318 },
	{ -0.182897, 0.092009 },
	{ -0.099005, 0.187916 },
	{ 0.046201, 0.217850 },
	{ 0.186228, 0.139435 },
	{ 0.231296, -0.029186 },
	{ 0.141716, -0.172086 },
	{ -0.008520, -0.205653 },
	{ -0.127929, -0.144398 },
	{ -0.180053, -0.025743 },
	{ -0.144961, 0.081825 },
	{ -0.068696, 0.145771 },
	{ 0.031268, 0.159448 },
	{ 0.126254, 0.110364 },
	{ 0.172465, 0.009192 },
	{ 0.144716, -0.110146 },
	{ 0.041309, -0.182409 },
	{ -0.097263, -0.174061 },
	{ -0.189663, -0.055891 },
	{ -0.181458, 0.080111 },
	{ -0.070310, 0.186414 },
	{ 0.067482, 0.174787 },
	{ 0.157720, 0.077896 },
	{ 0.166235, -0.036265 },
	{ 0.089001, -0.130106 },
	{ -0.002340, -0.143480 },
	{ -0.089458, -0.118746 },
	{ -0.148456, -0.024414 },
	{ -0.118615, 0.069258 },
	{ -0.046351, 0.127851 },
	{ 0.043650, 0.115576 },
	{ 0.098464, 0.056812 },
	{ 0.100140, -0.006519 },
	{ 0.075080, -0.064780 },
	{ 0.020470, -0.083478 },
	{ -0.022451, -0.080818 },
	{ -0.060230, -0.053980 },
	{ -0.083875, -0.017742 },
	{ -0.083586, 0.029907 },
	{ -0.068889, 0.086430 },
	{ 0.018117, 0.131872 },
	{ 0.105393, 0.063872 },
	{ 0.104464, 0.004029 },
	{ 0.101375, -0.065504 },
	{ 0.035340, -0.127705 },
	{ -0.063175, -0.117464 },
	{ -0.124180, -0.043776 },
	{ -0.111402, 0.052184 },
	{ -0.046211, 0.095186 },
	{ 0.013595, 0.097396 },
	{ 0.067582, 0.067894 },
	{ 0.092322, 0.013529 },
	{ 0.078091, -0.044612 },
	{ 0.032620, -0.079944 },
	{ -0.018961, -0.077525 },
	{ -0.063686, -0.056371 },
	{ -0.085407, 0.004920 },
	{ -0.055192, 0.059002 },
	{ 0.002925, 0.073008 },
	{ 0.049732, 0.043470 },
	{ 0.054379, -0.025547 },
	{ -0.013208, -0.020156 }
	};

	vector<complex<double>> rightL = { 
	{ 0.000238, 0.000000 },
	{ -0.009211, 0.015648 },
	{ 0.042231, 0.017831 },
	{ 0.037430, -0.033460 },
	{ 0.003632, -0.054864 },
	{ -0.039690, -0.046830 },
	{ -0.064406, -0.008286 },
	{ -0.052455, 0.038282 },
	{ -0.020662, 0.058189 },
	{ 0.017182, 0.064959 },
	{ 0.057546, 0.041879 },
	{ 0.072073, 0.000100 },
	{ 0.061853, -0.045742 },
	{ 0.023275, -0.073486 },
	{ -0.021501, -0.085461 },
	{ -0.086798, -0.057550 },
	{ -0.106761, 0.019244 },
	{ -0.067617, 0.088484 },
	{ 0.010597, 0.107583 },
	{ 0.072948, 0.070851 },
	{ 0.088917, 0.013546 },
	{ 0.096973, -0.040237 },
	{ 0.034639, -0.103541 },
	{ -0.040917, -0.086548 },
	{ -0.068489, -0.040382 },
	{ -0.078580, 0.003565 },
	{ -0.058419, 0.043828 },
	{ -0.023899, 0.066272 },
	{ 0.010054, 0.071657 },
	{ 0.058180, 0.056338 },
	{ 0.078992, 0.008681 },
	{ 0.071845, -0.038506 },
	{ 0.036357, -0.075746 },
	{ -0.015915, -0.084617 },
	{ -0.064901, -0.062833 },
	{ -0.095254, -0.009936 },
	{ -0.083617, 0.050469 },
	{ -0.041059, 0.093846 },
	{ 0.028236, 0.115528 },
	{ 0.108430, 0.062599 },
	{ 0.119862, -0.015160 },
	{ 0.090592, -0.097329 },
	{ -0.001824, -0.138345 },
	{ -0.092180, -0.092241 },
	{ -0.122630, -0.018943 },
	{ -0.107887, 0.063542 },
	{ -0.046078, 0.115575 },
	{ 0.037870, 0.121458 },
	{ 0.104844, 0.068836 },
	{ 0.124316, -0.008201 },
	{ 0.095714, -0.081630 },
	{ 0.031736, -0.130315 },
	{ -0.062195, -0.128037 },
	{ -0.135471, -0.062806 },
	{ -0.151129, 0.037628 },
	{ -0.098325, 0.131320 },
	{ 0.009462, 0.175173 },
	{ 0.130194, 0.130603 },
	{ 0.182956, 0.009742 },
	{ 0.147376, -0.102983 },
	{ 0.056745, -0.172762 },
	{ -0.058868, -0.183665 },
	{ -0.170290, -0.113936 },
	{ -0.222512, 0.012272 },
	{ -0.175129, 0.165396 },
	{ -0.040512, 0.259108 },
	{ 0.158769, 0.248697 },
	{ 0.300623, 0.079265 },
	{ 0.299113, -0.142733 },
	{ 0.134718, -0.328628 },
	{ -0.122980, -0.351206 },
	{ -0.359354, -0.185622 },
	{ -0.388958, 0.122272 },
	{ -0.193655, 0.352820 },
	{ 0.081066, 0.385025 },
	{ 0.312366, 0.222840 },
	{ 0.374685, -0.017281 },
	{ 0.266953, -0.259271 },
	{ 0.040900, -0.360025 },
	{ -0.181689, -0.295712 },
	{ -0.333764, -0.130581 },
	{ -0.342134, 0.114915 },
	{ -0.196562, 0.311656 },
	{ 0.047847, 0.365448 },
	{ 0.282805, 0.250815 },
	{ 0.365994, 0.002239 },
	{ 0.269412, -0.227766 },
	{ 0.065895, -0.329978 },
	{ -0.149325, -0.284918 },
	{ -0.278967, -0.133959 },
	{ -0.292825, 0.060718 },
	{ -0.200794, 0.217502 },
	{ -0.028894, 0.292469 },
	{ 0.147677, 0.260441 },
	{ 0.289888, 0.124414 },
	{ 0.318441, -0.099588 },
	{ 0.177245, -0.281021 },
	{ -0.047652, -0.334975 },
	{ -0.252853, -0.218374 },
	{ -0.331567, 0.003811 },
	{ -0.228082, 0.213879 },
	{ -0.034694, 0.285620 },
	{ 0.139340, 0.225077 },
	{ 0.229029, 0.089637 },
	{ 0.226174, -0.065410 },
	{ 0.128874, -0.175168 },
	{ 0.006064, -0.206222 },
	{ -0.116620, -0.166750 },
	{ -0.185725, -0.060158 },
	{ -0.177316, 0.062467 },
	{ -0.101703, 0.145944 },
	{ 0.001254, 0.175403 },
	{ 0.109175, 0.140580 },
	{ 0.169274, 0.031366 },
	{ 0.131817, -0.063920 },
	{ 0.082979, -0.125075 },
	{ -0.021826, -0.152233 },
	{ -0.098341, -0.084023 },
	{ -0.112236, -0.029813 },
	{ -0.113243, 0.048261 },
	{ -0.058268, 0.088425 },
	{ -0.006437, 0.110815 },
	{ 0.057665, 0.091315 },
	{ 0.092427, 0.047770 },
	{ 0.117536, -0.000782 },
	{ 0.103256, -0.090235 },
	{ 0.020975, -0.133556 },
	{ -0.061143, -0.125215 },
	{ -0.135691, -0.065504 },
	{ -0.151424, 0.044503 },
	{ -0.083660, 0.124702 },
	{ 0.011744, 0.155936 },
	{ 0.109939, 0.104690 },
	{ 0.145930, 0.012236 },
	{ 0.116397, -0.080367 },
	{ 0.036171, -0.129621 },
	{ -0.045986, -0.113658 },
	{ -0.097235, -0.063989 },
	{ -0.114220, 0.004225 },
	{ -0.089082, 0.073315 },
	{ -0.023932, 0.107803 },
	{ 0.044164, 0.097419 },
	{ 0.093268, 0.053336 },
	{ 0.104264, -0.022247 },
	{ 0.060252, -0.074305 },
	{ 0.009655, -0.088819 },
	{ -0.049552, -0.080197 },
	{ -0.085125, -0.025570 },
	{ -0.075683, 0.029171 },
	{ -0.043002, 0.066024 },
	{ 0.012237, 0.077545 },
	{ 0.053631, 0.045734 },
	{ 0.067282, -0.001191 },
	{ 0.042436, -0.042812 },
	{ 0.001340, -0.048101 },
	{ -0.020620, -0.038635 },
	{ -0.045474, -0.009512 },
	{ -0.029365, 0.023379 },
	{ -0.004656, 0.031358 },
	{ 0.018096, 0.024842 },
	{ 0.033007, 0.000000 },
	{ 0.018096, -0.024842 },
	{ -0.004656, -0.031358 },
	{ -0.029365, -0.023379 },
	{ -0.045474, 0.009512 },
	{ -0.020620, 0.038635 },
	{ 0.001340, 0.048101 },
	{ 0.042436, 0.042812 },
	{ 0.067282, 0.001191 },
	{ 0.053631, -0.045734 },
	{ 0.012237, -0.077545 },
	{ -0.043002, -0.066024 },
	{ -0.075683, -0.029171 },
	{ -0.085125, 0.025570 },
	{ -0.049552, 0.080197 },
	{ 0.009655, 0.088819 },
	{ 0.060252, 0.074305 },
	{ 0.104264, 0.022247 },
	{ 0.093268, -0.053336 },
	{ 0.044164, -0.097419 },
	{ -0.023932, -0.107803 },
	{ -0.089082, -0.073315 },
	{ -0.114220, -0.004225 },
	{ -0.097235, 0.063989 },
	{ -0.045986, 0.113658 },
	{ 0.036171, 0.129621 },
	{ 0.116397, 0.080367 },
	{ 0.145930, -0.012236 },
	{ 0.109939, -0.104690 },
	{ 0.011744, -0.155936 },
	{ -0.083660, -0.124702 },
	{ -0.151424, -0.044503 },
	{ -0.135691, 0.065504 },
	{ -0.061143, 0.125215 },
	{ 0.020975, 0.133556 },
	{ 0.103256, 0.090235 },
	{ 0.117536, 0.000782 },
	{ 0.092427, -0.047770 },
	{ 0.057665, -0.091315 },
	{ -0.006437, -0.110815 },
	{ -0.058268, -0.088425 },
	{ -0.113243, -0.048261 },
	{ -0.112236, 0.029813 },
	{ -0.098341, 0.084023 },
	{ -0.021826, 0.152233 },
	{ 0.082979, 0.125075 },
	{ 0.131817, 0.063920 },
	{ 0.169274, -0.031366 },
	{ 0.109175, -0.140580 },
	{ 0.001254, -0.175403 },
	{ -0.101703, -0.145944 },
	{ -0.177316, -0.062467 },
	{ -0.185725, 0.060158 },
	{ -0.116620, 0.166750 },
	{ 0.006064, 0.206222 },
	{ 0.128874, 0.175168 },
	{ 0.226174, 0.065410 },
	{ 0.229029, -0.089637 },
	{ 0.139340, -0.225077 },
	{ -0.034694, -0.285620 },
	{ -0.228082, -0.213879 },
	{ -0.331567, -0.003811 },
	{ -0.252853, 0.218374 },
	{ -0.047652, 0.334975 },
	{ 0.177245, 0.281021 },
	{ 0.318441, 0.099588 },
	{ 0.289888, -0.124414 },
	{ 0.147677, -0.260441 },
	{ -0.028894, -0.292469 },
	{ -0.200794, -0.217502 },
	{ -0.292825, -0.060718 },
	{ -0.278967, 0.133959 },
	{ -0.149325, 0.284918 },
	{ 0.065895, 0.329978 },
	{ 0.269412, 0.227766 },
	{ 0.365994, -0.002239 },
	{ 0.282805, -0.250815 },
	{ 0.047847, -0.365448 },
	{ -0.196562, -0.311656 },
	{ -0.342134, -0.114915 },
	{ -0.333764, 0.130581 },
	{ -0.181689, 0.295712 },
	{ 0.040900, 0.360025 },
	{ 0.266953, 0.259271 },
	{ 0.374685, 0.017281 },
	{ 0.312366, -0.222840 },
	{ 0.081066, -0.385025 },
	{ -0.193655, -0.352820 },
	{ -0.388958, -0.122272 },
	{ -0.359354, 0.185622 },
	{ -0.122980, 0.351206 },
	{ 0.134718, 0.328628 },
	{ 0.299113, 0.142733 },
	{ 0.300623, -0.079265 },
	{ 0.158769, -0.248697 },
	{ -0.040512, -0.259108 },
	{ -0.175129, -0.165396 },
	{ -0.222512, -0.012272 },
	{ -0.170290, 0.113936 },
	{ -0.058868, 0.183665 },
	{ 0.056745, 0.172762 },
	{ 0.147376, 0.102983 },
	{ 0.182956, -0.009742 },
	{ 0.130194, -0.130603 },
	{ 0.009462, -0.175173 },
	{ -0.098325, -0.131320 },
	{ -0.151129, -0.037628 },
	{ -0.135471, 0.062806 },
	{ -0.062195, 0.128037 },
	{ 0.031736, 0.130315 },
	{ 0.095714, 0.081630 },
	{ 0.124316, 0.008201 },
	{ 0.104844, -0.068836 },
	{ 0.037870, -0.121458 },
	{ -0.046078, -0.115575 },
	{ -0.107887, -0.063542 },
	{ -0.122630, 0.018943 },
	{ -0.092180, 0.092241 },
	{ -0.001824, 0.138345 },
	{ 0.090592, 0.097329 },
	{ 0.119862, 0.015160 },
	{ 0.108430, -0.062599 },
	{ 0.028236, -0.115528 },
	{ -0.041059, -0.093846 },
	{ -0.083617, -0.050469 },
	{ -0.095254, 0.009936 },
	{ -0.064901, 0.062833 },
	{ -0.015915, 0.084617 },
	{ 0.036357, 0.075746 },
	{ 0.071845, 0.038506 },
	{ 0.078992, -0.008681 },
	{ 0.058180, -0.056338 },
	{ 0.010054, -0.071657 },
	{ -0.023899, -0.066272 },
	{ -0.058419, -0.043828 },
	{ -0.078580, -0.003565 },
	{ -0.068489, 0.040382 },
	{ -0.040917, 0.086548 },
	{ 0.034639, 0.103541 },
	{ 0.096973, 0.040237 },
	{ 0.088917, -0.013546 },
	{ 0.072948, -0.070851 },
	{ 0.010597, -0.107583 },
	{ -0.067617, -0.088484 },
	{ -0.106761, -0.019244 },
	{ -0.086798, 0.057550 },
	{ -0.021501, 0.085461 },
	{ 0.023275, 0.073486 },
	{ 0.061853, 0.045742 },
	{ 0.072073, -0.000100 },
	{ 0.057546, -0.041879 },
	{ 0.017182, -0.064959 },
	{ -0.020662, -0.058189 },
	{ -0.052455, -0.038282 },
	{ -0.064406, 0.008286 },
	{ -0.039690, 0.046830 },
	{ 0.003632, 0.054864 },
	{ 0.037430, 0.033460 },
	{ 0.042231, -0.017831 },
	{ -0.009211, -0.015648 }
	};

	vector<complex<double>> rightR = { 
	{ -0.000931, 0.000000 },
	{ -0.009305, 0.019121 },
	{ 0.051177, 0.008523 },
	{ 0.023727, -0.049974 },
	{ -0.026778, -0.053061 },
	{ -0.063774, -0.014690 },
	{ -0.057602, 0.042329 },
	{ 0.000343, 0.074729 },
	{ 0.051313, 0.043589 },
	{ 0.060713, -0.005517 },
	{ 0.038185, -0.038570 },
	{ 0.005969, -0.052462 },
	{ -0.027788, -0.043573 },
	{ -0.050027, -0.019674 },
	{ -0.056956, 0.019954 },
	{ -0.030016, 0.058650 },
	{ 0.026093, 0.070784 },
	{ 0.070320, 0.019622 },
	{ 0.057281, -0.032434 },
	{ 0.014174, -0.059150 },
	{ -0.021804, -0.043777 },
	{ -0.047204, -0.031506 },
	{ -0.059106, 0.025983 },
	{ -0.007651, 0.054659 },
	{ 0.024053, 0.021014 },
	{ 0.014399, 0.009904 },
	{ 0.017976, 0.006861 },
	{ 0.023706, -0.002174 },
	{ 0.021234, -0.012354 },
	{ 0.023670, -0.035438 },
	{ -0.022285, -0.057632 },
	{ -0.066016, -0.017545 },
	{ -0.058531, 0.038862 },
	{ -0.014343, 0.073590 },
	{ 0.047345, 0.059901 },
	{ 0.075059, 0.007778 },
	{ 0.060729, -0.041538 },
	{ 0.010323, -0.083535 },
	{ -0.045619, -0.051800 },
	{ -0.070992, -0.025039 },
	{ -0.075018, 0.037918 },
	{ -0.030465, 0.093051 },
	{ 0.051903, 0.084432 },
	{ 0.105712, 0.026242 },
	{ 0.091147, -0.070293 },
	{ 0.011652, -0.114786 },
	{ -0.091206, -0.090739 },
	{ -0.120682, 0.023072 },
	{ -0.052667, 0.098193 },
	{ 0.033871, 0.091633 },
	{ 0.078856, 0.033979 },
	{ 0.071732, -0.025675 },
	{ 0.028657, -0.057992 },
	{ -0.007982, -0.057092 },
	{ -0.036033, -0.038127 },
	{ -0.057955, -0.021949 },
	{ -0.069113, 0.035038 },
	{ -0.024211, 0.076678 },
	{ 0.039570, 0.080168 },
	{ 0.092891, 0.027591 },
	{ 0.084798, -0.055316 },
	{ 0.021281, -0.096404 },
	{ -0.059232, -0.088336 },
	{ -0.107787, -0.010669 },
	{ -0.069866, 0.065615 },
	{ -0.011970, 0.086689 },
	{ 0.049575, 0.075405 },
	{ 0.088363, 0.018230 },
	{ 0.072191, -0.040619 },
	{ 0.030899, -0.074152 },
	{ -0.009946, -0.089503 },
	{ -0.093405, -0.067786 },
	{ -0.124378, 0.023105 },
	{ -0.064091, 0.123401 },
	{ 0.040744, 0.124403 },
	{ 0.132347, 0.058165 },
	{ 0.120186, -0.051704 },
	{ 0.056029, -0.132410 },
	{ -0.070022, -0.119373 },
	{ -0.115738, -0.034536 },
	{ -0.105994, 0.057803 },
	{ -0.034080, 0.101059 },
	{ 0.037900, 0.098155 },
	{ 0.090310, 0.044928 },
	{ 0.098054, -0.019744 },
	{ 0.065310, -0.086229 },
	{ -0.016114, -0.107537 },
	{ -0.082968, -0.076780 },
	{ -0.124208, 0.015115 },
	{ -0.068395, 0.096499 },
	{ 0.018585, 0.114052 },
	{ 0.091693, 0.064564 },
	{ 0.107345, -0.021526 },
	{ 0.052895, -0.081630 },
	{ -0.009829, -0.089120 },
	{ -0.071046, -0.063475 },
	{ -0.083933, 0.009246 },
	{ -0.059159, 0.055496 },
	{ -0.004973, 0.080286 },
	{ 0.047955, 0.065620 },
	{ 0.083380, 0.009600 },
	{ 0.064732, -0.046435 },
	{ 0.011063, -0.079082 },
	{ -0.046496, -0.066534 },
	{ -0.078758, -0.001866 },
	{ -0.048576, 0.042152 },
	{ -0.005331, 0.067043 },
	{ 0.045308, 0.038678 },
	{ 0.044739, -0.003393 },
	{ 0.028811, -0.024877 },
	{ -0.000130, -0.036457 },
	{ -0.018488, -0.015290 },
	{ -0.010571, -0.003792 },
	{ -0.018196, -0.002598 },
	{ -0.008948, 0.007811 },
	{ -0.011542, 0.006332 },
	{ -0.006500, 0.020003 },
	{ 0.009808, 0.024216 },
	{ 0.024936, 0.010200 },
	{ 0.032095, -0.008034 },
	{ 0.016156, -0.034039 },
	{ -0.013174, -0.033560 },
	{ -0.033907, -0.021669 },
	{ -0.042591, 0.015151 },
	{ -0.017788, 0.038634 },
	{ 0.014482, 0.041535 },
	{ 0.041247, 0.020338 },
	{ 0.042155, -0.019929 },
	{ 0.014949, -0.038166 },
	{ -0.019270, -0.040693 },
	{ -0.038314, -0.007787 },
	{ -0.026659, 0.018941 },
	{ -0.008298, 0.024274 },
	{ 0.007901, 0.021069 },
	{ 0.015956, 0.016892 },
	{ 0.027378, 0.000382 },
	{ 0.019521, -0.017067 },
	{ 0.005461, -0.028041 },
	{ -0.019851, -0.026610 },
	{ -0.031631, 0.000191 },
	{ -0.021350, 0.021035 },
	{ 0.002118, 0.028147 },
	{ 0.019516, 0.016120 },
	{ 0.023556, -0.002348 },
	{ 0.012759, -0.017201 },
	{ -0.003489, -0.018327 },
	{ -0.011374, -0.008632 },
	{ -0.013540, -0.000464 },
	{ -0.010067, 0.007433 },
	{ -0.001485, 0.012518 },
	{ 0.004637, 0.009674 },
	{ 0.013546, 0.004376 },
	{ 0.010092, -0.009597 },
	{ -0.000459, -0.012338 },
	{ -0.011215, -0.005496 },
	{ -0.007866, 0.004071 },
	{ -0.001745, 0.009875 },
	{ 0.007662, 0.004211 },
	{ 0.006393, -0.005621 },
	{ -0.003496, -0.005726 },
	{ -0.005216, 0.000000 },
	{ -0.003496, 0.005726 },
	{ 0.006393, 0.005621 },
	{ 0.007662, -0.004211 },
	{ -0.001745, -0.009875 },
	{ -0.007866, -0.004071 },
	{ -0.011215, 0.005496 },
	{ -0.000459, 0.012338 },
	{ 0.010092, 0.009597 },
	{ 0.013546, -0.004376 },
	{ 0.004637, -0.009674 },
	{ -0.001485, -0.012518 },
	{ -0.010067, -0.007433 },
	{ -0.013540, 0.000464 },
	{ -0.011374, 0.008632 },
	{ -0.003489, 0.018327 },
	{ 0.012759, 0.017201 },
	{ 0.023556, 0.002348 },
	{ 0.019516, -0.016120 },
	{ 0.002118, -0.028147 },
	{ -0.021350, -0.021035 },
	{ -0.031631, -0.000191 },
	{ -0.019851, 0.026610 },
	{ 0.005461, 0.028041 },
	{ 0.019521, 0.017067 },
	{ 0.027378, -0.000382 },
	{ 0.015956, -0.016892 },
	{ 0.007901, -0.021069 },
	{ -0.008298, -0.024274 },
	{ -0.026659, -0.018941 },
	{ -0.038314, 0.007787 },
	{ -0.019270, 0.040693 },
	{ 0.014949, 0.038166 },
	{ 0.042155, 0.019929 },
	{ 0.041247, -0.020338 },
	{ 0.014482, -0.041535 },
	{ -0.017788, -0.038634 },
	{ -0.042591, -0.015151 },
	{ -0.033907, 0.021669 },
	{ -0.013174, 0.033560 },
	{ 0.016156, 0.034039 },
	{ 0.032095, 0.008034 },
	{ 0.024936, -0.010200 },
	{ 0.009808, -0.024216 },
	{ -0.006500, -0.020003 },
	{ -0.011542, -0.006332 },
	{ -0.008948, -0.007811 },
	{ -0.018196, 0.002598 },
	{ -0.010571, 0.003792 },
	{ -0.018488, 0.015290 },
	{ -0.000130, 0.036457 },
	{ 0.028811, 0.024877 },
	{ 0.044739, 0.003393 },
	{ 0.045308, -0.038678 },
	{ -0.005331, -0.067043 },
	{ -0.048576, -0.042152 },
	{ -0.078758, 0.001866 },
	{ -0.046496, 0.066534 },
	{ 0.011063, 0.079082 },
	{ 0.064732, 0.046435 },
	{ 0.083380, -0.009600 },
	{ 0.047955, -0.065620 },
	{ -0.004973, -0.080286 },
	{ -0.059159, -0.055496 },
	{ -0.083933, -0.009246 },
	{ -0.071046, 0.063475 },
	{ -0.009829, 0.089120 },
	{ 0.052895, 0.081630 },
	{ 0.107345, 0.021526 },
	{ 0.091693, -0.064564 },
	{ 0.018585, -0.114052 },
	{ -0.068395, -0.096499 },
	{ -0.124208, -0.015115 },
	{ -0.082968, 0.076780 },
	{ -0.016114, 0.107537 },
	{ 0.065310, 0.086229 },
	{ 0.098054, 0.019744 },
	{ 0.090310, -0.044928 },
	{ 0.037900, -0.098155 },
	{ -0.034080, -0.101059 },
	{ -0.105994, -0.057803 },
	{ -0.115738, 0.034536 },
	{ -0.070022, 0.119373 },
	{ 0.056029, 0.132410 },
	{ 0.120186, 0.051704 },
	{ 0.132347, -0.058165 },
	{ 0.040744, -0.124403 },
	{ -0.064091, -0.123401 },
	{ -0.124378, -0.023105 },
	{ -0.093405, 0.067786 },
	{ -0.009946, 0.089503 },
	{ 0.030899, 0.074152 },
	{ 0.072191, 0.040619 },
	{ 0.088363, -0.018230 },
	{ 0.049575, -0.075405 },
	{ -0.011970, -0.086689 },
	{ -0.069866, -0.065615 },
	{ -0.107787, 0.010669 },
	{ -0.059232, 0.088336 },
	{ 0.021281, 0.096404 },
	{ 0.084798, 0.055316 },
	{ 0.092891, -0.027591 },
	{ 0.039570, -0.080168 },
	{ -0.024211, -0.076678 },
	{ -0.069113, -0.035038 },
	{ -0.057955, 0.021949 },
	{ -0.036033, 0.038127 },
	{ -0.007982, 0.057092 },
	{ 0.028657, 0.057992 },
	{ 0.071732, 0.025675 },
	{ 0.078856, -0.033979 },
	{ 0.033871, -0.091633 },
	{ -0.052667, -0.098193 },
	{ -0.120682, -0.023072 },
	{ -0.091206, 0.090739 },
	{ 0.011652, 0.114786 },
	{ 0.091147, 0.070293 },
	{ 0.105712, -0.026242 },
	{ 0.051903, -0.084432 },
	{ -0.030465, -0.093051 },
	{ -0.075018, -0.037918 },
	{ -0.070992, 0.025039 },
	{ -0.045619, 0.051800 },
	{ 0.010323, 0.083535 },
	{ 0.060729, 0.041538 },
	{ 0.075059, -0.007778 },
	{ 0.047345, -0.059901 },
	{ -0.014343, -0.073590 },
	{ -0.058531, -0.038862 },
	{ -0.066016, 0.017545 },
	{ -0.022285, 0.057632 },
	{ 0.023670, 0.035438 },
	{ 0.021234, 0.012354 },
	{ 0.023706, 0.002174 },
	{ 0.017976, -0.006861 },
	{ 0.014399, -0.009904 },
	{ 0.024053, -0.021014 },
	{ -0.007651, -0.054659 },
	{ -0.059106, -0.025983 },
	{ -0.047204, 0.031506 },
	{ -0.021804, 0.043777 },
	{ 0.014174, 0.059150 },
	{ 0.057281, 0.032434 },
	{ 0.070320, -0.019622 },
	{ 0.026093, -0.070784 },
	{ -0.030016, -0.058650 },
	{ -0.056956, -0.019954 },
	{ -0.050027, 0.019674 },
	{ -0.027788, 0.043573 },
	{ 0.005969, 0.052462 },
	{ 0.038185, 0.038570 },
	{ 0.060713, 0.005517 },
	{ 0.051313, -0.043589 },
	{ 0.000343, -0.074729 },
	{ -0.057602, -0.042329 },
	{ -0.063774, 0.014690 },
	{ -0.026778, 0.053061 },
	{ 0.023727, 0.049974 },
	{ 0.051177, -0.008523 },
	{ -0.009305, -0.019121 }
	};

	vector<vector<complex<double>>> output = { leftL, leftR, rightL, rightR };
	return output;
}
