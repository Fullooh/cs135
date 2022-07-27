
#include <iostream>
using namespace std;

class Time 
{
public:
	int h;
	int m;       
};

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
int  main()
{
	Time x = {0 , 0};
	Time result;
	int min = 0;

	cin >> x.h >> x.m;
	cin >> min;

	result = addMinutes(x , min);
	cout << result.h << ":" << result.m;
	return 0;
}
