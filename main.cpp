#include <iostream>
#include <string>
#include <sstream>

int main()
{
	
	
	std::string inputAsString{};
	int inputAsInt{};
	

	while (true) 
	{
		std::cout << "Enter the length of the base of the triangle: ";


		std::getline(std::cin, inputAsString);


		std::stringstream ss(inputAsString);


		if (ss >> inputAsInt && (ss >> std::ws).eof() && inputAsInt > 0)
		{
			break;
		}

		std::cout << "ERROR Cannot Generate Triangle with this base lenght.\n\nPossible causes:\n \n1. You did not input a valid integer. \n2. You inputed integer of too high value.(Max Value is: 2147483647)\n3.Entered Value Is '0' or Negative.\n";

	}


	std::cout << "Which type of triangle would you like to draw: \n";
	std::cout << "1. Right triangle\n";
	std::cout << "2. Isosceles triangle\n";
	std::cout << "Your decision: ";
	
	int  triangle{};
	std::cin >> triangle;
	
	switch (triangle)
	{
		case 1:
		{
			for (int i{ 1 }; i <= inputAsInt; ++i)
			{
				std::cout << std::string(i, '*') << '\n';

			}
		
			break;
		}
		
		case 2:
		{
		
			for (int i{ 1 };i <= inputAsInt; i += 2)
			{
				std::cout << std::string((inputAsInt - i) / 2, ' ') << std::string(i, '*') << std::string((inputAsInt - i) / 2, ' ') << '\n';
			
			}
		
		
			if (inputAsInt % 2 == 0 )
				std::cout << "\nTrinagle with desirad base lenght can not be created. The base was rounded to number: " << inputAsInt - 1 << '\n';
			
			break;
		}
		default:
		{
			std::cout << "Invalid Selection. (You stupid or what?)";
		}
	
	
	}
}