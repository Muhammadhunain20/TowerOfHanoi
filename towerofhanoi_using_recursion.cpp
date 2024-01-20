#include<iostream>
using namespace std;

// Function to solve Tower of Hanoi problem using recursion
void towerofhanoi(int n, string source, string temporary, string destination, int &diskcounts) {
    if (n == 1) {
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        diskcounts++;
        return;
    }

    // Move (n-1) disks from source to temporary
    towerofhanoi(n - 1, source, destination, temporary, diskcounts);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    diskcounts++;

    // Move (n-1) disks from temporary to destination
    towerofhanoi(n - 1, temporary, source, destination, diskcounts);
}

int main() {
    int n;
    int diskcounts = 0;

    // Input: Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    string source = "SourceRod", temporary = "TemporaryRod", destination = "DestinationRod";

    // Function call to solve Tower of Hanoi
    towerofhanoi(n, source, temporary, destination, diskcounts);

    // Output: Total number of moves
    cout << "Total number of moves: " << diskcounts << endl;

    return 0;
}

