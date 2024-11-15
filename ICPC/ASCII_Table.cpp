#include <iostream>
#include <cstdlib>

#define TOTAL_CHARS 94
#define ASCII_START 33

void find_grid_dimensions(char c1, char c2) {
    int ascii_c1 = c1 - ASCII_START;
    int ascii_c2 = c2 - ASCII_START;

    if (ascii_c1 > ascii_c2) {
        std::swap(ascii_c1, ascii_c2);
    }

    for (int rows = 1; rows <= TOTAL_CHARS; rows++) {
        if (TOTAL_CHARS % rows == 0) {
            int columns = TOTAL_CHARS / rows;
            int row_c1 = ascii_c1 / columns;
            int row_c2 = ascii_c2 / columns;

            if (row_c1 == row_c2) {
                std::cout << rows << " " << columns << std::endl;
            }
        }
    }
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        char c1, c2;
        std::cin >> c1 >> c2;

        std::cout << c1 << " " << c2 << std::endl;  // Print the characters first
        find_grid_dimensions(c1, c2);  // Then find and print the grid dimensions
    }

    return 0;
}
