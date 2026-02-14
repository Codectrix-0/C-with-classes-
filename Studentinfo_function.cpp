#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float m1, m2, m3, total, per;

public:
    void input() {
        cout << "Enter Roll: ";
        cin >> roll;

        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        per = total / 3;
    }

    void display() {
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << per;

        if(per >= 60)
            cout << "\nGrade: A";
        else if(per >= 40)
            cout << "\nGrade: B";
        else
            cout << "\nFail";
    }
};

int main() {
    Student s1;

    s1.input();
    s1.calculate();
    s1.display();

    return 0;
}
