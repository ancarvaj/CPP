#include "PhoneBook.hpp"

std::string	get_contact_field(const std::string field)
{
	std::string str;

	std::cout << field;
	getline(std::cin, str);
	return (str);
}

int	ft_add_contact(Contact *con)
{
	
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
	return (0);
}

void	ft_search_contact(PhoneBook book)
{
	int	i = -1;
	while (++i < 8 && book.getContact(i).getName().compare(""))
		std::cout <<  book.getContact(i).getName() << std::endl;
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
				std::cout << "Empty field\n";
		}
		else if (!str.compare("SEARCH"))
			ft_search_contact(book);
		else if (!str.compare("EXIT"))
			break ;
		else
			std::cout << "COMMANDS: ADD, SEARCH, EXIT\n";

	}
	return (0);
}
