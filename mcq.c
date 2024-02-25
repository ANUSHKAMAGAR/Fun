#include<stdio.h>

    int main(){
    int i=0,j=1,k=2,m;
    m=i++||j++||k++;
    printf("m=%d k=%d i=%d j=%d\n",m,k,i,j);
return 0;
}