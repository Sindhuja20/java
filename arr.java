import java.util.*;
import java.lang.*;
class Array{ public static void main(String args[]) {
Scanner sc=new Scanner(System.in);
int n,i,j; n=sc.nextInt();
int num[]=new int[n];
int bc[]=new int[n];
for(i=0;i<n;i++) 
{
num[i]=sc.nextInt();
bc[i]=Integer.bitCount(num[i]);
}
for(i=0;i<n;i++) {
for(j=i+1;j<n;j++)
{
if(num[i]<num[j])
{
int t=num[i]; 
num[i]=num[j]; 
num[j]=t;
t=bc[i];
bc[i]=bc[j];
bc[j]=t;
}
}
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{ 
if(bc[i]<bc[j])
{
int t=num[i];
num[i]=num[j]; 
num[j]=t;
t=bc[i];
bc[i]=bc[j];
bc[j]=t; 
}
}
}
for(i=0;i<n;i++)
{
System.out.println(num[i]);
}
}
}
