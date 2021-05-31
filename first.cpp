#include <cmath>
#include <iostream>
//Mohammed alkaabi
//id 2018298111
using namespace std;

double compute_surfarea(double r, double l) {
return 2 * M_PI * r * l;
}

int main() {
double r, l;
cout << "Input the radius and length of cylinder." << endl;
cin >> r >> l;
double s = compute_surfarea(r, l);
cout << "The surface area is " << s << "." << endl;

return 0;
}
