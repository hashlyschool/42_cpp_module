/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:29:49 by hashly            #+#    #+#             */
/*   Updated: 2022/04/23 22:10:17 by hashly           ###   ########.fr       */
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
{	this->FirstName = FirstName;}

void	Contact::setLastName(const std::string &LastName)
{	this->LastName = LastName;}

void	Contact::setNickName(const std::string &NickName)
{	this->NickName = NickName;}

void	Contact::setPhoneNumber(const std::string &PhoneNumber)
{	this->PhoneNumber = PhoneNumber;}

void	Contact::setDarkestSecret(const std::string &DarkestSecret)
{	this->DarkestSecret = DarkestSecret;}

const std::string &Contact::getFirstName()
{	return (this->FirstName);}

const std::string &Contact::getLastName()
{	return (this->LastName);}

const std::string &Contact::getNickname()
{	return (this->NickName);}

const std::string &Contact::getPhoneNumber()
{	return (this->PhoneNumber);}

const std::string &Contact::getDarkestSecret()
{	return (this->DarkestSecret);}

void	Contact::clear()
{
	this->FirstName.clear();
	this->LastName.clear();
	this->NickName.clear();
	this->PhoneNumber.clear();
	this->DarkestSecret.clear();
}

bool	Contact::contactEmpty()
{	return (this->isEmpty);}
