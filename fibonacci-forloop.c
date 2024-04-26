#include<stdio.h>
main()
{
	int a,N;
	int t1=0,t2=1;
	int nextnumber=t1+t2;
	printf("Enter any number: ");
	scanf("%d",&N);
	printf("%d, %d, ",t1,t2);
	
	for(a==3; a<=5; a++){
		printf("%d, ",nextnumber);

    t1=t2;
    t2=nextnumber;
    nextnumber=t1+t2;
	}
}