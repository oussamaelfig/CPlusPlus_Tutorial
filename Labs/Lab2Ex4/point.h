#include <iostream>
class Point {
  public:
    Point(double x=0, double y=0);
    Point(const Point&);
    ~Point();

    double distance(const Point&) const;

  private:
    double x;
    double y;

    friend std::ostream& operator << (std::ostream&, const Point&);
    friend std::istream& operator >> (std::istream&, Point&);
};