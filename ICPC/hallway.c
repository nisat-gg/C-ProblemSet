#include <stdio.h>

void hallway() {
    int howMany; 
    scanf("%d", &howMany);
    
    while (howMany--) {
        char path[7]; 
        scanf("%s", path);

        int redKey = 0, greenKey = 0, blueKey = 0;
        int canDoIt = 1; 

        for (int i = 0; i < 6; i++) {
            if (path[i] == 'r') 
                redKey = 1;    
            else if (path[i] == 'g') 
                greenKey = 1; 
            else if (path[i] == 'b') 
                blueKey = 1;  
            else if (path[i] == 'R' && !redKey) 
            { 
                canDoIt = 0;
                break;
            }
            else if (path[i] == 'G' && !greenKey) 
            { 
                canDoIt = 0;
                break;
            }
            else if (path[i] == 'B' && !blueKey) 
            { 
                canDoIt = 0;
                break;
            }
        }

      
        if (canDoIt) printf("YES\n");
        else printf("NO\n");
    }
}

int main() {
    hallway();
    return 0;
}
