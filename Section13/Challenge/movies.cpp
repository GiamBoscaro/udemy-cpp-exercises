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
    if (this->collection.size() == 0) {
        cout << "No movies" << endl;
    }
    for(const Movie &m: this->collection) {
        m.display();
        cout << endl;
    }
}

void Movies::add(const Movie &movie) {
    for(const Movie &m: this->collection) {
        if(m.get_name() == movie.get_name()) {
            return;
        }
    }
    collection.push_back(movie);
}

void Movies::add(const Movie &&movie) {
    for(const Movie &m: this->collection) {
        if(m.get_name() == movie.get_name()) {
            return;
        }
    }
    collection.push_back(movie);
}

void Movies::watch(const string name) {
    for(Movie &m: this->collection) {
        if(m.get_name() == name) {
            m.watch();
            return;
        }
    }
}

size_t Movies::size() const {
    return collection.size();
}