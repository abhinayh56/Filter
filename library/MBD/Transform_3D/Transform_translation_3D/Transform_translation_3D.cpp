#include "Transform_translation_3D.h"

Transform_translation_3D::Transform_translation_3D(){
}

Transform_translation_3D::~Transform_translation_3D(){
}

Cylindrical Transform_translation_3D::spherical_2_cylindrical(Spherical x1){
    Cylindrical x2;
    x2.r = x1.r*sin(x1.th);
    x2.th = x1.phi;
    x2.z = x1.r*cos(x1.th);
    return x2;
}

Ellipsoidal Transform_translation_3D::spherical_2_ellipsoidal(Spherical x1){
    Ellipsoidal x2;
    return x2;
}

Cartesian_3D Transform_translation_3D::spherical_2_cartesian_3D(Spherical x1){
    Cartesian_3D  x2;
    x2.x = x1.r*sin(x1.th)*cos(x1.phi);
    x2.y = x1.r*sin(x1.th)*sin(x1.phi);
    x2.z = x1.r*cos(x1.th);
    return x2;
}

Spherical Transform_translation_3D::cylindrical_2_spherical(Cylindrical x1){
    Spherical x2;
    x2.r = sqrt(x1.r*x1.r + x1.z*x1.z);
    x2.phi = x1.th;
    x2.th = atan(x1.r/x1.z);
    return x2;
}

Ellipsoidal Transform_translation_3D::cylindrical_2_ellipsoidal(Cylindrical x1){
    Ellipsoidal x2;
    return x2;
}

Cartesian_3D Transform_translation_3D::cylindrical_2_cartesian_3D(Cylindrical x1){
    Cartesian_3D  x2;
    x2.x = x1.r*cos(x1.th);
    x2.y = x1.r*sin(x1.th);
    x2.z = x1.z;
    return x2;
}

Cylindrical Transform_translation_3D::ellipsoidal_2_cylindrical(Ellipsoidal x1){
    Cylindrical x2;
    return x2;
}

Spherical Transform_translation_3D::ellipsoidal_2_spherical(Ellipsoidal x1){
    Spherical x2;
    return x2;
}

Cartesian_3D Transform_translation_3D::ellipsoidal_2_cartesian_3D(Ellipsoidal x1){
    Cartesian_3D  x2;
    return x2;
}

Cylindrical Transform_translation_3D::cartesian_3D_2_cylindrical(Cartesian_3D x1){
    Cylindrical x2;
    x2.r = sqrt(x1.x*x1.x + x1.y*x1.y);
    x2.th = atan2(x1.y, x1.x);
    x2.z = x1.z;
    return x2;
}

Spherical Transform_translation_3D::cartesian_3D_2_spherical(Cartesian_3D x1){
    Spherical x2;
    x2.r = sqrt(x1.x*x1.x + x1.y*x1.y + x1.z*x1.z);
    x2.th = acos(x1.z/x2.r);
    x2.phi = math_fun.sign(x1.y)*acos(x1.x/sqrt(x1.x*x1.x + x1.y*x1.y));
    return x2;
}

Ellipsoidal Transform_translation_3D::cartesian_3D_2_ellipsoidal(Cartesian_3D x1){
    Ellipsoidal x2;
    return x2;
}