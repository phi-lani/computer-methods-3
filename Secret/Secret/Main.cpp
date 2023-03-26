#include <iostream>
#include <string>
#include "Secret.h"
#include "SecretDefs.h"

int main() {

	//The next two lines will only affect objects of type Secret<double>

	Secret<double> doubleBoss; //Set the password for all objects of class Secret<double>

	doubleBoss.setPassword(12345, 98765); //old password: 12345, new password: 98765

	//The next two lines will only affect objects of type Secret< std::string >

	Secret<std::string> stringBoss; //Set password for all objects of class Secret<std::string>

	stringBoss.setPassword(12345, 55555); //old password: 12345, new password: 55555

	Secret<double> exchangeRateUSD; //Lets test an object of class Secret<double>

	// setSecret() stores the secret value (16.27) if the correct password is used

	exchangeRateUSD.setSecret(98765, 16.27);

	// getSecret() retrieves the stored secret value if the correct password is used

	std::cout << "USD exchange rate: " << exchangeRateUSD.getSecret(98765) << std::endl;

	Secret<double> exchangeRateGBP; // Lets test another object of class Secret<double>

	exchangeRateGBP.setSecret(98765, 21.45);

	std::cout << "GBP exchange rate: " << exchangeRateGBP.getSecret(98765) << std::endl;

	Secret<std::string> greetingSA; //Lets test and object of class Secret<std::string>

	greetingSA.setSecret(55555, "Howzit!");

	std::cout << "SA greeting: " << greetingSA.getSecret(55555) << std::endl;

	Secret<std::string> greetingAU; //Lets test another object of Secret<std::string>

	greetingAU.setSecret(55555, "G'day mate!");

	std::cout << "AU greeting: " << greetingAU.getSecret(55555) << std::endl;

	Secret<int> specialNumber; //Lets test class Secret<int> that still has the default password

	specialNumber.setSecret(12345, 786);

	std::cout << "Special number: " << specialNumber.getSecret(12345) << std::endl;

	return 0;

}