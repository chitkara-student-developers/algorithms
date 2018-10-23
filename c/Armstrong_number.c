#include<stdio.h>
#include<math.h>
int main()
{
     int num,sum=0,rem,square,i=1,j,temp;
     // Enter 1000 to print all Armstrong numbers till 1000
	 printf("Enter the number :\n");
	 scanf("%d",&num);
     
      
     for( j=1; j<num; j++) {		 
	     
		   temp = j;
		   int len=log10(j)+1;  
	    
		   for(i=j ; i!=0; ) {		 
			rem = i%10;
			square = pow(rem,len);
			sum = sum+square;
			 i= i/10;
      		}
      		
		if (sum == temp)					
	      printf("%d\n",temp);
	        
           sum=0;
    }
       
     return 0;  
}
