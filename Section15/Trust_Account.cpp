#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double dep_bonus, double dep_bonus_limit, int max_withdrawal)
    : Savings_Account {name, balance}, int_rate{int_rate}, dep_bonus{dep_bonus}, dep_bonus_limit{dep_bonus_limit},  max_withdrawal{max_withdrawal}, withdrawal_count{0} {
}

bool Trust_Account::deposit(double amount) {
    if(amount > dep_bonus_limit) {
        amount += dep_bonus;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (withdrawal_count >= max_withdrawal)
        return false;
    if (amount >= balance*0.2)
        return false;
    withdrawal_count++;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, " << account.dep_bonus << "]";
    return os;
}

