#include<stdio.h>
#include<conio.h>
int main ( void )
{
int minutes;
scanf("%d",&minutes);
if ( (minutes / 60) == 1 )
printf("%d ",minutes/60);
else 
printf("%d ",minutes/60);

if ( (minutes % 60) == 1) 
printf("%d",minutes%60);
else 
printf("%d",minutes%60);

return 0;
}
