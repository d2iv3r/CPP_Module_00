/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:28:15 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/14 17:33:31 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::GetInput(std::string str)
{
	std::string tmp;

	std::cout << str;
	std::getline(std::cin, tmp);
	if (std::cin.fail())
		exit(1);
	return tmp;
}

bool Contact::NewContact()
{
	this->first_name = GetInput("Enter First Name     : ");
	this->last_name = GetInput("Enter Last Name      : ");
	this->nick_name = GetInput("Enter NickName       : ");
	this->phone_number = GetInput("Enter Phone Number   : ");
	this->darkest_secret = GetInput("Enter Darkest Secret : ");
	if (first_name.empty() || last_name.empty() || nick_name.empty()
		|| phone_number.empty() || darkest_secret.empty())
		return false;
	return true;
}

void Contact::PrintContact(std::string str)
{
	int	i;

	if (str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << str.at(i);
		std::cout << ".";
	}
}

void Contact::DisplayContactInfos()
{
    std::cout << "First Name     : " << this->first_name << std::endl;
    std::cout << "Last Name      : " << this->last_name << std::endl;
    std::cout << "NickName       : " << this->nick_name << std::endl;
    std::cout << "Phone Number   : " << this->phone_number << std::endl;
    std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
}

void Contact::DisplayContact()
{
	PrintContact(this->first_name);
	std::cout << "|";
	PrintContact(this->last_name);
	std::cout << "|";
	PrintContact(this->nick_name);
	std::cout << "|";
}
