/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:00:46 by cjad              #+#    #+#             */
/*   Updated: 2022/08/01 17:58:25 by cjad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900) 
         << (now->tm_mon + 1)
         <<  now->tm_mday
		 << "_"
		 << now->tm_hour
		 << now->tm_min
		 << now->tm_sec
         << "] ";
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

Account::Account(int initial_deposit)
{
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std:: cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits <<";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	if (withdrawal > this->checkAmount())
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return(0);
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount-= withdrawal;
	this->_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals++ << std::endl;
	return (1);
}