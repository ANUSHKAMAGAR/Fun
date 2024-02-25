#include<stdio.h>
int main(){
    int a[10],l,i,flag=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("length is %d\n",l);
    printf("enter element in array\n");
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<l;i++){
         if(i>=5){
        printf("#");
         }
         else 
        printf("%d",a[i]);
    }
     
   

}