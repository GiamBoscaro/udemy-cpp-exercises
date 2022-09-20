#include <iostream>
#include <string>

#include "movie.h"

using namespace std;

// Constructors

Movie::Movie(string name, string rating, int watched) 
: name(name), rating(rating), watched(watched) {}

Movie::Movie(string name, string rating) 
: Movie (name, rating, 0) {}

Movie::Movie(string name) 
: Movie (name, "PG-13", 0) {}

Movie::Movie(const Movie &source) 
: Movie{source.name, source.rating, source.watched} {
}

Movie::~Movie() {
}

// Methods

void Movie::display() const {
    cout << name << " [" << rating << "] (Watched " << watched << " times)";
}