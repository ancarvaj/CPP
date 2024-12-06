#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string name;
		std::string last_name;
		std::string nickname;
		std::string dark_secret;
		size_t	phone_number;

	public:
		Contact() {};
		std::string getName();
		std::string getLastName();
		std::string getNickname();
		std::string getDarkSecret();
		size_t	getPhoneNumber();
		void	setName(std::string str);
		void	setLastName(std::string str);
		void	setNickname(std::string str);
		void	setDarkSecret(std::string str);
		void	setPhoneNumber(size_t number);


};

#endif
