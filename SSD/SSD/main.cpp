//Wendell Abigania
//CST116SRS06 - SSD

#include "stdafx.h"
#include <iostream>
#include "find_SSD.h"
#include "PartnerLeft.h"

int main()
{
	double N[] = { 19, 18, 11, 13, 16, 91, 81, 83, 86, 89, 88, 98, 36, 31, 39, 38, 33, 63 };//data applied to Array
	int count_N = sizeof(N) / sizeof(N[0]); //find the number of data elements in Array
	
	std::cout << "My Function: " << '\n';
	std::cout << "Sample Standard Deviation = " << find_SSD (N, count_N) << '\n' << std::endl; //call the function

	std::cout << "Partner Left's Function: " << '\n';
	std::cout << "Sample Standard Deviation = " << find_samp_std_dev(N, count_N) << '\n' << std::endl;

	std::cout << "Press Enter to exit program ";
	std::cin.get(); //hold console screen open, will close after user hits enter key

	return 0;
}

//SSD Calculator online: https://www.miniwebtool.com/sample-standard-deviation-calculator/
//Test Data: 9, 2, 5, 4, 12, 7 
//Test Data Results: 3.61939

//Left Partner's Data: 143, 72, 232, 27, 402, 205, 75, 102, 263, 64, 42, 152, 34, 289, 80, 62, 321, 93, 314
//Left Partner's Data Results: 115.061

//My Data: 19, 18, 11, 13, 16, 91, 81, 83, 86, 89, 88, 98, 36, 31, 39, 38, 33, 63 
//My Data Results: 32.127