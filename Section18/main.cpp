#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main() {
    std::unique_ptr<Account> account1;
    std::unique_ptr<Account> account2;
    try {
        account2 = std::make_unique<Savings_Account>("Mario", -2000);
        std::cout << *account2 << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try {
        account1 = std::make_unique<Savings_Account>("Filippo", 1000);
        std::cout << *account1 << std::endl;
        account1->withdraw(500.0);
        std::cout << *account1 << std::endl;
        account1->withdraw(1000.0);
        std::cout << *account1 << std::endl;
        
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex) {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

