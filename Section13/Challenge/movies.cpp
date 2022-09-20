#include <iostream>
#include <string>
#include <vector>

#include "movies.h"

using namespace std;

Movies::Movies() {
}

Movies::~Movies() {
}

void Movies::display() const {
    for(Movie m: this->collection) {
        m.display();
        cout << endl;
    }
}

void Movies::add(const Movie &movie) {
    collection.push_back(movie);
}

void Movies::add(const Movie &&movie) {
    collection.push_back(movie);
}

void Movies::watch(const string name) {
    for(Movie &m: this->collection) {
        if(m.get_name() == name) {
            m.watch();
            break;
        }
    }
}

size_t Movies::size() const {
    return collection.size();
}