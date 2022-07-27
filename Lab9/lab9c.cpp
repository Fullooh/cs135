#include <iostream>
#include <cmath>
using namespace std;

//Class of point
class Coord3D{
public:
	double x;
	double y;
	double z;
};


//length function
double length(Coord3D*p)
{
	return sqrt(pow( (p -> x), 2 ) + pow( (p -> y), 2 ) + pow( (p -> z ), 2));	
}

//Find farther point
Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	
	double point1 = length(p1);
	double point2 = length(p2);


	if(point1 > point2)
		return p1;
	else
		return p2;
}

//Move each position by velocity and dt
void move(Coord3D* ppos, Coord3D* pvel, double dt)
{
	ppos->x = ppos->x + pvel->x * dt;
	ppos->y = ppos->y + pvel->y * dt;
	ppos->z = ppos->z + pvel->z * dt;
}

int main()
{
	Coord3D pos = {0, 0 ,100.0};
	Coord3D vel = {1, -5, 0.2};

	move(&pos, &vel, 2.0);

	cout<< pos.x << " " << pos.y << " " << pos.z << endl;
}
