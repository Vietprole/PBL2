#include "Movie.h"
int Movie::getId() const
{
    return id;
}
void Movie::setId(int id)
{
    this->id = id;
}
string Movie::getName()
{
    return name;
}
void Movie::setName(string name)
{
    this->name = name;
}
string Movie::getDescription()
{
    return description;
}
void Movie::setDescription(string description)
{
    this->description = description;
}
string Movie::getDirector()
{
    return director;
}
void Movie::setDirector(string director)
{
    this->director = director;
}
string Movie::getActors()
{
    return actors;
}
void Movie::setActors(string actors)
{
    this->actors = actors;
}
string Movie::getCategories()
{
    return categories;
}
void Movie::setCategories(string categories)
{
    this->categories = categories;
}
string Movie::getReleaseDate()
{
    return releaseDate;
}
void Movie::setReleaseDate(string releaseDate)
{
    this->releaseDate = releaseDate;
}
int Movie::getDuration()
{
    return duration;
}
void Movie::setDuration(int duration)
{
    this->duration = duration;
}
string Movie::getLanguage()
{
    return language;
}
void Movie::setLanguage(string language)
{
    this->language = language;
}
string Movie::getRated()
{
    return rated;
}
void Movie::setRated(string rated)
{
    this->rated = rated;
}
string Movie::toString()
{
    return to_string(id) + "|" + name + "|" + description + "|" + director + "|" + actors + "|" + categories + "|" + releaseDate + "|" + to_string(duration) + "|" + language + "|" + rated + "|";
}
istream &operator>>(istream &in, Movie &a)
{
    cout << "Nhap ten phim:";
    in >> a.name;
    cout << endl;
    cout << "Nhap mo ta:";
    in >> a.description;
    cout << endl;
    cout << "Nhap ten dao dien:";
    in >> a.director;
    cout << endl;
    cout << "Nhap dien vien";
    in >> a.actors;
    cout << endl;
    cout << "Nhap the loai:";
    in >> a.releaseDate;
    cout << endl;
    cout << "Nhap ngay ra mat:";
    in >> a.releaseDate;
    cout << endl;
    cout << "Nhap thoi luong:";
    in >> a.duration;
    cout << endl;
    cout << "Nhap ngon ngu:";
    in >> a.language;
    cout << endl;
    cout << "Nhap gioi han do tuoi:";
    in >> a.rated;
    cout << endl;
    return in;
}
bool Movie::operator== (const Movie &a)const{
    return a.id==id;
}