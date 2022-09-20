#include <iostream>
#include <string>

#include "movies.h"

int main() {
    Movies movies {};
    
    movies.add({"The Lord of the Rings", "PG-13", 0});
    movies.add({"Star Wars", "PG-16", 0});
    movies.add({"Harry Potter", "PG-9", 0});
    
    movies.display();
    cout << endl;
    
    movies.watch("The Lord of the Rings");
    movies.watch("The Lord of the Rings");
    movies.watch("Harry Potter");
    
    movies.display();
    
    return 0;
};