/**
  *Introduction to Computer Science
  *
  *CS50
  *
  *PSET 2
  *VIGENERE CIPHER
  *
  *coder: 4ndr4a
  ****/

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

string ciph(string text, string k);

int main(int argc, char* argv[])
{ 

//Rejects less than or more than 2 arguments       
   
    while(argc != 2) 
    {
        printf("Error!\n");
        return 1;
    }
    
        string k = argv[1];
 
//Check the Key: anything but letters is rejected    

for(int m = 0, n = strlen(k); m < n; m++)
{
    if(ispunct(k[m]) || isdigit(k[m]))
    {
        printf("Error!\n");
        return 1;
    }       
}

        string text = GetString();
        
//calling of the ciphering function   
        
        string citext = ciph(text,k);
        printf("%s", citext);
                    
    printf("\n");
    return 0;
}



//Ciphering Function

string ciph(string text, string k)
{
       
//Encription engine
        
        for(int i = 0, j = 0; i < strlen(k) && j < strlen(text);)
        {
                if(isupper(text[j]) && islower(k[i]))
                {
                    if(text[j] == 90)
                    {
                       text[j] = text[j] + k[i] - 97 - 25;
                       i++;
                       j++;
                    }
                    
                    else if(isblank(text[j]) || isdigit(text[j]) || ispunct(text[j]))
                    {
                        j++;
                    }
                    
                    else
                    {
                        if(text[j] + k[i] <= 187)
                        {    
                            text[j] = text[j] + k[i] - 97;
                            i++;
                            j++;
                        }
                        else
                        {
                            text[j] = text[j] + k[i] - 97 - 26;
                        }
                    }
                }
                    else if(isupper(text[j]) && isupper(k[i]))
                         {
                            if(text[j] == 90)
                            {
                                text[j] = text[j] + k[i] - 65 - 25;
                                i++;
                                j++;
                            }
                            
                            else if(isblank(text[j]) || isdigit(text[j]) || ispunct(text[j]))
                                 {
                                    j++;
                                 }
                                 
                            else if(text[j] + k[i] <= 155)
                                 {
                                    text[j] = text[j] + k[i] - 65;
                                    i++;
                                    j++;
                                 }
                                 
                                 else
                                 {
                                    text[j] = text[j] + k[i] - 65 - 26;
                                    i++;
                                    j++;
                                 }
                        }
                     
                        else if(islower(text[j]) && isupper(k[i]))
                             {
                                if(text[j] == 122)
                                {
                                   text[j] = text[j] + k[i] - 65 - 25;
                                   i++;
                                   j++;
                                }
                                
                                else if(isblank(text[j]) || isdigit(text[j]) || ispunct(text[j]))
                                {
                                    j++;
                                }
                                 
                                else
                                {
                                
                                if(text[j] + k[i] <= 187)
                                {
                                   text[j] = text[j] + k[i] - 65;
                                   i++;
                                   j++;
                                }
                                
                                else
                                {
                                    text[j] = text[j] + k[i] - 65 - 26;
                                    i++;
                                    j++;
                                }
                                
                                } 
                            }
                          
                   else        
                   {
                        if(text[j] == 122)
                        {
                            text[j] = text[j] + k[i] - 97 - 25;
                            i++;
                            j++;
                        } 
                          
                        else if(isblank(text[j]) || isdigit(text[j]) || ispunct(text[j]))
                             {
                                j++;
                             }
                             
                             else
                             {
                             
                             if(text[j] + k[i] <= 219)
                             {
                                text[j] = text[j] + k[i] - 97;
                                i++;
                                j++;
                             }
                             
                             else
                             {
                                text[j] = text[j] + k[i] - 97 - 26;
                                i++;
                                j++;
                             }
                             }
                   }
                          
               if(i == strlen(k))
               {
                   i = 0;
               }      
        }
        return text;    
}
