#include <iostream>

using namespace std;
int main() {
    string name;
    cout << "What is your name? " <<endl;
    cin >> name;
    cout << "Hello " << name << "." << endl << endl;
    int stdID;
    cout << "What is your ID? " << endl;
    cin >> stdID;
    cout << "Your ID is " << stdID << ".";
}