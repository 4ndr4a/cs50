#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int hght , i , k , z;
    
    do
    {
        printf("Enter the pyramid height (0-23):  ");
        hght = GetInt();
    }
    while (hght < 0 || hght > 23);
    
    for (i = 1 ; i <= hght ; i++)
    {
        for(k = 0 ; k < hght - i ; k++)
        {
            printf(" ");
        }
        
        
        for(z = 0 ; z < i + 1 ; z++)
        {
            printf("#");
        }
        
        printf("\n");
    
    }
}
