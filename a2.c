#include<stdio.h>
    int main(){
    int a[5],b[5],j=0,l1,l2,i,l3,k,c[10];
    l1=sizeof(a)/sizeof(a[0]);
    l2=sizeof(b)/sizeof(b[0]);
    l3=l1+l2;
    printf("enter element in 1st array\n");
    for(i=0;i<l1;i++){
    scanf("%d",&a[i]);
    }
    printf("display the first array\n");
    
    printf("enter element in 2nd array\n");
    for(i=0;i<l2;i++){
    scanf("%d",&b[i]);
    }
    printf("array after merge\n");
    for(i=0;i<l3;i++)
    {if(i>=5){
        c[i]=b[j];
        j++;
    }   
    else{
        c[i]=a[i];
    }
     printf("c[%d]----->%d\n",i,c[i]);
    }

return 0;
}