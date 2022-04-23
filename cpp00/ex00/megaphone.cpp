/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:21:34 by hashly            #+#    #+#             */
/*   Updated: 2022/04/23 13:51:57 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * @brief calc len str
 *
 * @param s
 * @return int
 */
int		ft_strlen(char *s)
{
	int i;

	for (i = 0; s && s[i]; i++);
	return (i);
}

/**
 * @brief
 *
 * @param c
 * @return char
 */
char	ft_toupper(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}


/**
 * @brief
 *
 * @param argc
 * @param argv
 * @return int
 */
int		main(int argc, char **argv)
{
	int	len_arg;

	if (argc >1)
	{
		for (int i = 1; i < argc; i++)
		{
			len_arg = ft_strlen(argv[i]);
			for (int j = 0; j < len_arg; j++)
				std::cout << ft_toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
