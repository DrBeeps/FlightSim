#ifndef SIM_H
#define SIM_H

#include "../math/Vec3.h"

/*
Sim:
=====
mass
length
mmoi
time
dt

accel
velocity
position
*/

class Sim
{
public:
    Vec3 accel;
    Vec3 vel;
    Vec3 pos;

    Vec3 angAccel;
    Vec3 angVel;
    Vec3 globalAccel; // magnetometer needed ;)

    float mass;
    float length;
    float mmoi; // can be calculated??
    float dt;
    float floor = 0;

    Sim();
    Sim(Vec3 pos, Vec3 vel, float mass, float length, float mmoi, float dt) { };

    void update();
    void addForce(Vec3 force);
    void addVelocity(Vec3 velocity);
    void addPosition(Vec3 position);

    void getZForce(); // somehow get the force from the motor

    /*
    
    */

    void subMass(float dmass) { mass -= dmass; }; // slowly remove mass as motor burns out (measure wet / dry motor masses)
    Vec3 getAccel() { return accel; };
    Vec3 getVelocity() { return vel; };
    Vec3 getPosition() { return pos;};
};




#endif