#include <iostream>
using namespace std;

class Point {
private:
    float x;
    float y;

public:
    Point(float x = 0, float y = 0) {
        this->x = x;
        this->y = y;
    }

    Point* move(float &dx, float &dy) {
        x += dx;
        y += dy;
        return this;
    }

    void print() const {
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    float x, y, dx1, dy1, dx2, dy2;

    cout << "Enter initial coordinates of the point (x y): ";
    cin >> x >> y;

    Point* p = new Point(x, y);

    cout << "Initial coordinates of the point: ";
    p->print();

    cout << "Enter the change in coordinates (dx1 dy1): ";
    cin >> dx1 >> dy1;

    cout << "Enter the change in coordinates (dx2 dy2): ";
    cin >> dx2 >> dy2;

    p->move(dx1, dy1)->move(dx2,dy2);

    cout << "Updated coordinates of the point: ";
    p->print();

    delete p;

    return 0;
}
