#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    // Days of the week
    vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    // Temperature readings for each day
    vector<double> temps = {5.5, 12.3, 18.9, 22.4, 15.2, 25.6, 8.1};

    tuple<string, double> warmestDay = make_tuple(days[0], temps[0]);

    // Print each day and classify weather
    for (size_t i = 0; i < days.size(); i++) {
        cout << days[i] << " : " << temps[i] << " °C -> ";

        if (temps[i] < 10) {
            cout << "Cold";
        } else if (temps[i] >= 10 && temps[i] <= 20) {
            cout << "Ok";
        } else {
            cout << "Warm";
        }
        cout << endl;

        // Track warmest day
        if (temps[i] > get<1>(warmestDay)) {
            warmestDay = make_tuple(days[i], temps[i]);
        }
    }

    cout << "\nWarmest Day: " << get<0>(warmestDay) 
         << " with " << get<1>(warmestDay) << " °C\n";

    return 0;
}
