#include "Contact.hpp"

std::string Contact::getName()
{
	return (name);
}

std::string Contact::getLastName()
{
	return (last_name);
}

std::string Contact::getNickname()
{
	return (nickname);
}

std::string Contact::getDarkSecret()
{
	return (dark_secret);
}

std::string	Contact::getPhoneNumber()
{
	return (phone_number);
}

void	Contact::setName(std::string str)
{
	name = str;
}

void	Contact::setLastName(std::string str)
{
	last_name = str;
}

void	Contact::setNickname(std::string str)
{
	nickname = str;
}

void	Contact::setDarkSecret(std::string str)
{
	dark_secret = str;
}

void	Contact::setPhoneNumber(std::string number)
{
	phone_number = number;
}
