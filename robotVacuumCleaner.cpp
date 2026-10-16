#include <iostream>
using namespace std;

void vacuumCleaner(bool roomA, bool roomB, char position) {
    while (true) {
        if (position == 'A' && roomA) {
            cout << "Cleaning Room A\n";
            roomA = false;
        }
        else if (position == 'B' && roomB) {
            cout << "Cleaning Room B\n";
            roomB = false;
        }

        if (!roomA && !roomB) {
            cout << "All rooms are clean!\n";
            break;
        }

        if (position == 'A') {
            position = 'B';
            cout << "Moving to Room B\n";
        }
        else {
            position = 'A';
            cout << "Moving to Room A\n";
        }
    }
}

int main() {
    bool roomA = true;
    bool roomB = true;

    vacuumCleaner(roomA, roomB, 'A');

    return 0;
}
