#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point {
public:
    int x;
    int y;
public:
    Point();
    ~Point();
};

std::ostream& operator<<(std::ostream& out, const Point& p);

#endif
