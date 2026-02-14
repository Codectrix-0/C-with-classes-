#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    void setData(); 

    void area() {
        cout << "Area = " << length * breadth << endl;
    }

    void perimeter() {
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};
void Rectangle::setData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }
int main() {
    Rectangle r;

    r.setData();
    r.area();
    r.perimeter();

    return 0;
}
