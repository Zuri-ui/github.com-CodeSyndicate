#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    map<string, double> menu = {
        {"nachos", 6.0},
        {"pizza", 6.0},
        {"cheeseburger", 10.0},
        {"water", 4.0},
        {"coke", 5.0}};

    const double tax_rate = 0.07;
    string input, item;
    double total = 0.0;

    cout << "Enter items separated by spaces: ";
    getline(cin, input);

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    stringstream ss(input);
    while (ss >> item)
    {
        if (menu.count(item))
        {
            total += menu[item];
        }
        else
        {
            total += menu["coke"];
            coke
        }
    }

    total += total * tax_rate;

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
