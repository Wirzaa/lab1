#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int p1x;
    int p1y;
    int p2x;
    int p2y;

    cout << "Enter p1x: " << endl;
    cin >> p1x;
    cout << "Enter p1y: " << endl;
    cin >> p1y;
    cout << "Enter p2x: " << endl;
    cin >> p2x;
    cout << "Enter p2y: " << endl;
    cin >> p2y;

    double xdiff = pow((p2x - p1x), 2); ;
    double ydiff = pow((p2y - p1y), 2); ;
    double distance = sqrt(xdiff + ydiff);
    cout << endl << distance << endl;
}