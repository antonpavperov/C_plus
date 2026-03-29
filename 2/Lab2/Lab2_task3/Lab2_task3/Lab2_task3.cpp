#include <iostream>
using namespace std;

int main() {
    int sum;
    cin >> sum;

    int coins[] = { 10, 5, 2, 1 };
    int n = 4;

    for (int i = 0; i < n; i++) {
        int coin = coins[i];

        int count = sum / coin;   
        sum = sum % coin;         

        if (count > 0) {
            cout << coin << " x " << count << endl;
        }
    }

    return 0;
}