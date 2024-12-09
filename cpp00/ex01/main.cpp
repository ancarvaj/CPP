#include "PhoneBook.hpp"
#include <iomanip>

std::string	get_contact_field(const std::string field)
{
	std::string str;

	std::cout << field;
	getline(std::cin, str);
	return (str);
}

int	ft_add_contact(Contact *con)
{
	std::cout << std::endl;
	con->setName(get_contact_field("Name: "));
	if (!con->getName().compare(""))
		return (1);
	con->setLastName(get_contact_field("Last Name: "));
	if (!con->getLastName().compare(""))
		return (1);
	con->setNickname(get_contact_field("Nickname: "));
	if (!con->getNickname().compare(""))
		return (1);
	con->setPhoneNumber(get_contact_field("Phone Number: "));
	if (!con->getPhoneNumber().compare(""))
		return (1);
	con->setDarkSecret(get_contact_field("Darkest secret: "));
	if (!con->getDarkSecret().compare(""))
		return (1);
	std::cout << std::endl;
	return (0);
}

void	display_contact(PhoneBook book, int index)
{
	std::cout << std::endl;
	std::cout << book.getContact(index).getName() << std::endl;
	std::cout << book.getContact(index).getLastName() << std::endl;
	std::cout << book.getContact(index).getNickname() << std::endl;
	std::cout << book.getContact(index).getPhoneNumber() << std::endl;
	std::cout << book.getContact(index).getDarkSecret() << std::endl;
	std::cout << std::endl;
}

void	cout_len(std::string str, int len)
{
	std::cout << std::setw(len) << std::right << str.substr(0, 10) << "|";
}

int	user_contact_interface(int i, PhoneBook book)
{
	std::cout << "\nWhich contact do you want to see?\nenter a number betwen 1 and 8\n";
	std::cout << "if you dont want to see a specific contact enter the number 0\n\n";
	std::cin >> i;
	if (i == 0)
	{
		std::cout << "exitig...\n\n";
		return 1;
	}
	while (i < 1 || i  > 8 || !book.getContact(i - 1).getName().compare(""))
	{
		std::cout << "Wrong contact, enter a new one\n";
		std::cin >> i;
		if (i == 0)
		{
			std::cout << "exitig...\n\n";
			return 1;
		}
	}
	display_contact(book, i - 1);
	return (0);
}

void	ft_search_contact(PhoneBook book)
{
	int	i = -1;

	std::cout << std::endl;
	while (++i < 8 && book.getContact(i).getName().compare(""))
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		cout_len(book.getContact(i).getName(), 10);
		cout_len(book.getContact(i).getLastName(), 10);
		cout_len(book.getContact(i).getNickname(), 10);
		std::cout << std::endl;
	}
	if (user_contact_interface(0, book))
		return ;
	std::string user;
	while (user.compare("no"))
	{
		std::cout << "do you want to see a new contact? yes/no\n";
		std::cin >> user;
		std::cout << std::endl;
		if (!user.compare("yes"))
		{
			if (user_contact_interface(0, book))
				return ;
		}
		else
			continue ;
	}
	std::cout << std::endl;
}

int	main(void)
{
	int	i = 0;
	std::string str;
	Contact	contact;
	PhoneBook book;

	while (1)
	{
		getline(std::cin, str);
		if (i > 7)
			i = 0;
		if (!str.compare("ADD"))
		{
			if (!ft_add_contact(&contact))
			{
				book.setContact(contact, i);
				i++;
			}
			else
				std::cout << "Empty field\n\n";
		}
		else if (!str.compare("SEARCH"))
			ft_search_contact(book);
		else if (!str.compare("EXIT"))
		{
			std::cout << "\nExiting program successfully\n\n";
			break ;
		}
		else
			std::cout << "COMMANDS: ADD, SEARCH, EXIT\n\n";

	}
	return (0);
}
