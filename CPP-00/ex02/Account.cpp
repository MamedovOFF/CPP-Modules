#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::_displayTimestamp( void ) 
{
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    std::cout << std::setfill('0') << "[" << std::setw(4) << (now->tm_year + 1900)
        << std::setw(2) << now->tm_mon << std::setw(2) << now->tm_mday
        << "_" << std::setw(2) << now->tm_hour << std::setw(2) << now->tm_min
        << std::setw(2) << now->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" <<  Account::_nbAccounts 
    << ";total:" << Account::_totalAmount  
    << ";deposits:" << Account::_totalNbDeposits
    << ";withdrawals:" << Account::_totalNbWithdrawals
    << std::endl;
}

void    Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
        << this->_nbDeposits << ";widthdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    int p_amount = this->_amount;
    this->_nbDeposits++;
    this->_amount += deposit;
    Account::_totalNbDeposits += this->_nbDeposits;
    Account::_totalAmount+=deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
    << ";p_amount:" << p_amount 
    << ";deposit:" << deposit 
    << ";amount:" << this->_amount
     << ";nb_deposits:" << this->_nbDeposits 
    << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    int p_amount = this->_amount;
    Account::_displayTimestamp();

    std::cout << "index:" << this->_accountIndex 
    << ";p_amount:" << p_amount;

    if (this->_amount - withdrawal <= 0) {
        std::cout << ";withdrawal:refused" << std::endl;
        return  false;
    }
    else 
    {
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        this->_amount -= withdrawal;
        std::cout << ";withdrawal:" << withdrawal 
        << ";amount:" << this->_amount
        << ";nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
    }
    return true;
}

int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}