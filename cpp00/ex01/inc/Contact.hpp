/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:30:16 by hashly            #+#    #+#             */
/*   Updated: 2022/05/15 19:31:15 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACH_HPP__
# define __CONTACH_HPP__

# define WIDTH_COL 10

# include <string>
# include <iostream>

class Contact
{
private:
	std::string			FirstName;
	std::string			LastName;
	std::string			NickName;
	std::string			PhoneNumber;
	std::string			DarkestSecret;
	bool				isEmpty;
public:
	Contact();
	Contact(const Contact&);
	~Contact();

	Contact				&operator=(const Contact& op);

	void				setFirstName(const std::string &FirstName);
	void				setLastName(const std::string &LastName);
	void				setNickName(const std::string &NickName);
	void				setPhoneNumber(const std::string &PhoneNumber);
	void				setDarkestSecret(const std::string &DarkestSecret);

	const std::string	&getFirstName() const;
	const std::string	&getLastName() const;
	const std::string	&getNickName() const;
	const std::string	&getPhoneNumber() const;
	const std::string	&getDarkestSecret() const;

	bool				contactIsEmpty() const;
};

std::ostream	&operator<<(std::ostream &o, const Contact &rhs);

#endif
