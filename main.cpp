#include <iostream>
#include "lineType.h"
using namespace std;

int main() {
    lineType L1(2, 4, 6); 
    lineType L2(1, 2, 3);
    lineType L3(3, -6, 12);
    lineType L4(2, -1, 3);

    cout << "Testing Part 1:\n\n";

    cout << "L1: "; L1.print();
    cout << "L2: "; L2.print();
    cout << "L3: "; L3.print();
    cout << "L4: "; L4.print();

    cout << "\nSlope of L1: " << L1.slope() << endl;

    cout << "Are L1 and L2 equal? " << (L1.isEqual(L2) ? "YES" : "NO") << endl;

    cout << "Are L1 and L3 parallel? " << (L1.isParallel(L3) ? "YES" : "NO") << endl;

    cout << "Are L1 and L4 perpendicular? " << (L1.isPerpendicular(L4) ? "YES" : "NO") << endl;

    cout << "\nIntersection of L1 and L4:\n";
    pointType P = L1.intersection(L4);
    if (P.valid)
        cout << "Point = (" << P.x << ", " << P.y << ")\n";
    else
        cout << "No intersection (parallel lines)\n";

    return 0;
}