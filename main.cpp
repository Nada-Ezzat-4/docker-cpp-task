#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    cout << "Hi from Nada Ezzat! Student ID: 2023040401\n";
    cout << "Container is running. Check with 'docker ps'.\n";

    while (true) {
        this_thread::sleep_for(chrono::hours(1));
    }

    return 0;
}
