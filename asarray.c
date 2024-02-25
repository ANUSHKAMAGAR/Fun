#include<stdio.h>

    int main(){
    int a[5],l,i,j,temp;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++){
        printf("a[%d]---%d\n",i,a[i]);
    }
    for(i=0;i<l;i++){
     for(j=i+1;j<l;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        } 
    }
    }
    for(i=0;i<l;i++){
    printf("%4d",a[i]);
    }
return 0;
}