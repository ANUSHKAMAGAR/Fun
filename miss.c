#include<stdio.h>

    int main(){
    int i,a[5],j;
    printf("enter elements in array\n");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for(j=a[i]+1;j<a[i+1];j++)
        {
            printf("\nmissing=%d",j);
        }
    }
return 0;
}