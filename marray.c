#include<stdio.h>
int main(){
    int a[5],i,l,max,min,temp;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);
    }
    max=a[0];
    min=a[4];
    for(i=0;i<l;i++)
    {   
        if(a[i]>max)
        max=a[i];
        
        if(a[i]<min)
        min=a[i];
    }
        printf("max=%d min=%d\n",max,min);
}