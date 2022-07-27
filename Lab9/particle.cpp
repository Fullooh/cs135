#include <iostream>
#include <cmath>
using namespace std;

//Particle class
class Particle
{
public:
	double x;
	double y;
	double z;
	double vx;
	double vy;
	double vz;
};

//Creating particle
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz)
{
	Particle* particlePointer = new Particle;

	particlePointer -> x = x;
	particlePointer -> y = y;
	particlePointer -> z = z;

	particlePointer -> vx = vx;
	particlePointer -> vy = vy;
	particlePointer -> vz = vz;

	return particlePointer;
}
//void function that set velocity
void setVelocity(Particle *p, double vx, double vy, double vz)
{
	p -> vx = vx;
	p -> vy = vy;
	p -> vz = vz;
}


//move accord to particle and dt
void move(Particle *p, double dt)
{
	p -> x = p -> x + p -> vx * dt;
	p -> y = p -> y + p -> vy * dt;
	p -> z = p -> z + p -> vz * dt;
}


//return pointer values
Particle getPosition(Particle *p)
{
	return *p;
}
//relocate memory
void deleteParticle(Particle *p)
{
	delete p;
	p = nullptr;
}

int main() 
{
    
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
    
   
        setVelocity(p, 10.0 * time, 0.3, 0.1);
        move(p, dt);
        time += dt;

        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    deleteParticle(p);
}