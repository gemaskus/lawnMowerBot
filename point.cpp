#include "point.hpp"

BoundaryPoint::BoundaryPoint(double x,double y,double z){
    this->x = x;
    this->y = y;
    this->z = z;
}

double BoundaryPoint::getBoundaryPointX(){
    return this->x;
}

double BoundaryPoint::getBoundaryPointY(){
    return this->y;
}

double BoundaryPoint::getBoundaryPointZ(){
    return this->z;
}
