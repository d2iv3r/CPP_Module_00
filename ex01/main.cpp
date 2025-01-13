/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:25:01 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/14 17:13:07 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	pb;

	while (1)
	{
		std::cout << "Enter a command : ";
		std::getline (std::cin, command);
		if (std::cin.fail())
			exit(1);
		else if (command == "ADD")
			pb.Add();
		else if (command == "SEARCH")
			pb.Search();
		else if (command == "EXIT")
			exit(0);
		else
			std::cout << "Invalid command!" << std::endl;
	}
}
