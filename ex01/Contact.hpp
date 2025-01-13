/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:26:23 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/14 17:54:24 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
		std::string GetInput(std::string str);
		void PrintContact(std::string str);
	public:
		void DisplayContact();
		bool NewContact();
		void DisplayContactInfos();
};

#endif
