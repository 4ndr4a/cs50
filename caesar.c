/**
  *Introduction to Computer Science
  *
  *CS50
  *
  *PSET 2
  *CAESAR CIPHER
  *
  *coder: 4ndr4a 
  */

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{  
    while(argc != 2) 
    {
        printf("Error!\n");
        return 1;
    }
    
   int k = atoi(argv[1]);
     
   if(k < 0)
   {
        printf("Error!\n");
        return 1;
   }
   
   else
   {
        string s = GetString();
    
    for(int i = 0, n = strlen(s); i < n; i++)
    {

//Case1: Uppercase Character

        if(isupper(s[i]))
        {
            if(s[i] + k <= 90)
            {
                s[i] = s[i] + k;
            }
            
            else if(k < 26)
                 {
                    if(s[i] + k <= 90)
                    {
                        s[i] = s[i] + k;
                    }
                    
                    else
                    {
                        s[i] = s[i] - 26 + k;
                    }
                 }
           else 
            {
                int m = k % 26;
                
                if((s[i] + m) <= 90)
                {
                    s[i] = s[i] + m;
                }
                
                else
                {
                    s[i] = s[i]- 25 + m;
                }
            }
        }
        
//Case2: Lowercase Character

        if(islower(s[i]))
        {
           
            if(s[i] + k <= 122)
            {
                s[i] = s[i] + k;
            }
            
            else if(k < 26)
                 {
                    
                    if(s[i] + k <= 122)
                    {
                        s[i] = s[i] + k;
                    }
                    
                    else
                    {
                        s[i] = s[i] - 26 + k;
                    }
                 }
           
           else 
            {
                int m = k % 26;
                
                if((s[i] + m) <= 122)
                {
                    s[i] = s[i] + m;
                }
                
                else
                {
                    s[i] = s[i]- 26 + m;
                }
            }   
        }
        
    }
        
        for( int i = 0, n = strlen(s); i < n; i++)
        {
            printf("%c", s[i]);
        }
        
    printf("\n");
    
    return 0;
    }
    
}
