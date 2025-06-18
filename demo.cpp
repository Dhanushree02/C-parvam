#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    const int width = 30;
    int pos = 0;
    int dir = 1;

    while (true) {
        // Clear screen (Windows: use "cls")
        system("clear");

        // Draw animation
        for (int i = 0; i < width; ++i) {
            if (i == pos)
                cout << "O";
            else
                cout << "-";
        }
        cout << endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        // Move position
        pos += dir;
        if (pos == width - 1 || pos == 0)
            dir *= -1;
    }

    return 0;
}
