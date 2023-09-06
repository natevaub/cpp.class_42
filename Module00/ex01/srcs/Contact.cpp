/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:16 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/06 19:03:29 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) { }

Contact::~Contact(void) { }

void	Contact::setFirstName(std::string firstname)
{
	this->_FirstName = firstname;
}

void	Contact::setLastName(std::string lastname)
{
	this->_LastName = lastname;
}

void	Contact::setNickName(std::string nickname)
{
	this->_NickName = nickname;
}

void	Contact::setPhoneNumber(std::string phonenumber)
{
	this->_PhoneNumber = phonenumber;
}

void	Contact::setDarkestSecret(std::string darkestsecret)
{
	this->_DarkestSecret = darkestsecret;
}

std::string	Contact::getFirstName(void) const {
	return (this->_FirstName);
}
std::string	Contact::getLastName(void) const {
	return (this->_LastName);
}
std::string	Contact::getNickName(void) const {
	return (this->_NickName);
}
std::string	Contact::getPhoneNumber(void) const {
	return (this->_PhoneNumber);
}
std::string	Contact::getDarkestSecret(void) const {
	return (this->_DarkestSecret);
}