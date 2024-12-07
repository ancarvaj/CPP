#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	dark_secret;
		std::string	phone_number;

	public:
		Contact() : name(""), last_name(""), nickname(""), dark_secret(""), phone_number("") {};
		std::string	getName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getDarkSecret();
		std::string	getPhoneNumber();
		void		setName(std::string str);
		void		setLastName(std::string str);
		void		setNickname(std::string str);
		void		setDarkSecret(std::string str);
		void		setPhoneNumber(std::string number);
};

#endif
