#include <stdio.h>
int main() {
int l=0,r=0,i=0,j;
int a[]={1,3,4,4,9,26};
int b[]={1,4,4,9,11,12};
int c[12];
while(l<6 && r<6)
{
    if(a[l]<b[r])
    {
        c[i]=a[l];
        l++;
    }
    else if(a[l]==b[r])
    {
        c[i]=a[l];
        l++;
        r++;
    }
    else{c[i]=b[r];
           r++;}
    i++;
}
if(l==6)
{
    while(r<6)
    {
       c[i]=b[r];
       i++;
       r++; 
    }
}
if(r==6)
{
    while(l<6)
    {
        c[i]=a[l];
        i++;
        l++;
    }
}
for(j=0;j<i;j++)
{
    printf("\t%d",c[j]);
}
    return 0;
}