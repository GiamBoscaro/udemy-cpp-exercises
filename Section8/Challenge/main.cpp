#include <iostream>

using namespace std;

int main()
{
    int value {0};
    int change {0};
    cout << "Enter your dollar change: ";
    cin >> change;
    
    cout << "Result:\n";
    value = change/100;
    change = change%100;
    cout << "Dollars: " << value << endl;
    
    value = change/25;
    change = change%25;
    cout << "Quarters: " << value << endl;
    
    value = change/10;
    change = change%10;
    cout << "Dime: " << value << endl;
    
    value = change/5;
    change = change%5;
    cout << "Nickel: " << value << endl;
    
    cout << "Penny: " << change << endl;
    return 0;
}