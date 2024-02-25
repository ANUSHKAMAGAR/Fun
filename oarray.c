#include<stdio.h>

    int main(){
    int i,a[10],l,count=1,temp,j;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<l;i++){
     for(j=i+1;j<l;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        } 
    }
    printf("sorted array is = a[%d]---->%d\n",i,a[i]);
    }
    for(i=0;i<l;i++)
    {
        if(a[i]==a[i+1]){
            count++;
    }
    else{
       
        printf("%d---->%d\n",a[i],count);
         count=1;
    }
    }
return 0;
}