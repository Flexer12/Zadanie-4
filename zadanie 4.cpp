

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, z, t;
    cout << "Enter a : "<<endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    if (a >= b) {
        z = 1 - cos(a) * 2 * sin(b);
    }
    else {
        z = sqrt(abs(pow(a, 2) - pow(b, 2)));
    }
    if (z < 0 ) {
        cout << "Error";
        return 0;
    }
    if (z > b) {
        t = 1 / cos(z * a);
    }
    if (z == b) {
        t = 1-log(z)+cos(pow(a,2)*b);
    }
    else {
        t = pow(z + pow(a, 2) * b,1/3);
    }
    
    cout << "z=" << z << endl << "t=" << t;


}

