/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:34:34 by hashly            #+#    #+#             */
/*   Updated: 2022/05/15 19:15:30 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

static void	title(void)
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your phonebook !\nThe available entries are : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
}

static	void end()
{
	std::cout << "Phone book close" << std::endl;
}

static int	get_status()
{
	std::string	s;

	std::cout << "Please, write ADD, SEARCH or EXIT" << std::endl;
	std::cin >> s;
	if (s.compare("ADD") == 0)
		return (1);
	else if (s.compare("SEARCH") == 0)
		return (2);
	else if (s.compare("EXIT") == 0)
		return (3);
	return (0);
}

static int	add_contact(PhoneBook &PhoneBook)
{
	PhoneBook.addContact();
	return (0);
}

static int	search(PhoneBook &PhoneBook)
{
	int	index;

	std::cout << PhoneBook << std::endl;
	if (PhoneBook.bookIsEmpty() == false)
	{
		std::cout << "Please, enter index" << std::endl;
		std::cin >> index;
		std::cout << PhoneBook[index - 1];
	}
	return (0);
}

int	main()
{
	int			status;
	PhoneBook	myPhoneBook;

	status = 0;
	title();
	while (status != 3)
	{
		status = get_status();
		if (status == 1) //add
			status = add_contact(myPhoneBook);
		else if (status == 2) //search
			status = search(myPhoneBook);
		else if (status == 3) //exit
			end();
	}
	return (0);
}
