/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:35:03 by jescully          #+#    #+#             */
/*   Updated: 2022/01/21 17:10:16 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) 
{
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _nbAccounts; 
    std::cout << ";amount:" << _amount; 
    std::cout << ";created";
    std::cout << std::endl;
    _accountIndex = _nbAccounts;
    _nbAccounts++;

    return ;
}

void    Account::_displayTimestamp(void)
{
    time_t time = std::time(NULL);
    std::cout << std::put_time(std::localtime(&time), "[%G%m%d_%H%M%S] ");
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex; 
    std::cout << ";amount:" << _amount; 
    std::cout << ";closed";
    std::cout << std::endl;
    return ;
}

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return 0;
}

void    Account::makeDeposit (int deposit)
{
    _displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
    if (deposit > 0)
    {
        Account::_totalAmount += deposit;
        this->_amount += deposit;
        Account::_totalNbDeposits++;
        _nbDeposits++;
    }
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;

}

bool    Account::makeWithdrawal (int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex; 
    std::cout << ";p_amount:" << _amount; 
    if (withdrawal < 0 || withdrawal > Account::_amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return 1;
    }
    else
    {
		std::cout << ";withdrawal:" << withdrawal;
        Account::_totalAmount -= withdrawal;
        this->_amount -= withdrawal;
        Account::_totalNbWithdrawals++;
        Account::_nbWithdrawals++;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
    }
    return 0;
}

int     Account::checkAmount(void) const
{
    return Account::_amount;
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits;
    std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
    std::cout << std::endl;
}
