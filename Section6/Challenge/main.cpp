#include <iostream>

using namespace std;

int main()
{
    int small_rooms_count {0};
    int large_rooms_count {0};
    
    const double small_rooms_price {25};
    const double large_rooms_price {35};
    const double tax {6.6};
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n";
    
    cout << "How many small rooms would you like to have cleaned? ";
    cin >> small_rooms_count;
    cout << "How many large rooms would you like to have cleaned? ";
    cin >> large_rooms_count;
    
    cout << "Small room count: " << small_rooms_count << endl;
    cout << "Large room count: " << large_rooms_count << endl;
    cout << "Small room price: $" << small_rooms_price << endl;
    cout << "Large room price: $" << large_rooms_price << endl;
    double cost_without_tax = small_rooms_count*small_rooms_price + large_rooms_count*large_rooms_price;
    cout << "Cost: $" << cost_without_tax << endl;
    cout << "Tax: $" << tax << endl;
    cout << "\nTotal: $" << cost_without_tax + tax;

    return 0;
}
