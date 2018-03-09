#include "TwoUtils.h"
#include <iostream>
#include <stdlib.h>
int main(int argc, char * argv[])
{
	std::vector<double> vec;

// commandline parameters for CTest
	for (int sample = 1; sample < argc; sample++)
	{
		vec.push_back(strtod(argv[sample],NULL));   

	}  
	

//interactive test
/*	std::cout <<"please entersample value count:" ;
	int count = 0;	
	std::cin >> count ;
	double sample_value = 0.00;	
	if(count > 0) 
	{
		for (int sample = 0; sample < count; sample++)
		{
			std::cout << "Please enter sample value: ";		
			std::cin >> sample_value ;
			vec.push_back(sample_value);
		}	
	}

	else {
		vec.push_back(0.00);
	}
*/

//hardcoded test
/*
	vec.push_back(2.8571);
	vec.push_back(5.7142);
	vec.push_back(8.5713);
	vec.push_back(11.4284);
	vec.push_back(14.2855);
	vec.push_back(17.1426);
	vec.push_back(19.9997);
*/
	double sample_mean_evaluated = 0.0;
	double max_value = 0.0;
        sample_mean_evaluated = LibTwoUtils::sample_mean(vec);
	max_value = LibTwoUtils::find_max(vec);
	std::cout << "sample has mean = "<< sample_mean_evaluated << " änd max value = " << max_value << std::endl;
	return 0;

}
