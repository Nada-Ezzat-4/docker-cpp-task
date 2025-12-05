// main.cpp
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Hi from Nada Ezzat! Student ID: YOUR_ACAD_NUM\n";
    std::cout << "Container will stay running so you can show it in docker ps.\n";
    // keep the process alive
    while (true) {
        std::this_thread::sleep_for(std::chrono::hours(1));
    }
    return 0;
}
