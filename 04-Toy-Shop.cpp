#include <iostream>
using namespace std;

int main()
{
    // gotta keep pushing myself

    //she wants to go to vacation and has to save money by selling toys -> Petya

    double puzzlePrice = 2.60; // lv.
    double dollPrice = 3; // lv.
    double bearPrice = 4.10;
    double minionPrice = 8.20;
    double truckPrice = 2;

    // if purchased toys are 50 or above, the shop makes discount 25 % from the total price
    // 10% has to go for the shop rent
    // i have to calculate did the saved money are enough to go to a vacation

    double vacationPrice;
    cin >> vacationPrice;

    int puzzlesCount, dollsCount, bearsCount, minionsCount, trucksCount;
    cin >> puzzlesCount >> dollsCount >> bearsCount >> minionsCount >> trucksCount; 

    int totalToysCount = puzzlesCount + dollsCount + bearsCount + minionsCount + trucksCount;

    double soldToysSum = (puzzlePrice * puzzlesCount) + (dollPrice * dollsCount) + (bearPrice * bearsCount) + (minionPrice * minionsCount) + (truckPrice * trucksCount);

    if (totalToysCount >= 50)
    {
        soldToysSum *= 0.75;
    }

    double rentSum = soldToysSum * 0.1;
    soldToysSum -= rentSum;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (soldToysSum >= vacationPrice)
    {
        cout << "Yes! " << soldToysSum - vacationPrice << " lv left." << endl;
    }
    else
    {
        cout << "Not enough money! " << vacationPrice - soldToysSum << " lv needed." << endl;
    }
    
    

    return 0;
}