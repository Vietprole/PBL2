#include"Schedule.h"
int Schedule::getId() const
{
	return id;
}
void Schedule::setId(int id)
{
	this->id = id;
}
string Schedule::getLocalDate()
{
	return localDate;
}
void Schedule::setLocalDate(string localDate)
{
	this->localDate = localDate;
}

string Schedule::getLocalTime()
{
	return localTime;
}
void Schedule::setLocalTime(string localTime)
{
	this->localTime = localTime;
}

// Movie Schedule::getMovie()
// {
// 	return movie;
// }
// void Schedule::setMovie(Movie movie)
// {
// 	this->movie = movie;
// }
string Schedule::toString()
{
	return to_string(id) + "|" + localDate + "|" + localTime + "|" ;//+ to_string(movie.getId()) + "|";
}
istream &operator>>(istream &in, Schedule &a){
	cout <<"Nhap ngay chieu:";
	in >> a.localDate; cout <<endl;
	cout << "Nhap gio chieu:";
	in >> a.localTime; cout << endl;
	return in;
}
bool Schedule::operator== (const Schedule &a)const{
    return a.id==id;
}