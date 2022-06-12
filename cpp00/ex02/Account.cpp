/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 10:57:05 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/12 22:24:36 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int tmp[8];

Account::~Account() {

    
    tmp[_accountIndex] = _amount;
    _accountIndex--;
    if (_accountIndex == -1) {
        for (int i = 0; i < 8; i++)
        {
            _displayTimestamp();
            std::cout << "index:" << i << ";amount:" << tmp[i] << ";closed" << std::endl;
        }
    }
};

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount += initial_deposit;
    _totalAmount += initial_deposit;
     _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "created" << std::endl;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
              << "total:" << getTotalAmount() << ";" << "deposits:"
               << getNbDeposits() << ";"
              << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}
int Account::getTotalAmount()
{
    return _totalAmount;
}
int Account::getNbDeposits()
{
    return _totalNbDeposits;
}
int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";" 
        << "deposits:" << _nbDeposits << ";"
        << "withdrawals:" << _nbWithdrawals << std::endl;
    
}

void    Account::makeDeposit(int deposit)
{
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "p_amount" << _amount << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";" 
        << "nb_deposits:" << _nbDeposits << std::endl;
        
}

int     Account::checkAmount(void) const
{
        return _amount;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
            << "p_amount" << _amount << ";";
    if (_amount >= withdrawal)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";"
            << "amount:" << _amount << ";" 
            << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "withdrawal:refused" << std::endl;
    return false;
}