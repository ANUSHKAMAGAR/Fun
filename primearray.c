#include<stdio.h>
    int main(){
    int a[10],l,i,flag;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("a[%d]--->%d\n",i,a[i]);
    }
    a[i]=2;
    while(i>=a[i]){
        if(i%a[i]==0){
            flag=1;
        }
        if(flag){
            i++;       
    // printf("prime number is a[%d]---->%d\n",a[i],i);
    }
    }
    printf("prime number is %d\n",i);
        return 0;
}