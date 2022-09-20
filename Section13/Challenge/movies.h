#ifndef __MOVIES_H__
#define __MOVIES_H__

#include <string>
#include <vector>

#include "movie.h"

using namespace std;

class Movies {
private:
    vector<Movie> collection;
    
public:
    Movies();
    ~Movies();

    void display() const;
    size_t size() const;
    void add(const Movie &movie);
    void add(const Movie &&movie);
    void watch(const string name);
    
    vector<Movie> get_collection() const {
        return collection;
    }
};
#endif