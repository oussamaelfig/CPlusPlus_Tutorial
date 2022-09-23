#include <assert.h>
#include "point.h"

Point::Point(double _x, double _y)
  : x(_x), y(_y){
}
Point::Point(const Point& point)
  : x(point.x), y(point.y){
}
Point::~Point(){
}
double Point::distance(const Point& point) const {
  // TODO
  return 0;
}
std::ostream& operator << (std::ostream& os, const Point& point) {
  os << "(" << point.x << "," << point.y << ")";
  return os;
}
std::istream& operator >> (std::istream& is, Point& point) {
  char po, vir, pf;
  is >> po;
  if(is){
    is >> point.x >> vir >> point.y >> pf;
    assert(po=='(');    assert(vir==',');    assert(pf==')');
  }
  return is;
}