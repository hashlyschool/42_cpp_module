/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:31:18 by hashly            #+#    #+#             */
/*   Updated: 2022/04/23 22:33:20 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() : last_contact(0) {}

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < 8; ++i)
		this->list[i].clear();
}

void	PhoneBook::printBook()
{
	for (int i = 0; i < 8; ++i)
	{
		std::cout
		<< i << '|'
		<< this->list[i].getFirstName() << '|'
		<< this->list[i].getLastName() << '|'
		<< this->list[i].getNickname() << '|' << std::endl;
	}
}

void	PhoneBook::printContact(int id)
{
	if (id < 0 || id > 7)
	{
		std::cout << "" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; ++i)
	{
		if (this->list[i].contactEmpty())
			continue ;
		std::cout << i << std::endl;
		std::cout << this->list[i].getFirstName() << std::endl;
		std::cout << this->list[i].getLastName() << std::endl;
		std::cout << this->list[i].getNickname() << std::endl;
		std::cout << this->list[i].getPhoneNumber() << std::endl;
		std::cout << this->list[i].getDarkestSecret() << std::endl;
	}
}

void	PhoneBook::addContact()
{
	std::string	s;

	std::cout << "Please enter first name" << std::endl;
	std::cin >> s;
	this->list[this->last_contact].setFirstName(s);
	std::cout << "Please enter last name" << std::endl;
	std::cin >> s;
	this->list[this->last_contact].setLastName(s);
	std::cout << "Please enter nick name" << std::endl;
	std::cin >> s;
	this->list[this->last_contact].setNickName(s);
	std::cout << "Please enter Phone number" << std::endl;
	std::cin >> s;
	this->list[this->last_contact].setPhoneNumber(s);
	std::cout << "Please enter darkest secret" << std::endl;
	std::cin >> s;
	this->list[this->last_contact].setDarkestSecret(s);
	if (++this->last_contact == 8)
		this->last_contact = 0;
}
