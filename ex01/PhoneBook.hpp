/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:29:30 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/14 17:54:50 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook
{
	private:
		int		index[8];
		Contact	contacts[8];
		int numContacts;
		void DisplayAllContacts();
	public:
		PhoneBook(void);
		void Add();
		void Search();
};

#endif
