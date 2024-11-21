#include <iostream>
#include <cstring>

int main() {
    char input[101];
    std::cin >> input;

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            input[i] = (c == 'z') ? 'a' : c + 1;
        } else {
            input[i] = (c >= 'y') ? c - 24 : c + 2;
        }
    }

    std::cout << input << std::endl;
    return 0;
}
