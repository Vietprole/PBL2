
using namespace std;
#ifndef Schedule_h
#define Schedule_h
#include <iostream>
#include <string>
#include "Movie.h"
class Schedule
{
private:
	int id;
	string localDate;
	string localTime;
	// Movie movie;

public:
	int getId() const;
	void setId(int id);
	string getLocalDate();
	void setLocalDate(string localDate);

	string getLocalTime();
	void setLocalTime(string localTime);

	// Movie getMovie();
	// void setMovie(Movie movie);
	string toString();
	friend istream &operator>>(istream &in, Schedule &a);
	bool operator== (const Schedule &a)const;
};

#endif
