#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char text[100];
    
    cout << "Enter message: ";
    cin.getline(text, sizeof(text));

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            int start_char = (text[i] >= 'a') ? 'a' : 'A';
            int shift = (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' ||
                         text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') ? 1 : 2;
            text[i] = ((text[i] - start_char + shift) % 26) + start_char;
        }
    }

    cout << "Encrypted text: " << text << endl;

    return 0;
}
