programming in cpp
code: 

#include <iostream>
using namespace std;

// Forward declaration of class ABC
class ABC;

class XYZ {
private:
    int x;

public:
    void setdata(int num) {
        x = num;
    }
    // Declare friend function
    friend void add(XYZ, ABC);
};

class ABC {
private:
    int y;

public:
    void setdata(int num) {
        y = num;
    }
    // Declare friend function
    friend void add(XYZ, ABC);
};

// Definition of the friend function
void add(XYZ m, ABC n) {
    cout << "Sum = " << (m.x + n.y) << endl;
}

int main() {
    XYZ p;
    ABC q;

    p.setdata(15);  // Sets p.x = 15
    q.setdata(20);  // Sets q.y = 20

    add(p, q);      // Outputs "Sum = 35"

    return 0;
}
