/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:53 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/14 18:09:05 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	int i;

	for(i = 0; i < 8; i++)
		index[i] = -1;
	numContacts = 0;
}

void PhoneBook::Add()
{
	Contact contact;

	if (!contact.NewContact())
	{
		std::cout << "Contact can't have empty field!" << std::endl;
		return ;
	}
	if (numContacts == 8)
		this->numContacts = 0;
	this->contacts[numContacts] = contact;
	this->index[numContacts] = numContacts;
	numContacts++;
}

void PhoneBook::Search()
{
	int			i;
	std::string	tmp;
	int			ind;

	DisplayAllContacts();
	std::cout << "Enter the index : ";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
		exit(1);
	if (tmp.empty())
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	for (i = 0; i < tmp.length(); i++)
	{
		if (!isdigit(tmp[i]))
		{
			std::cout << "Invalid index!(must be an integer)" << std::endl;
			return ;
		}
	}
	ind = std::atoi(tmp.c_str());
	for (i = 0; i < 8; i++)
	{
		if (index[i] == ind)
		{
			contacts[i].DisplayContactInfos();
			return ;
		}
	}
	std::cout << "Contact not exist!" << std::endl;

}

void PhoneBook::DisplayAllContacts()
{
	int	i;

	std::cout << "|     index|first name| last name| nick name|" << std::endl;
	for (i = 0; i < 8; i++)
	{
		if (index[i] != -1)
		{
			std::cout << "|" << std::setw(10) << i << "|";
			contacts[i].DisplayContact();
			std::cout << std::endl;
		}
	}
}
