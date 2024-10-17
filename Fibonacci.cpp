#include <iostream>
using namespace std;

int main() {
    int numTerms, first = 0, second = 1, next;

    // Prompt the user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> numTerms;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= numTerms; i++) {
        // Print the current Fibonacci number
        cout << first << " ";
        
        // Calculate the next term
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
