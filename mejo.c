#include<stdio.h>
    int main(){
    int i,a[6],l,count=1,temp,j,flag=0;
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
    printf("a[%d]---->%d\n",i,a[i]);
    }
    count=1;
    for(i=0;i<l;i++)
    {

    if(a[i]==a[i+1]){
    ++count;
    if(count>=(l/2)){
        flag=1;
        break;
        }
        }
    else{
        count=1;
       flag=0;
    }
        }
    if(flag)
    printf("count of %d is=%d it is mejority element\n",a[i],count);
    else 
    printf("array has no majority element is\n");
return 0; 
}