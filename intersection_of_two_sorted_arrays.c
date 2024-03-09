#include <stdio.h>
int main() {
int i=0,j=0,flag=0;
int a[]={3,4,4,6};
int b[]={1,4,5};
//int c[12];
for(i=0;i<4;i++)

{
 for(j=0;j<3;j++)
 {
   if(i!=0 && j!=0 && a[i]==b[j] && a[i]!=a[i-1] && b[j]!=b[j-1])
   {
    printf("\t%d",a[i]);
    flag=1;
   }
   else if(i==0 && j!=0 && a[i]==b[j] &&  b[j]!=b[j-1])
   {
    printf("\t%d",a[i]);
    flag=1;
   }
   else if(j==0 && i!=0 && a[i]==b[j] && a[i]!=a[i-1])
   {
    printf("\t%d",a[i]);
    flag=1;
   }
   else if(i==0 && j==0 && a[i]==b[j])
   {
    printf("\t%d",a[i]);
    flag=1;
   }
   
 }
}
if(flag==0)
{
    printf("No intersection");
}
    return 0;
}