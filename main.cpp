// This is made by Daniel Clark
// no ai was used for this program
//the purpose of this program is to show how much pizza is needed for the party and the number of guests attending
// and the total cost of the party, and how much it costs per guest to come.

#include <iostream>
#include <iomanip> // fixed
#include <cmath> // ceil()
using namespace std;

const double NUM_SLICES = 8.0; // per pizza
const double GST = 0.05;

int main()
{
    string partyName;
    int numGuests;
    int numSlice;
    double pizzaPrice;
    int slicesNeeded = 0.0;
    int totalPizza = 0.0;
    double subtotal = 0.0;
    double total = 0.0;
    double guestTotal = 0.0;
    double gst = 0.0;

    cout << fixed << setprecision (2);

    cout << "What is the name for the party?";
    getline(cin, partyName);
    cout << "How many people are going to attend?";
    cin >> numGuests;
    cout << "How many slices of pizza per guest?";
    cin >> numSlice;
    cout << "Whats the price of one pizza? $";
    cin >> pizzaPrice;

    slicesNeeded = numSlice * numGuests;
    totalPizza = ceil(slicesNeeded/NUM_SLICES);
    subtotal = totalPizza * pizzaPrice;

    gst = subtotal * GST;

    total = subtotal * GST + subtotal;

    guestTotal = total / numGuests;


    cout << "Party name: " << partyName << endl;
    cout << "Number of guests: " << numGuests << endl;
    cout << "Slices per guest: " << numSlice << endl;
    cout << "Price per pizza:  $" << pizzaPrice << endl << endl;
    cout << "=================================" << endl;
    cout << "     PIZZA PARTY PLANNER" << endl;
    cout << "=================================" << endl;
    cout << "Party:           " << partyName << endl;
    cout << "Guests:          " << numGuests << endl;
    cout << "Slices needed:   " << slicesNeeded << endl;
    cout << "Pizzas to order: " << totalPizza << endl;
    cout << "---------------------------------" <<  endl;
    cout << "Subtotal:       $" << subtotal << endl;
    cout << "GST (5%):       $" << gst << endl;
    cout << "Total:          $" << total << endl;
    cout << "Per guest:      $" << guestTotal << endl;
    cout << "=================================";




    return 0;
}





