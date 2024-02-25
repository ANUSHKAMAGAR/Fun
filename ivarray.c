#include<stdio.h>
int main()
{
 int a[6],value,index,i;
 printf("enter elements in array\n");
 for(i=0;i<5;i++){
    scanf("%d",&a[i]);
 }
 printf("display the element\n ");
 for(i=0;i<5;i++){
 printf("a[%d]----->%d\n",i,a[i]);
 }
 printf("enter index and value\n");
 scanf("%d%d",&index,&value);
 for(i=4;i<index;i--){
   a[i+1]=a[i];
 }
a[index]=value;
 printf("array after inserting value\n");
 for(i=0;i<6;i++){
   printf("a[%d]----->%d\n",i,a[i]);
 }
}