#ifndef LIB_TWOUTILS_H
#define LIB_TWOUTILS_H

#include <vector>


namespace LibTwoUtils {

/*
 * Evaluate the sample mean of the input samples.
 *
 * Input: a vector containing samples.
 * Return: the sample mean.
 */
double sample_mean(const std::vector<double>& sample);

/*
 * Find the maximum value of a given vector.
 *
 * Input: a vector containing numbers.
 * Return: the maximum value.
 */
double find_max(const std::vector<double>& vec);

} // namespace LibTwoUtils

#endif /* LIB_TWOUTILS_H */
