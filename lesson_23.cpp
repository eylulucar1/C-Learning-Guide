
#include <iostream>
#include <cmath>
using namespace std;

// Find all prime numbers up to the entered number.
void findEnteredNumbers(int max) {
    for (int i = 2; i <= max; i++) {
        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "It's a prime number: " << i << endl;
        }
    }
}

int main() {
    findEnteredNumbers(19);
    return 0;
}
