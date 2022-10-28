#prama once

#include "../math/Vec3.h"

struct DataHeader 
{
    float length;
    float mmoi; // can be calculated??
    float dt;
};

struct OutputData 
{
    Vec3 globalAcc;
    Vec3 accel;
    Vec3 angularAcc;
    Vec3 vel;
    Vec3 pos;
    Quat rpy;
    Quat gyro;

    float mass;
};

// Output Log:
// DataHeader
// OutputData **LOOP**
// EndData???