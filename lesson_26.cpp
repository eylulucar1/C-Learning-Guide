
#include <iostream>
using namespace std;

// Finding the greatest common divisor and the least common multiple

int max(int x, int y) {
    return x >= y ? x : y;
}

int min(int x, int y) {
    return x < y ? x : y;
}

void TGCD(int x, int y) {
    int gcd = 1;
    int smallest = min(x, y);

    for (int i = 1; i <= smallest; i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD: " << gcd << endl;
}

void TLCM(int x, int y) {
    int lcm = 1;
    int i = max(x, y);

    while (true) {
        if (i % x == 0 && i % y == 0) {
            lcm = i;
            break;
        }
        i++;
    }

    cout << "LCM: " << lcm << endl;
}

int main() {
    int n1, n2;

    cout << "Enter a number one: ";
    cin >> n1;

    cout << "Enter a number two: ";
    cin >> n2;

    TGCD(n1, n2);
    TLCM(n1, n2);

    return 0;
}
