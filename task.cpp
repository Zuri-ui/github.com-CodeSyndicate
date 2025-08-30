#include <iostream>

using namespace std;

int nachos = 6, pizza = 6, cheeseburger_meal = 10, water = 4, coke = 5;

int getPrice(string order) {
    if (order == "nachos") return nachos;
    if (order == "pizza") return pizza;
    if (order == "cheeseburger_meal") return cheeseburger_meal;
    if (order == "water") return water;
    if (order == "coke") return coke;
    return 0;
}

int main() {
    int subtotal = 0, tax;
    string order1, order2, order3;

    cout << "Menu:\n";
    cout << "nachos = $6\n";
    cout << "pizza = $6\n";
    cout << "cheeseburger_meal = $10\n";
    cout << "water = $4\n";
    cout << "coke = $5\n\n";

    cout << "Enter order 1: ";
    cin >> order1;

    cout << "Enter order 2: ";
    cin >> order2;

    cout << "Enter order 3: ";
    cin >> order3;

    subtotal = getPrice(order1) + getPrice(order2) + getPrice(order3);

    cout << "\nCost of friends orders: $" << subtotal << endl;
    cout << "Cost of my order (1 pizza): $" << pizza << endl;

    tax = (subtotal + pizza) * 0.07;
    cout << "Tax on subtotal: $" << tax << endl;

    cout << "Total (with tax): $" << (subtotal + pizza + tax) << endl;

    return 0;
}
