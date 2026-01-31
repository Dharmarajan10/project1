#include <iostream>
using namespace std;

int main() {
    // Example of a simple for loop in C++
    // This loop will print numbers from 1 to 5

    // Initialization: int i = 1 (start i at 1)
    // Condition: i <= 5 (loop will run as long as i is less than or equal to 5)
    // Increment: i++ (increase i by 1 after each iteration)
    for (int i = 1; i <= 5; i++) {
        // Print the current value of i
        cout << "Current number: " << i << endl;
    }

    // The loop ends when the condition (i <= 5) becomes false
    return 0;
}