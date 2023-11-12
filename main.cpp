#include <iostream>
#include "enterprise.pb.h"

int main()
{
	std::cout << "\tTASK 32.3 COMPANY MODEL DATA\n\n";

	Enterprise enterprise;

	enterprise.set_foundationyear(2023);
	enterprise.set_legaladdress("Baker-Street");
	enterprise.set_name("Skillbox");
	enterprise.set_industry("it");
	enterprise.set_internationalbusiness(true);

	std::cout << "Year of foundation\t" << enterprise.foundationyear << "\n";
	std::cout << "Address\t" << enterprise.legaladdress << "\n";
	std::cout << "Name\t" << enterprise.name << "\n";
	std::cout << "Industry\t" << enterprise.industry << "\n";
	if (enterprise.internationalbusiness)
	{
		std::cout << "The company conducts foreign economic activities\n";
	}

	return 0;
}
