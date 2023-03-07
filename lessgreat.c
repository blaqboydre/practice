#include <stdio.h>

int main()
{
	    int a;
	        
	        printf("Enter a number: ");
		    scanf("%d", &a);

		        if(a >= 0 && a <= 5)
				        printf("%d is <= 5\n", a);

			    if(a > 5 && a <= 10)
				            printf("%d is > 5\n", a);
			            
			        else
					        printf("invalid\n");
				        
				    return 0;
}
