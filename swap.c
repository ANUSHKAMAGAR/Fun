#include<stdio.h>
int main()
{ long int a,c=0,temp,fd,mid,ld,m;
    printf("enter number \n");
    scanf("%ld",&a);
    while(a!=0){
        a=a/10;
        c++;
    }
    temp=a;
    ld=a%10;
    a=a/10;
    mid=a%100;
    fd=a/100;
    printf("fd=%d ld=%d mid=%d\n",fd,ld,mid);
    temp=ld*10000+mid*100+fd;
    printf("%ld",temp);
}