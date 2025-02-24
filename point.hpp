#ifndef POINT_HPP
#define POINT_HPP

class BoundaryPoint
{
private:
    double x;
    double y;
    double z;
public:
    BoundaryPoint(double x, double y, double z);
    ~BoundaryPoint();

    double getBoundaryPointX();
    double getBoundaryPointY();
    double getBoundaryPointZ();
    
};

#endif

