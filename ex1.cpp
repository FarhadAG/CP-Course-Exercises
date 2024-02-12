#include <iostream>

int main() {
    int rows = 4;
    for (int i = rows; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}