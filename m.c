#include<stdio.h>
int main(){
    int ch;
    int stack[5],max,top=-1,value;
    max=sizeof(stack)/sizeof(stack[0]);
    do{
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch){ 
    case 1:
   if(top==max-1){
    printf("stack is overflow");
   }
   else{
    top=top+1;
    printf("enter value in stack");
    scanf("%d",&value);
    stack[top]=value;
   }
    break;
    case 2:
    if(top==-1){
        printf("stack is underflow");
        }
        else{
            for(int i=top;i>=0;i--){
                printf("%d\t",stack[i]);
            }
        }
    break;
    case 3:
    if(top==-1){
        printf("stack is underflow");
    }
    else{
        value=stack[top];
        top=top-1;
        printf("deleted value is %d",value);
    }
    }
    }while(ch<=5);
}