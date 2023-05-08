/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:57:55 by albaud            #+#    #+#             */
/*   Updated: 2022/11/01 20:05:32 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

#define DIFF cout <<"[19920104_091532] ";

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
using namespace std;

Account::Account(int initial_deposit)
{
	DIFF
	cout << "index:" << _nbAccounts << ";amount:" << initial_deposit <<";created"<< endl;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	++_nbAccounts;
	_totalAmount+=initial_deposit;
}

Account::~Account(void)
{
	DIFF
	cout << "index:"<< _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";closed" << endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	DIFF
	cout << "accounts:"<< _nbAccounts;
	cout << ";total:" << _totalAmount;
	cout << ";deposits:" << _totalNbDeposits;
	cout << ";withdrawals:" << _totalNbWithdrawals << endl;
}

void	Account::makeDeposit(int deposit)
{
	DIFF
	_nbDeposits++;
	cout << "index:"<< _accountIndex;
	cout << ";p_amount:" << _amount;
	cout << ";deposit:" << deposit;
	cout << ";amount:" << _amount + deposit;
	cout << ";nb_deposits:" << _nbDeposits << endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	DIFF
	cout << "index:"<< _accountIndex;
	cout << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	cout << ";withdrawal:" << withdrawal;
	cout << ";amount:" << _amount - withdrawal;
	cout << ";nb_withdrawals:" << ++_nbWithdrawals << endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}
int		Account::checkAmount(void) const
{
	DIFF
	cout << "checkAmount" << endl;
	return (0);
}

void	Account::displayStatus(void) const
{
	DIFF
	cout << "index:"<< _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";deposits:" << _nbDeposits;
	cout << ";withdrawals:" << _nbWithdrawals << endl;
}