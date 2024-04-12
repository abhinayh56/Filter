#ifndef TRANSLATION_3D_CYLINDRICAL
#define TRANSLATION_3D_CYLINDRICAL

class Cylindrical{
public:
    Cylindrical(double r_=0.0, double th_=0.0, double z_=0.0);
    ~Cylindrical();
    double r = 0.0;
    double th = 0.0;
    double z = 0.0;
}

#endif