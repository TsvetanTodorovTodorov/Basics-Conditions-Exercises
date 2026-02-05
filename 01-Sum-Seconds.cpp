#include <iostream>
using namespace std;

int main()
{
    // 3 inputs that are times in seconds of the top 3 sprinters. I have to sum them and output them in minutes:seconds

    int first, second, third;
    cin >> first >> second >> third;

    int sumInSeconds = first + second + third;

    int minutes = sumInSeconds / 60;
    int seconds = sumInSeconds % 60;

    if (seconds < 10)
    {
        cout << minutes << ":0" << seconds << endl;
    } else
    {
        cout << minutes << ":" << seconds << endl;
    }    

    return 0;
}

// 35 45 44 = 2:04
// 22 7 34 = 1:03
// 50 50 49 = 2:29
// 14 12 10 = 0:36