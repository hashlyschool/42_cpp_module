/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:31:44 by hashly            #+#    #+#             */
/*   Updated: 2022/05/15 19:31:07 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MYPHONEBOOK_HPP__
# define __MYPHONEBOOK_HPP__

# include <iostream>
# include <iomanip>
# include "./Contact.hpp"

# define NUM_CONTACT 8

class PhoneBook
{
private:
	Contact			list[NUM_CONTACT];
	int				last_contact;
public:
	PhoneBook();
	PhoneBook(PhoneBook const &src );
	~PhoneBook();

	PhoneBook		&operator=(const PhoneBook &book);
	const Contact	&operator[](int index) const;

	const Contact	&getContact(int index) const;
	bool			bookIsEmpty() const;
	void			addContact();
};

std::ostream		&operator<<(std::ostream &os, const PhoneBook &book);

#endif
