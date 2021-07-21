/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:45:32 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/21 21:18:26 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

void Account::_displayTimestamp(void)
{
	time_t curr = time(0);
	struct tm *tm = localtime(&curr);

	std::cout << "[" << (tm->tm_year + 1900);
	if(tm->tm_mon < 10)
		std::cout << "0" << (tm->tm_mon + 1);
	else
		std::cout << (tm->tm_mon + 1);
	if(tm->tm_mday < 10)
		std::cout << "0" << tm->tm_mday << "_";
	else
		std::cout << tm->tm_mday << "_" ;
	if(tm->tm_hour < 10)
		std::cout << "0" << tm->tm_hour;
	else
		std::cout << tm->tm_hour;
	if(tm->tm_min < 10)
		std::cout << "0" << tm->tm_min;
	else
		std::cout << tm->tm_min;
	if(tm->tm_sec < 10)
		std::cout << "0" << tm->tm_sec;
	else
		std::cout << tm->tm_sec;
	std::cout << "] ";
	return;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout <<";amount:" << initial_deposit;
	std::cout << ";created" <<std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl; 
	return;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout <<";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount ;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << deposit + this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if(this->_amount - withdrawal < 0)
	{
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:refused";
	}
	else
	{
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount - withdrawal;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
	}
	std::cout << std::endl;
}
