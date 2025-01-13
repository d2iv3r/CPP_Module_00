/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:00:11 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/14 17:53:25 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main(int argc, char *argv[])
{
	int			i;
	int			j;
	std::string tmp;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			tmp = argv[i];
			for (j = 0; j < tmp.length(); j++)
			{
				if (std::isalpha(tmp.at(j)))
					std::cout << (char)std::toupper(tmp.at(j));
				else
					std::cout << tmp.at(j);
			}
		}
	}
	else
		std::cout << "Nothing to say" << std::endl;
	return (0);
}
