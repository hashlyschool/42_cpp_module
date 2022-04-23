/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:31:44 by hashly            #+#    #+#             */
/*   Updated: 2022/04/23 22:18:25 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MYPHONEBOOK_HPP__
#define __MYPHONEBOOK_HPP__

#include <iostream>
#include <iomanip>
#include "./Contact.hpp"

class PhoneBook
{
private:
	Contact	list[8];
	int		last_contact;
public:
	PhoneBook();
	~PhoneBook();

	void	printBook();
	void	printContact(int id);
	void	addContact();
};

#endif
