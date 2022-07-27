
#include <iostream>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time {
public:
	int h;
	int m;       
};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

void printMovie(Movie mv);
void printTimeSlot(TimeSlot ts);
void printTime(Time time);

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);


Time addMinutes(Time time0, int min);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

int main()
{

	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};

	TimeSlot morning = {movie1, {9, 15}};  
	TimeSlot daytime = {movie2, {12, 15}}; 
	TimeSlot evening = {movie2, {16, 45}}; 
	
	TimeSlot newSlot = scheduleAfter(morning , movie2);

	printTimeSlot(newSlot);
	
	return 0;
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts)
{
	string g;
	Time result;
    	switch ( ts.movie.genre) {
        	case ACTION   : g = "ACTION"; break;
        	case COMEDY   : g = "COMEDY"; break;
        	case DRAMA    : g = "DRAMA";  break;
        	case ROMANCE  : g = "ROMANCE"; break;
        	case THRILLER : g = "THRILLER"; break;
	}

	cout << ts.movie.title<<" " << g << " ("
	     <<ts.movie.duration << " min) "<<"[starts at ";
	
	//Print time function	
	printTime(ts.startTime);  
	
	cout << ", ends by ";
	//Check hour after then print them 
	printTime(addMinutes(ts.startTime,ts.movie.duration));
 	
	cout << "]" << endl;
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

int minutesSinceMidnight(Time time)
{
	return (time.h * 60) + time.m;
}

int minutesUntil(Time earlier, Time later)
{
	return ((later.h - earlier.h) * 60 ) + (later.m - earlier.m );
}

Time addMinutes(Time time0, int min)
{
	//variables
	Time result;
	int exh = 0;

	//Add minutes to time
	if(time0.m + min < 60)
	{
		result.h = time0.h;
		result.m = time0.m + min;
	}
	//If minutes overload min add to time
	else
	{
		exh = (time0.m + min)/60;
		result.h = time0.h + exh;
		result.m = (time0.m + min) - (exh * 60);
	}
	return result;
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
	Time result = addMinutes(ts.startTime,ts.movie.duration);
	TimeSlot newSlot = {nextMovie, result};
	return newSlot;
}