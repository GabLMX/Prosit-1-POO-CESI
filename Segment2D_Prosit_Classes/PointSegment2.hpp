#include <iostream>
#include <cmath>

#include "Vector2.hpp"
#include "Point2.hpp"

Point2 addPoint2(Point2 p, Vector2 r){
    Point2 resultat(p.getxPoint2() + r.getxVector2(), p.getyPoint2() + r.getyVector2()); //Utilise des getters
    return resultat;
}

Vector2 subPoint2(Point2 r, Point2 p){ //Utilise deux points.
    Vector2 resultat(r.getxPoint2() - p.getxPoint2(), r.getyPoint2() - p.getyPoint2());
    return resultat;
}
