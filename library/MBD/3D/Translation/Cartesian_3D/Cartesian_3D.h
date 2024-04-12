#ifndef POS_3D_CARTESIAN
#define POS_3D_CARTESIAN

class Cartesian_3D{
public:
    Cartesian_3D(double x_=0.0, double y_=0.0, double z_=0.0);
    ~Cartesian_3D();
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
}

#endif