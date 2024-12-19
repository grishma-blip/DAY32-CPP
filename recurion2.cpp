#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
}
int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
    if (N < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int sum = sumOfNaturalNumbers(N);
        cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
    }
    return 0;
}