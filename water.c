/*Ask the user to prompt his/her shower lenght in minutes
 *then prompt the user the equivalent amount of water in bottles
 *
 *coder: 4ndr4a
 */
 
#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int m;
    int bot;
    
    do
    {
        printf("Shower lenght:  ");
        m = GetInt(); 
    }
    while(m <= 0);
    
    bot = m * 12;
    
    printf("minutes: %i\n", m);
    printf("bottles:  %i\n", bot);
}
