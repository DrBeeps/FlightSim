#include "Sim.h"

Sim::Sim(Vec3 _pos, Vec3 _vel, float _mass, float _length, float _mmoi, float _dt) 
{
    pos = _pos;
    vel = _vel;
    mass = _mass;
    length = _length;
    mmoi = _mmoi;
    dt = _dt;
}

void Sim::update()
{
    // update position
    pos = pos.add(vel);
    // update velocity
    vel = vel.add(accel);

    // update acceleration
    accel = accel.add(getZForce());

    // update force     
    
}