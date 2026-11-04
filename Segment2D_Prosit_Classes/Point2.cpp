#include "Point2.hpp"
#include "Vector2.hpp"
#include <iostream>
#include <cmath>

Point2::Point2(float x, float y){
    this->x = x;
    this->y = y;
}

float Point2::getxPoint2(){
    return x;
}

float Point2::getyPoint2(){
    return y;
}

void Point2::setxPoint2(float x){
    this->x = x;
}

void Point2::setyPoint2(float y){
    this->y = y;
}

void Point2::printPoint2(){
    std::cout << "Le point a pour coordonnées: " << "(" << x << "," << y << ")" << "\n";
}