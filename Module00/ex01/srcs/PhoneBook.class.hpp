/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:42:51 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/06 20:15:38 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>

class PhoneBook {
	public:
		PhoneBook(void);
		PhoneBook(int maxContacts);
		~PhoneBook(void);

		void	addContact(void);
		void	searchContact(void);
		void	displayByIndex(void);

	private:
		Contact	_contacts[8];
		int 	_maxContacts;
		int		_nbContact
};

#endif