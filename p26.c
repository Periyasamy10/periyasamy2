#include<stdio.h>
#include<conio.h>
nt main(void) {
	int i,k;
	scanf("%d %d",&i,&k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("%d %d",i,k);
	return 0;
}
