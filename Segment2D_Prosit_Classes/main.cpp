#include <iostream>
#include <cmath>

#include "Point2.hpp"
#include "Vector2.hpp"
#include "Segment2.hpp"

#include "PointSegment2.hpp"

int main(void){
    Point2 p1(0.0, 0.0);
    Point2 p2(2.0, 2.0);

    Vector2 v1(1.0, 1.0);
    Vector2 v2(-1.0, -2.0);

    Segment2 s1(p1, v1);
    Segment2 s2(p2, v2);

    //Ca ne fonctionne pas, j'ai donc fait le diagramme des classes en premier; on n'inclut pas les setters et getters.
}