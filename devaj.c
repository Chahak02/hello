#include <stdio.h>
// using namespace std;
int main() 
{
 int t,n,d,d1,i,found;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&d);
// int flag1=0;
int flag1;
for(i=0;flag1==0;i++)
{
int num=n+i;
bool flag2=0;
while(num>0)
{
    d1=num%10;
    num/=10;
if(d1==d)
{
flag2=true;
break;
}
}
if(flag2)
{
found=i;
break;
}
}
printf("%d\n",found);
}
 return 0;
}
int help(int num,int d)
{
   //d is digit given by user to checked
   if(num==0)
   return 0;
   else{
   int d1=num%10;
   if(d1==d)
   return 1;
  return help(num/10,d);
}
