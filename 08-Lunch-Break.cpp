#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    double episodeTime, lunchBreakTime;
    cin >> episodeTime >> lunchBreakTime;

    double eating = lunchBreakTime / 8;
    double resting = lunchBreakTime / 4;

    double timeForWatching = lunchBreakTime - eating - resting;


    if (timeForWatching >= episodeTime)
    {
        double result = timeForWatching - episodeTime;
        cout << "You have enough time to watch " << name << " and left with " << ceil(result) << " minutes free time." << endl;
    }
    else
    {
        double result = episodeTime - timeForWatching;
        cout << "You don't have enough time to watch " << name << ", you need " << ceil(result) << " more minutes." << endl;
    }
    
    return 0;
}