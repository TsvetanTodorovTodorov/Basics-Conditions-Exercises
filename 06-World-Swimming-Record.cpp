#include <iostream>
using namespace std;

int main()
{
    double worldRecord;  // in seconds // 10464
    cin >> worldRecord;
    double distance;  // in meters // 1500
    cin >> distance;
    double timeInSeconds;  // his time in which he swimm for 1 meter
    cin >> timeInSeconds;  // 20

    // first we have to divide the total distance in 15, because we know that in every 15m he has a resistance from water mesured with delay with 12.5s. So! => 1500 / 15 and the result multiply with 12.5 to see with how many seconds he will have delay.
    // and his time has to multiply it with the total distance that he has to swimm, which is 1500 * 20(distance for 1m)
    // and finally we have to see which time is better

    int delays = distance / 15;
    double delayTime = delays * 12.5; // the result is in seconds
    double time = distance * timeInSeconds;
    double totalTime = delayTime + time;

    cout.setf(ios::fixed);
    cout.precision(2);

    

    if (totalTime < worldRecord) // if he succeeded, his time will be lower
    {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    } else if (totalTime >= totalTime) // if he failed, his time will be bigger or even to the world record
    {
        cout << "No, he failed! He was " << totalTime - worldRecord << " seconds slower." << endl;
    }

    return 0;
}