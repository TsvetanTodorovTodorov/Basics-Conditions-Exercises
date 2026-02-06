#include <iostream>
using namespace std;

int main()
{
    // does the budget will be enough for actors, clothes and decor

    // the decor cost 10% from the budget
    // if actors are above 150, there is discount for the clothes = 10%

    double movieBudget;
    int actors;
    double clothesPrice;
    cin >> movieBudget >> actors >> clothesPrice;
    
    double decorPrice = 0.1 * movieBudget; // after the price for the decor
    double totalClothesPrice = actors * clothesPrice;
    
    if (actors > 150)
    {
        totalClothesPrice *= 0.9; // 10% discount
    }

    double totalExpenses = decorPrice + totalClothesPrice;

    cout. setf(ios::fixed);
    cout.precision(2);

    if (movieBudget >= totalExpenses)
    {
        cout << "Action!" << endl << "Wingard starts filming with " << movieBudget - totalExpenses << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money!" << endl << "Wingard needs " << totalExpenses - movieBudget << " leva more." << endl;
    }

    return 0;
}