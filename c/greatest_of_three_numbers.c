#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter three numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	
	int ans=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d is the greatest",ans);
   
    return 0;      
}


