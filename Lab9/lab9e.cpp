
#include <iostream>
#include <cmath>
using namespace std;

// new class Coord
class Coord3D
{
public:
	double x;
	double y;
	double z;
};


// computes the length 
double length(Coord3D *p)
{
	return sqrt( pow( ((*p).x), 2 ) + pow( ((*p).y), 2) + pow( ((*p).z), 2) );
}

// find distance between two points
Coord3D* fartherFromOrigin(Coord3D* p1, Coord3D* p2)
{
	double dist_p1 = length(p1); // pointer1 
	double dist_p2 = length(p2); // pointer 2
	if (dist_p1 > dist_p2)
		return p1;
	else
		return p2;
}

void move(Coord3D* ppos, Coord3D* pvel, double dt)
{
	// calculate movement

	ppos->x = ppos->x + pvel->x * dt;
	ppos->y = ppos->y + pvel->y * dt;
	ppos->z = ppos->z + pvel->z * dt;

}


Coord3D* createCoord3D(double x, double y, double z)
{
	
	Coord3D* pointer3D = new Coord3D;

	pointer3D -> x = x;
	pointer3D -> y = y;
	pointer3D -> z = z;

	return pointer3D;
}

// fix memory
void deleteCoord3D(Coord3D* p)
{
	delete p;
	p = nullptr;
}


int main()
{
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D* ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D* pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); 
    deleteCoord3D(pvel);

	return 0; 
}
