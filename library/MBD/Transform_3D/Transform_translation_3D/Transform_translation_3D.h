#ifndef TRANSFORM_TRANSLATION_3D
#define TRANSFORM_TRANSLATION_3D

#include <math.h>
#include "Spherical.h"
#include "Cylindrical.h"
#include "Ellipsoidal.h"
#include "Cartesian_3D.h"
#include "Math_functions.h"

class Transform_translation_3D{
public:
    Transform_translation_3D();
    ~Transform_translation_3D();
    Cylindrical spherical_2_cylindrical(Spherical x1);
    Ellipsoidal spherical_2_ellipsoidal(Spherical x1);
    Cartesian_3D spherical_2_cartesian_3D(Spherical x1);
    Spherical cylindrical_2_spherical(Cylindrical x1);
    Ellipsoidal cylindrical_2_ellipsoidal(Cylindrical x1);
    Cartesian_3D cylindrical_2_cartesian_3D(Cylindrical x1);
    Cylindrical ellipsoidal_2_cylindrical(Ellipsoidal x1);
    Spherical ellipsoidal_2_spherical(Ellipsoidal x1);
    Cartesian_3D ellipsoidal_2_cartesian_3D(Ellipsoidal x1);
    Cylindrical cartesian_3D_2_cylindrical(Cartesian_3D x1);
    Spherical cartesian_3D_2_spherical(Cartesian_3D x1);
    Ellipsoidal cartesian_3D_2_ellipsoidal(Cartesian_3D x1);
private:
    Math_functions math_fun;
};

#endif