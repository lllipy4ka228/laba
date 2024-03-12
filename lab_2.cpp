#include <iostream>
#include <cmath>
using namespace std;


struct Point {
    double x, y;
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void calculatePerimeterAndArea(Point p1, Point p2, Point p3, Point p4, double& perimeter, double& area) {
    double side1 = distance(p1, p2);
    double side2 = distance(p2, p3);
    double side3 = distance(p3, p4);
    double side4 = distance(p4, p1);

    perimeter = side1 + side2 + side3 + side4;

    double s = (side1 + side2 + side3 + side4) / 2;
    area = sqrt((s - side1) * (s - side2) * (s - side3) * (s - side4));
}

int main() {
    Point p1, p2, p3, p4;
    cout << "Enter coordinates of point 1: ";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates of point 2 ";
    cin >> p2.x >> p2.y;

    cout << "Enter coordinates of point 3 ";
    cin >> p3.x >> p3.y;

    cout << "Enter coordinates of point 4 ";
    cin >> p4.x >> p4.y;

    double perimeter, area;
    calculatePerimeterAndArea(p1, p2, p3, p4, perimeter, area);

    cout << "Perimeter " << perimeter << endl;
    cout << "Area " << area << endl;

    return 0;
}
