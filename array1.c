#include<stdio.h>

    int main(){
    int a[5],i,l,sum=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter value in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++){
        printf("a[%d]---->%d\n",i,a[i]);
    }
    for(i=0;i<l;i++){
    sum=sum+a[i];
  //a[i]=sum;
    }
    printf("sum=%d\n",sum);
return 0;
}