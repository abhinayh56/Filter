#ifndef TRANSFORM_TRANSLATION_2D
#define TRANSFORM_TRANSLATION_2D

#include <math.h>
#include "Polar.h"
#include "Elliptic.h"
#include "Cartesian_2D.h"

class Transform_translation_2D{
    public:
        Transform_translation_2D();
        ~Transform_translation_2D();
        Polar elliptic_2_polar(Elliptic x1);
        Polar cartesian_2_polar(Cartesian_2D x1);
        Elliptic polar_to_elliptic(Polar x1);
        Elliptic cartesian_2_elliptic(Cartesian_2D x1);
        Cartesian_2D polar_2_cartesian_2D(Polar x1);
        Cartesian_2D elliptic_2_cartesian_2D(Elliptic x1);
};

#endif