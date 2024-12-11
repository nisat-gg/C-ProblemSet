#include <stdio.h>
#include <string.h>

int main() 

{
    int N, D;
    char S[101]; 


    scanf("%d %d", &N, &D);
    scanf("%s", S);

    int em_boxes = 0;
    int cookie_eaten = 0;

    for (int i = 0; i < N; i++)
     {
        if (S[i] == '@' && cookie_eaten < D) 
        {
            cookie_eaten++; 
            S[i] = '.';    

        if (S[i] == '.') {
            em_boxes++; 
        }
    }

 
     printf("%d\n", em_boxes);

     return 0;
    }
}