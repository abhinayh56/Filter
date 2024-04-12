#include "Transform_translation_2D.h"

Transform_translation_2D::Transform_translation_2D(){
}

Transform_translation_2D::~Transform_translation_2D(){
}

Polar Transform_translation_2D::elliptic_2_polar(Elliptic x1){
    Polar x2;
    return x2;
}

Polar Transform_translation_2D::cartesian_2_polar(Cartesian_2D x1){
    Polar x2;
    x2.r = sqrt(x1.x*x1.x + x1.y*x1.y);
    x2.th = atan2(x1.y, x1.x);
    return x2;
}

Elliptic Transform_translation_2D::polar_to_elliptic(Polar x1){
    Elliptic x2;
    return x2;
}

Elliptic Transform_translation_2D::cartesian_2_elliptic(Cartesian_2D x1){
    Elliptic x2;
    return x2;
}

Cartesian_2D Transform_translation_2D::polar_2_cartesian_2D(Polar x1){
    Cartesian_2D x2;
    x2.x = x1.r * cos(x1.th);
    x2.y = x1.r * sin(x1.th);
    return x2;
}

Cartesian_2D Transform_translation_2D::elliptic_2_cartesian_2D(Elliptic x1){
    Cartesian_2D x2;
    x2.x = x1.a*cosh(x1.m)*cos(x1.n);
    x2.y = x1.a*sinh(x1.m)*sin(x1.n);
    return x2;
}