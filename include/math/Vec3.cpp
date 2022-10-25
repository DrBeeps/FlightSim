#include "Vec3.h"
#include <cmath>


Vec3 Vec3::add(Vec3 v) const
{
    Vec3 ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    ret.z = z + v.z;
    return ret;
}

Vec3 Vec3::sub(Vec3 v) const
{
    Vec3 ret;
    ret.x = x-v.x;
    ret.y = y-v.y;
    ret.z = z-v.z;
    return ret;
}

Vec3 Vec3::norm() const
{
    Vec3 ret;
    ret.mag = std::sqrt((x * x) + (y * y) + (z * z));
    return ret; // magnitude
}

// https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQL4UqzAXfQOw7tyfxQbz-gS6uh5a50_jLfe1POKcMQ0w&s
Vec3 Vec3::cross(Vec3 v) const
{
    Vec3 ret; // (a2 * b3 – a3 * b2) + (a3 * b1 – a1 * b3) + (a1 * b2 – a2 * b1)
    ret.x = y * v.z - z * v.y;
    ret.y = z * v.x - x * v.z;
    ret.z = x * v.y - y * v.x;
    return ret;
}

float Vec3::dot(Vec3 v) const
{
    return ((x * v.x) + (y + v.y) + (z + v.z));
}