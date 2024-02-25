#include<stdio.h>

    int main(){
    int a[]={88,87,73,70,36,87,77,36,83,86,87,77},i,start,end,mid,l,temp;
    l=sizeof(a)/sizeof(a[0]);
for(i=0;i<l;i++){
    printf("orignal array=a[%d]--->%d\n",i,a[i]);
}
    start=0;
    mid=l/2;
    end=l-1;

    for(start=0;start<mid;start++)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;
        
    }
    for(i=0;i<l;i++){
    printf("reverce array=a[%d]--->%d\n",i,a[i]);
    }temp=a[i];
    for(i=0;i<l;i++){
       a[i]=a[i]-4;
       
    }    
    for(i=0;i<l;i++){
    printf("%c",a[i]);
}
}