#include <iostream>
using namespace std;

int main() {
    double budget;
    cin >> budget;
    int videoCards, processors, memory;
    cin >> videoCards >> processors >> memory;

    double videoCardPrice = 250;
    double videoTotalPrice = videoCardPrice * videoCards;
    double processorPrice = videoTotalPrice * 0.35;
    double processorsTotalPrice = processors * processorPrice;
    double ramPrice = videoTotalPrice * 0.1;
    double ramTotalPrice = memory * ramPrice;

    double totalPrice = videoTotalPrice + processorsTotalPrice + ramTotalPrice;

    if (videoCards > processors)
    {
        totalPrice *= 0.85;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);

    if ( budget >= totalPrice) {
        cout << "You have " << budget - totalPrice << " leva left!" << endl;
    } else {
        cout << "Not enough money! You need " << totalPrice - budget << " leva more!" << endl;
    }


    return 0;
}