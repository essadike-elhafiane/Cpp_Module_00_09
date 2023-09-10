/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 08:23:29 by eelhafia          #+#    #+#             */
/*   Updated: 2023/05/30 18:35:22 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    std::time_t currentTime = std::time(nullptr);
    // std::string timeString = std::ctime(&currentTime);
    std::tm* localTime = std::localtime(&currentTime);
     std::cout << "["
              << std::put_time(localTime, "%Y%m%d_%H%M%S")
              << "] ";
    // std::cout << "[" << timeString.substr(0, timeString.length() - 1) << "]";
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
    
}
int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);                                                                   
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
    
}

void	Account::displayAccountsInfos( void ){
    Account::_displayTimestamp();
    std::cout << "accounts:"<< getNbAccounts() << ";"
    << "total:" <<  getTotalAmount() << ";"
    << "deposits:" << getNbDeposits() << ";"
    << "withdrawals:" << getNbWithdrawals()
    << std::endl;
    return ;
}

Account::Account( int initial_deposit )
{
    this->_displayTimestamp();
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount <<";" << "created" << std::endl;
}

Account::Account( void )
{
    this->_displayTimestamp();
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::~Account( void )
{    
     _nbAccounts--;
     this->_displayTimestamp();
    // _accountIndex = _nbAccounts - 1;
     std::cout << "index:" << _accountIndex << ";"
     << "amount:" << _amount <<";" << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";";
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";"
                << "amount:" << _amount << ";"
                << "nb_deposit:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    
    this->_displayTimestamp();
    if (checkAmount() < withdrawal)
    {
         std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount
        <<"withdrawals:refused"<< std::endl;
        return (false);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount;
    _amount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const{
    return _amount;
}

void	Account::displayStatus( void ) const{
   this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "amount:" << _amount << ";"
    << "deposits:" << _nbDeposits << ";"
    << "withdrawals:" << _nbWithdrawals << std::endl;
}
