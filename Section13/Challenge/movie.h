#ifndef __MOVIE_H__
#define __MOVIE_H__

#include <string>

using namespace std;

class Movie {
private:
    string name;
    string rating;
    int watched;
    
public:
    Movie(string name, string rating, int watched);
    Movie(string name, string rating);
    Movie(string name);

    Movie(const Movie &source);
    ~Movie();

    void display() const;

    string get_name() const {
        return name;
    }

    string get_rating() const {
        return rating;
    }

    bool did_watch() const {
        return watched > 0;
    }

    void watch() {
        this->watched+=1;
    }
};
#endif