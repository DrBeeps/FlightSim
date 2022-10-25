#ifndef PHYS_VEC3_H
#define PHYS_VEC3_H

#include <cmath>


class Vec3
{
public:
    float x, y, z;
    float mag{};

    Vec3 () { x = y = z = 0; };
    Vec3 (float _x, float _y, float _z) {  x = _x; y = _y; z = _z; };

    Vec3 add(Vec3 v) const;
    Vec3 sub(Vec3 v) const;
    Vec3 norm() const;
    Vec3 cross(Vec3 v) const;
    float dot(Vec3 v) const;
};


#endif //PHYS_VEC3_H
