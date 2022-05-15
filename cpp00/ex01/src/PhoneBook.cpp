/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:31:18 by hashly            #+#    #+#             */
/*   Updated: 2022/05/15 19:19:42 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() : last_contact(-1) {}

PhoneBook::PhoneBook(const PhoneBook &copy) : last_contact(copy.last_contact)
{
	for (int i = 0; i < NUM_CONTACT; ++i)
		this->list[i] = copy.list[i];
}

PhoneBook::~PhoneBook()
{
	// for (int i = 0; i < NUM_CONTACT; ++i)
	// 	this->list[i].clear();
}

PhoneBook &PhoneBook::operator=(const PhoneBook &book)
{
	if (this == &book)
		return (*this);
	this->last_contact = book.last_contact;
	for (int i = 0; i < NUM_CONTACT; ++i)
		this->list[i] = book.list[i];
	return (*this);
}

const Contact &PhoneBook::operator[](int index) const
{
	if (index < 0 || index >= NUM_CONTACT)
	{
		std::cout
		<< "Invalid index. The first contact will be displayed"
		<< std::endl;
		return (this->list[0]);
	}
	return (this->list[index]);
}

const Contact	&PhoneBook::getContact(int index) const
{
	return (this->operator[](index));
}

bool	PhoneBook::bookIsEmpty() const
{
	return (this->last_contact == -1);
}

void	PhoneBook::addContact()
{
	std::string	s;

	if (this->last_contact == -1)
		++this->last_contact;
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
	if (++this->last_contact == NUM_CONTACT)
		this->last_contact = 0;
}

static std::string	strTrim(const std::string &str)
{
	std::string	ret;

	ret = str;
	if (str.size() > WIDTH_COL)
	{
		ret = str.substr(0, WIDTH_COL);
		ret[9] = '.';
	}
	return (ret);
}

std::ostream		&operator<<(std::ostream &os, const PhoneBook &book)
{
	size_t		index;
	Contact		temp;

	if (book.bookIsEmpty())
		return (os << "Phone book is empty" << std::endl);
	os << "|" << std::setw(WIDTH_COL) << "index"
	<< "|" << std::setw(WIDTH_COL) << "first name"
	<< "|" << std::setw(WIDTH_COL) << "last name"
	<< "|" << std::setw(WIDTH_COL) << "nick name"
	<< "|" << std::endl;
	index = 0;
	temp = book[index];
	while (temp.contactIsEmpty() == false && index < NUM_CONTACT)
	{
		os << "|" << std::setw(WIDTH_COL) << index + 1
		<< "|" << std::setw(WIDTH_COL) << strTrim(temp.getFirstName())
		<< "|" << std::setw(WIDTH_COL) << strTrim(temp.getLastName())
		<< "|" << std::setw(WIDTH_COL) << strTrim(temp.getNickName())
		<< "|" << std::endl;
		++index;
		temp = book[index];
	}
	return (os);
}
