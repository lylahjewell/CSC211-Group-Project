#include <iostream>

using namespace std;

void CalcSlope(double a, double b){
    double slope = 0;
    if(b != 0){
        slope = -a /b;
        cout << slope << endl;
    }
    else{
        cout << "Line is vertical" << endl;;
    }
}

int main(){

    double a = 10;
    double b = 0;
    CalcSlope(a, b);
    cout << endl;
    return 0;
}
