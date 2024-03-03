
using namespace std;
#ifndef Movie_h
#define Movie_h
#include<string>
#include<iostream>
class Movie
{
private:
    int id;
    string name;
    string description;
    string director;
    string actors;
    string categories;
    string releaseDate;
    int duration;
    string language;
    string rated;

public:
    int getId() const;
    void setId(int id);

    string getName();
    void setName(string name);

    string getDescription();
    void setDescription(string description);

    string getDirector();
    void setDirector(string director);

    string getActors();
    void setActors(string actors);

    string getCategories();
    void setCategories(string categories);

    string getReleaseDate();
    void setReleaseDate(string releaseDate);

    int getDuration();
    void setDuration(int duration);

    string getLanguage();
    void setLanguage(string language);

    string getRated();
    void setRated(string rated);
    string toString();
    friend istream &operator>>(istream &in, Movie &a);
    bool operator== (const Movie &a)const;
};

#endif