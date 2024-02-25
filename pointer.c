/*#include<stdio.h>
int main()
{
    int a,*ptr;
    printf("enter value of a\n");
    scanf("%d",&a);
    ptr=&a;
    printf("add=%u",ptr);
}*/
/*#include<stdio.h>
int main(){
    int a,b,*ptr1,*ptr2,sum,mul,sub,div;

    printf("enter value of a and b\n");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1 + *ptr2;
    printf("sum=%d\n",sum);
    mul=*ptr1 * *ptr2;
    printf("multi=%d\n",mul);
    sub=*ptr1 - *ptr2;
    printf("sub=%d\n",sub);
    div=*ptr1  / *ptr2;
    printf("%d",div);
}
*/
/*#include<stdio.h>

    int main(){
    int *ptr1,*ptr2,a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    a= *ptr1 + *ptr2;
    b= *ptr1 - *ptr2;
    a= *ptr2 - *ptr1;
printf("%d %d",a,b);
return 0;
}*/
//write a program to input and print array elements using pointer
/*#include<stdio.h>
int main(){
    int a[5],*ptr,l,i;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in pointer");
    for(i=0;i<l;i++){
    scanf("%d",&a[i]);
    }
    ptr=a;
    for(i=0;i<l;i++){
    printf("%u\n",*(&ptr[i]));
    }
}*/
//write a c program to input and sum of array elements using pointer.
/*#include<stdio.h>
    int main(){
    int a[5],l,i,*ptr,sum=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    ptr=a;
    for(i=0;i<l;i++)
    {
        printf("%u\n",*(&ptr[i]));
        sum=sum + *(&ptr[i]);
    }
    printf("sum=%u\n",sum);
return 0;
}*/
//write a c program to input and print array reverce elements using pointer.
/*#include<stdio.h>
    int main(){
    int a[5],*ptr,i,l,end,start,mid;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    ptr=a;
    start=0;
    end=5-1;
    mid=5/2;
    for(start=0;start<mid;start++){
        int temp= *(ptr+start);
        *(ptr+start)=*(ptr+end);
        *(ptr+end)=temp;
        end--;  
    }
    for(i=0;i<5;i++){
        printf("%u\n",*(ptr+i));
    }
return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
    int main(){
    int *ptr1,base,index,*ptr,a;
    ptr=&base;
    ptr1=&index;
    printf("enter base and index");
    scanf("%d %d",&base,&index);
    a=pow(*ptr,*ptr1);
    printf("result=%d",a);
return 0;
}*/