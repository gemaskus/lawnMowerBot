/*****************************************************************************/
/*                                                                           */
/*                          boundary.hpp                                     */
/* DESC: This header file outlines the class of a boundary to be used as a   */
/*       geofence for the lawnmowerbot project when running IRL              */
/* CREATED: 02/23/2025                                                       */
/* AUTHOR: Grant Maskus                                                      */
/*                                                                           */
/*****************************************************************************/


#ifndef BOUNDARY_HPP
#define BOUNDARY_HPP

#include <vector>
#include <string>
#include "point.hpp"

class Boundary
{
private:
    std::vector<BoundaryPoint>boundaryPoints;

public:
    Boundary();
    ~Boundary();

    void plotBoundary();
    bool isWithinBoundary();
    void saveBoundaryToFile(std::string fileName);
};


#endif
