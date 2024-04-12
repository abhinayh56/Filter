#ifndef TRANSLATION_3D_SPHERICAL
#define TRANSLATION_3D_SPHERICAL

class Spherical{
public:
    Spherical(double r_=0.0, double th_=0.0, double phi_=0.0);
    ~Spherical();
    double r = 0.0;
    double th = 0.0;
    double phi = 0.0;
}

#endif