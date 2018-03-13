//Wendell Abigania
//CST116SRS06 - SSD
//my Function (find_SSD.cpp)

#include "stdafx.h"
#include <iostream>
#include "find_SSD.h"

double find_SSD(double *array, int count_N)
{
	double SSD = 0.0;
	double sum = 0.0;
	double mean;
	int i;

	for (i = 0; i < count_N; i++)
	{
		sum += array[i];
	}

	mean = sum / count_N; //calculate the mean (sum of numbers / total number, sample size, total count of numbers from sample, etc.)

	for (i = 0; i < count_N; ++i) //subtract the mean and square the result, loop helps for all int count data
	{
		SSD += (array[i] - mean) * (array[i] - mean); //(array[i] - mean)^2 == (array[i] - mean) * (array[i] - mean)
	}
	return sqrt(SSD / (count_N - 1)); //return the square root / (N-1)
}