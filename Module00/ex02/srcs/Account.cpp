/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <nvaubien@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:51:47 by nvaubien          #+#    #+#             */
/*   Updated: 2023/09/09 17:49:42 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit) :
	_accountIndex(Account::_nbAccounts), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";deposit:";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
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
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t	currentTime = std::time(0);
	std::tm		*localTime = std::localtime(&currentTime);
	
	std::cout << "[" << localTime->tm_year + 1900;
	if (1 + localTime->tm_mon < 10)
		std::cout << "0";
	std::cout << 1 + localTime->tm_mon;

	if (1 + localTime->tm_mday < 10)
		std::cout << "0";
	std::cout << 1 + localTime->tm_mday << "_";

	if (1 + localTime->tm_hour < 10)
		std::cout << "0";
	std::cout << 1 + localTime->tm_hour;

	if (1 + localTime->tm_min < 10)
		std::cout << "0";
	std::cout << 1 + localTime->tm_min;

	if (1 + localTime->tm_sec < 10)
		std::cout << "0";
	std::cout << 1 + localTime->tm_sec << "] ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
