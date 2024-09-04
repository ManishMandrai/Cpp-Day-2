#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the number to check for prime

    if (n <= 1) {  // Handle cases where n is 1 or less
        cout << "Non prime" << endl;
        return 0;
    }

    bool isPrime = true;  // Assume n is prime initially

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {  // Check for divisors of n
            isPrime = false;  // If a divisor is found, n is not prime
            break;  // Exit loop once a divisor is found
        }
    }

    if (isPrime) {
        cout << "Prime" << endl;  // Output if n is prime
    } else {
        cout << "Non prime" << endl;  // Output if n is not prime
    }

    return 0;
}
