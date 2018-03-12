#include "../../inc/geometry/Point.h"

Point::Point() {

}

Point::~Point() {

}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    #ifdef _WIN32
    out << "Windows says [" << p.x << "," << p.y << "]";
    #endif
    #ifdef __APPLE__
    out << "MacOs says [" << p.x << "," << p.y << "]";
    #endif
    return out;
}
