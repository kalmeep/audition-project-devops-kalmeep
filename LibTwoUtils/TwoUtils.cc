#include "TwoUtils.h"
#include <algorithm>
#include <numeric> 
double LibTwoUtils::sample_mean(const std::vector<double>& sample)
{
	double sample_mean_evaluated = 0.00;
	int sample_size = sample.size();
	if(sample_size > 0)
	{
		double sample_sum = std::accumulate(sample.begin(),sample.end(),0.00);
		sample_mean_evaluated = (sample_sum)/(sample.size());
	}
	return sample_mean_evaluated;

}

double LibTwoUtils::find_max(const std::vector<double>& vec)
{
	double max_value = 0.00;
	max_value = *std::max_element(vec.begin(),vec.end());
	return max_value;
}
