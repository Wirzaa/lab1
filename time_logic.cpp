#include <iostream>
using namespace std;
int main()
{
    int totalSeconds;
    cout << "Enter total amount of seconds." << endl;
    cin >> totalSeconds;
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds - (hours * 3600);
    int minutes = remainingSeconds / 60;
    remainingSeconds = remainingSeconds - (minutes * 60);
    cout << endl << totalSeconds << " seconds is, " << hours << " hours, "<< minutes << " minutes and " << remainingSeconds << " seconds." << endl;

}