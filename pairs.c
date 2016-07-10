#include<stdio.h>
int main()
{
char name[20];
int i,j,no_ch,no_days,ascii=97,days,n;
char t;
printf("\n Enter the n value:");
scanf("%d",&n);
no_ch=2*n;
no_days=2*n-1;
for(i=0;i<no_ch;i++)
{
name[i]=ascii;
ascii++;
days=no_days;
j=2*n-1;
while(days!=0)
{
printf("\n Children pair for day %d",days);
for(i=0;i<2*n;i++)
{
printf("\n %c and %c",name[i],name[j]);
j--;
}
for(i=0;i<2*n;i++)
{
if(i==0)
{
t=name[i];
}
name[i]=name[i+1];
if(i==(2*n)-1)
{
name[i]=t;
}
}
days--;
}
}
return 0;
}
