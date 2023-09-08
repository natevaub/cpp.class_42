/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:51:47 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/08 16:14:37 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) :
	_accountIndex(Account::_nbAccounts), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_totalAmount << ";created" << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	std::cout << "index" << Account::_accountIndex << ";p_amout:" << Account::_amount << ";deposit:";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << deposit << ";amout:" << this->_amount << ";nb_deposits:" << this->_nbDeposits;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}