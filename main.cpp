#include "inc/Todo.h"
#include "inc/geometry/Point.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    Todo list;

    Point p;
    p.x = 10;
    p.y = 20;
    cout << p.x << " " << p.y << endl;

    return 0;
}
