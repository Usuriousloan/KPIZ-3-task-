#include <iostream>
#include <vector>

class Point {
public:
    Point(double x, double y) : x_(x), y_(y) {}

    double getX() const { return x_; }
    double getY() const { return y_; }

    void setX(double x) { x_ = x; }
    void setY(double y) { y_ = y; }

    void print() const {
        std::cout << "Point(" << x_ << ", " << y_ << ")" << std::endl;
    }

private:
    double x_;
    double y_;
};

int main() {
    std::vector<Point> points;
    points.push_back(Point(1.0, 2.0));
    points.push_back(Point(3.0, 4.0));
    points.push_back(Point(5.0, 6.0));
    points.push_back(Point(7.0, 8.0));

    std::cout << "Список точок:" << std::endl;
    for (const auto& point : points) {
        point.print();
    }

    points.push_back(Point(9.0, 10.0));
    std::cout << "Після додавання нової точки:" << std::endl;
    for (const auto& point : points) {
        point.print();
    }

    points.pop_back();
    std::cout << "Після видалення останньої точки:" << std::endl;
    for (const auto& point : points) {
        point.print();
    }

    points[0].setX(11.0);
    points[0].setY(12.0);
    std::cout << "Після оновлення координат першої точки:" << std::endl;
    for (const auto& point : points) {
        point.print();
    }

    return 0;
}
