/**
  *Introduction to Computer Science
  *
  *CS50
  *
  *PSET 2
  *INITIALS
  *
  *coder: 4ndr4a 
  */
  
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)
{   
    char c;
    char d;
    
    string s = GetString();
    
    if( islower(s[0]))
    {
        c = s[0] -('a' - 'A');
    }
    
    else
    {
        c = s[0];
    }
    
    printf("%c", c);
          
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        
        if( s[i] == ' ')
        {
            
            if( islower(s[i+1]) )
            {
                d = s[i + 1] - ('a' - 'A'); 
                printf("%c", d);   
            }
            
            else
            {
                d = s[i+1];
                printf("%c", d);                
            }            
        }              
    }
    printf("\n");
}
