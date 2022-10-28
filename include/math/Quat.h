#ifndef QUAT_H
#define QUAT_H

class Quat
{
public:
    float x;
    float y;
    float z;
    float w;

    Quat() { x = y = z = w = 0; };
    Quat(float _x, float _y, float _z, float _w) { x = _x; y = _y; z = _z; w = _w; };

    Quat add(Quat q) const;
    Quat sub(Quat q) const;
    Quat mul(Quat q) const;
    Quat div(Quat q) const;
    Quat norm(Quat q) const;

};

#endif