#ifndef TRANSLATION_3D_ELLIPSOIDAL
#define TRANSLATION_3D_ELLIPSOIDAL

class Ellipsoidal{
public:
    Ellipsoidal(double a_=0.0, double b_=0.0, double c_=0.0, double l_=0.0, double m_=0.0, double n_=0.0);
    ~Ellipsoidal();
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double l = 0.0;
    double m = 0.0;
    double n = 0.0;
}

#endif