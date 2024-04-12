#ifndef TRANSLATION_2D_ELLIPTIC
#define TRANSLATION_2D_ELLIPTIC

class Elliptic{
public:
    Elliptic(double a_=0.0, double m_=0.0, double n_=0.0);
    ~Elliptic();
    double a = 0.0;
    double m = 0.0;
    double n = 0.0;
}

#endif