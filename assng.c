#include <stdio.h>
 
int main()
{

int a[7] ;
int b[6] ;
int c[6] ;
int d[6] ;
int e[6] ;
int a1=45,i,k=0;
float mean, sum1=0, sum2=0;

for(i = 10; i<=70; i=i+10)
{
	a[k] = i ;
	k++;
}

b[0]=5; 
b[1]=2; 
b[2]=7; 
b[3]=9; 
b[4]=2; 
b[5]=5;

for (i = 0; i < 6; i++)
{
    sum1 = sum1 + b[i];
}

for( i=0; i<6;i++)
{
	c[i] = (a[i] + a[i+1])/2 ;
}

for(i=0; i<6; i++)
{
	d[i] = c[i]-c[3];
}

for(i=0;i<6;i++)
{
    e[i] = b[i]*d[i] ;
    sum2 = sum2 + e[i] ;
} 

mean = a1+(sum2/sum1) ;
printf("Mean = %.2f\n",mean);

}


