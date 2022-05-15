/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:29:49 by hashly            #+#    #+#             */
/*   Updated: 2022/05/15 19:30:46 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact()
:
	FirstName(),
	LastName(),
	NickName(),
	PhoneNumber(),
	DarkestSecret(),
	isEmpty(true)
{}

Contact::Contact(const Contact &copy)
:
	FirstName(copy.FirstName),
	LastName(copy.LastName),
	NickName(copy.NickName),
	PhoneNumber(copy.PhoneNumber),
	DarkestSecret(copy.DarkestSecret),
	isEmpty(copy.isEmpty)
{}

Contact::~Contact() {}

Contact &Contact::operator=(const Contact& contact)
{
	if (this == &contact)
		return (*this);
	this->FirstName = contact.FirstName;
	this->LastName = contact.LastName;
	this->NickName = contact.NickName;
	this->PhoneNumber = contact.PhoneNumber;
	this->DarkestSecret = contact.DarkestSecret;
	this->isEmpty = contact.isEmpty;
	return (*this);
}

void	Contact::setFirstName(const std::string &FirstName)
{
	this->FirstName = FirstName;
	this->isEmpty = false;
}

void	Contact::setLastName(const std::string &LastName)
{
	this->LastName = LastName;
	this->isEmpty = false;
}

void	Contact::setNickName(const std::string &NickName)
{
	this->NickName = NickName;
	this->isEmpty = false;
}

void	Contact::setPhoneNumber(const std::string &PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
	this->isEmpty = false;
}

void	Contact::setDarkestSecret(const std::string &DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
	this->isEmpty = false;
}

const std::string &Contact::getFirstName() const
{	return (this->FirstName);}

const std::string &Contact::getLastName() const
{	return (this->LastName);}

const std::string &Contact::getNickName() const
{	return (this->NickName);}

const std::string &Contact::getPhoneNumber() const
{	return (this->PhoneNumber);}

const std::string &Contact::getDarkestSecret() const
{	return (this->DarkestSecret);}

bool	Contact::contactIsEmpty() const
{	return (this->isEmpty);}

std::ostream	&operator<<(std::ostream &os, const Contact &rhs)
{
	if (rhs.contactIsEmpty())
		return (os << "Contact empty" << std::endl);
	os << "First name:\t" << rhs.getFirstName() << std::endl
	<< "Last name:\t" << rhs.getLastName() << std::endl
	<< "Nick name:\t" << rhs.getNickName() << std::endl
	<< "Phone number:\t" << rhs.getPhoneNumber() << std::endl
	<< "Darkest secret:\t" << rhs.getDarkestSecret() << std::endl;
	return (os);
}
