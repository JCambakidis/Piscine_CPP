#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t result = std::time(0);
	std::tm *lkl_tn = localtime(&result);
    std::cout << "[" << std::setfill('0') << 1900 + lkl_tn->tm_year;
	std::cout << std::setw(2) << 1 + lkl_tn->tm_mon;
	std::cout << std::setw(2) << lkl_tn->tm_mday;
	std::cout << "_" << std::setw(2) << lkl_tn->tm_hour;
	std::cout << std::setw(2) << lkl_tn->tm_min;
	std::cout << std::setw(2) << lkl_tn->tm_sec << "] ";
}

int		Account::checkAmount( void ) const
{
	return this->_amount > 0;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

//Constructor

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += _amount;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	this->_nbAccounts--;
	this->_totalAmount -= _amount;
	this->_totalNbDeposits -= this->_nbDeposits;
	this->_totalNbWithdrawals -= this->_nbWithdrawals;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

Account::Account( void )
{
	_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += _amount;
	this->_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}