#include <iostream>

int main () {
    
    int favourite_number;
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> favourite_number;
    // std::endl corrisponde a \n, passa alla riga successiva nel terminale
    std::cout << "Amazing!! That's my favourit number too!" << std::endl;

    return 0;
}