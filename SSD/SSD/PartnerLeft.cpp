//Partner Left's Function .cpp

#include "stdafx.h"
#include <iostream>
#include "PartnerLeft.h"


double find_samp_std_dev(double *sample, int count)
{
	// declare all variables
	int i{};
	double mean{};
	double sum{};
	double sum2{};
	double samp_vari{}; //the sample variation
	double result{};

	// Get the mean of the array that is named sample. 
	for (i = 0; i < count; i++)
	{
		sum += sample[i];
	}
	mean = sum / count;

	// For each element, subtract the mean and square the result.
	for (i = 0; i < count; i++)
	{
		sum2 = sum2 + (sample[i] - mean) * (sample[i] - mean);
	}

	// Take the sum2 and calcuate the sample variance
	samp_vari = sum2 * (1.0 / (count - 1));

	// Get the square root of the sample variance.
	result = sqrt(samp_vari);

	return result;
}