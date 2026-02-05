#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;

    double bonus = 0;

    if (score > 1000)
    {
        bonus = 0.1 * score;
    }
    else if (score > 100)
    {
        bonus = 0.2 * score;
    }
    else if (score <= 100)
    {
        bonus += 5;
    }

    if (score % 2 == 0)
    {
        bonus++;
    } else if (score % 5 == 0)
    {
        bonus += 2;
    }
    
    double finalScore = score + bonus;

    cout << bonus << endl;
    cout << finalScore << endl;
    

    return 0;
}