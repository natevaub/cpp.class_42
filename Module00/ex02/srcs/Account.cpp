/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:51:47 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/09 01:13:11 by nvaubien         ###   ########.fr       */
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

bool	Account::makeWithdrawal( int withdrawal ) {
	std::cout << "index: " << this->_accountIndex << "amount" << this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	else {
		this->_amount -= withdrawal;
		this-> _nbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account:: _totalNbWithdrawals++;
		Account:: _totalAmount -= withdrawal;
	}
	return (true);
}

void	Account::displayStatus( void ) const {
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << ";deposits" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account(void) {
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
