/**
  *Introduction to Computer Science
  *
  *coder: 4ndr4a 
  */

#include<stdio.h>		// c=25c , d=10c , n=5c , p=1c
#include<cs50.h>
#include<math.h>

int main(void)
{	
	double ch;
	double round(double ch);
	int cents;
	int mod1;
	int mod2;
	int mod3;
	int mod4;
	int coins;
	int coins1;
	int coins2;
	int coins3;
	int sum1;
	int sum2;
	int sum3;
	int body1;
	int body2;
	int body3;
	int body4;
	
	int Q = 0.25 * 100;
	int D = 0.10 * 100;
	int N = 0.05 * 100;
	int P = 0.01 * 100;
	
	//1st loop: input, round input, output number of cents
	do
	{
	printf("How much changed is owed? : ");
	ch = GetDouble();
	cents = ch * 100;
	}
	while ( ch < 0 ); 
	
	mod1 = cents % Q;
	body1 = cents - mod1;
		
		if ( mod1 == 0 )								//1st case: only quarters
		{
			coins = cents / Q;
			printf("%d\n" , coins );
		}
		
		else											//2nd case: quarters are not enough
		{
			coins = body1 / Q;
			mod2 = mod1 % D;
			body2 = mod1 - mod2;
		
					if ( mod2 == 0 )					//3rd case: quarters + dimes
					{
						coins1 = mod1 / D;
						sum1 = coins + coins1;
						printf("%d\n" , sum1 );
					}
					
						else							//4th case: dimes are not enough
						{
							coins1 = body2 / D;
							sum1 = coins + coins1;
							mod3 = mod2 % N;
							body3 = mod2 - mod3;
										
							if( mod3 == 0 )				//5th case: quarters + dimes + nichels
							{
								coins2 = mod2 / N;
								sum2 = sum1 + coins2;
								printf("%d\n" , sum2 );
							}
								
								else 					//6th case: nichels are not enough
								{
									coins2 = body3 / N;
									sum2 = sum1 + coins2;
									mod4 = mod3 % P;
														
									if ( mod4 == 0 )
									{
										body4 = mod3 - mod4;
										coins3 = body4 / P;
										sum3 = sum2 + coins3;
										printf("%d\n" , sum3 );
									}
								}
						}
		}
}
