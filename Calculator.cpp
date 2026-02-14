#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() { cout << "Sum = " << a + b << endl; }
    void sub() { cout << "Difference = " << a - b << endl; }
    void mul() { cout << "Product = " << a * b << endl; }
    void div() { cout << "Division = " << a / b << endl; }
};

int main() {
    Calculator c;

    c.input();
    c.add();
    c.sub();
    c.mul();
    c.div();

    return 0;
}
