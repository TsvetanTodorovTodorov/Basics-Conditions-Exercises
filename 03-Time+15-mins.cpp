#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    cin >> hours >> minutes;

    int combined = hours * 60 + minutes + 15;

    int finalHour = combined / 60;
    int finalMinutes = combined % 60;

    if (finalHour == 24)
    {
        finalHour = 0;
    }
    

    if (finalMinutes < 10)
    {
        cout << finalHour << ":0" << finalMinutes;
    } else {
        cout << finalHour << ":" << finalMinutes;
    }

    return 0;
}