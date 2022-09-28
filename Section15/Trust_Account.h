#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account: public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_dep_bonus = 50;
    static constexpr double def_dep_bonus_limit = 5000;
    static constexpr int def_max_withdrawal = 3;
protected:
    double int_rate;
    double dep_bonus;
    double dep_bonus_limit;
    int max_withdrawal;
    int withdrawal_count;
public:
    Trust_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate, double dep_bonus = def_dep_bonus, double dep_bonus_limit = def_dep_bonus_limit, int max_withdrawal = def_max_withdrawal);    
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _TRUST_ACCOUNT_H_
