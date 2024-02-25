/*//write a program to enter elements in array and dispaly it
#include<stdio.h>
int main()
{
    int a[5],i,l;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("display value in array\n");
    for(i=0;i<l;i++){
        printf("a[%d]------>%d\n",i,a[i]);
    }
}
//write a program to calculate sum of elements in array

#include<stdio.h>
int main()
{
    int i,a[5],sum=0,l;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter element in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("dispaly elements in array\n");
    for(i=0;i<l;i++){
        printf("a[%d]------->%d\n",i,a[i]);
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
}

//write a program to find max number in array

#include<stdio.h>
int main(){
    int i,a[5],l,max;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter elemnets in array\n");
    for(i=0;i<l;i++){
    scanf("%d",&a[i]);
    }
    printf("dispaly elemts in array\n");
    max=a[0];
    for(i=0;i<l;i++){
        printf("a[%d]----->%d\n",i,a[i]);
       if(max<a[i])
       max=a[i];
    }
    printf("%d is a max element\n",max);
}
//write a program to print minimum number in array
#include<stdio.h>
int main()
{
    int i,a[5],l,min;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("display array elements\n");
    min=a[0];
    for(i=0;i<l;i++)
    {
        printf("a[%d]----->%d\n",i,a[i]);
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("min is %d element\n",min);
}
//write a program to find even & odd number in array
#include<stdio.h>
int main()
{
    int a[5],i,l;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("display element in array\n");
    for(i=0;i<l;i++){
        printf("a[%d]--->%d\n",i,a[i]);
        if(a[i]%2==0)
        {
         printf("even number is %d\n",a[i]);
        }
        if(a[i]%2!=0){
            printf("odd number is %d\n",a[i]);
        }
    }
}
//write a program to print primme number from array
#include<stdio.h>
int main(){
    int i,l,a[10],count=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++){
    int j ,count=0;
    for(j=1;j<=a[i];j++)
    {
        //i=2;
        if(a[i]%j==0)
        {
          count++;
        }
    }
        if(count==2){
            printf("prime number%d\n",a[i]);
        }
    } 
}
//write a program to take array of size 5 store value in it and reverse array
#include<stdio.h>
    int main(){
    int i,a[5],l,start,mid,end;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter elemnents in array\n");
    for(i=0;i<l;i++){
    scanf("%d",&a[i]);
    }
    start=0;
    mid=l/2;
    end=l-1;
    for(start=0;start<mid;start++)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;
    }
    for(i=0;i<l;i++)
    {
        printf("a[%d]----->%d",i,a[i]);
    }
return 0;
}
//write a program to take 10 digit mobile number in array and replace some digit by special symbol
#include<stdio.h>

    int main(){
    int a[10],i,l;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++){
        if(i>=5){
            printf("#");
        }
        else{
        printf("%d",a[i]);
        }
    }
return 0;
}
//write a program to calculate sum of all array element
#include<stdio.h>
int main()
{
    int i,l,a[5],sum=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter element in array\n");
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("dispaly array elements\n");
    for(i=0;i<l;i++){
        printf("a[%d]---->%d\n",i,a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}

//write a program to enter element in array and find out the max and min elements 
#include<stdio.h>
int main()
{
    int i,l,a[5],max,min;
    l=sizeof(a)/sizeof(a[i]);
    printf("length=%d",l);
    printf("enter elements in array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("dispaly elemnts in array\n");
    max=a[0];
    min=a[0];
    for(i=0;i<l;i++)
    {
        printf("a[%d]---->%d",i,a[i]);
        if(max<=a[i]){
        max=a[i];
        }
        else if(min>=a[i]){
        min=a[i];
        }
    }
    printf("max=%d and min=%d\n",max,min);
}
//write a program to enter the five elements and display it ascending order
#include<stdio.h>
int main()
{
    int i,l,a[5],temp,j;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("display elemnts in array\n");
    for(i=0;i<l;i++){
    scanf("%d",&a[i]);
    }
    printf("display elemnets in array\n");
    temp=a[i];
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++){
        if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
      }
    }
    for(i=0;i<l;i++){
    printf("a[%d]---->%d",i,a[i]);
    }
}*/
//write a program to insert the elements on specified position in array
/*#include<stdio.h>
int main()
{
    int i,l,a[6],index,value;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter elments in array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("a[%d]---->%d",i,a[i]);
    }
        printf("enter value \n");
        scanf("%d",&value);
        printf("enter the index\n");
        scanf("%d",&index);
        for(i=4;i>=index;i--){
        a[i+1]=a[i];
        }
        a[index]=value;
        for(i=0;i<l;i++){
        printf("\na[%d]--->%d",i,a[i]);
    }    
}*/
//enter five element in array and reverse it
/*#include<stdio.h>
int main()
{
    int i,l,a[5],temp,start,end,mid;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d",l);
    printf("enter elements array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("a[%d]--->%d\n",i,a[i]);
    }
    start=0;
    mid=l/2;
    end=l-1;
    for(start=0;start<mid;start++){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;
    }
    for(i=0;i<l;i++){
    printf("a[%d]--->%d\n",i,a[i]);
    }
}
//write a program enter the 10 elements in array and print the occurrence of every element
#include<stdio.h>
int main(){
    int i,l,j,a[10],temp;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
    scanf("%d",&a[i]);
}
printf("dispaly array elements\n");
for(i=0;i<l;i++){
    printf("unsorted array=a[%d]---->%d\n",i,a[i]); 
}temp=a[i];
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++){
        if(a[i]>a[j]){
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
    }
}
}
for(i=0;i<l;i++){
    printf("sorated array=a[%d]----->%d\n",i,a[i]);
}
int count=1;
for(i=0;i<l;i++){
    for(j=i+1;j<l;j++)
     {
       if(a[i]==a[j])
       {
        count++;
       }
       else{
        break;
       }
    }
    printf("%d---->%d\n",a[i],count);
    i=j-1;
    count=1;
}
}
//write a program delete an element at desired position from an array.
#include<stdio.h>

    int main(){
    int i,a[5],value,index;
    printf("enter the elements in array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("original array=a[%d]----->%d\n",i,a[i]);
    }
    printf("enter index\n");
    scanf("%d",&index);
    for(i=index;i<=5;i++){
       a[i]=a[i+1];
    }
    
    for(i=0;i<4;i++){
    printf("after deleting array is %d\n",a[i]);
    }
return 0;
}

//write a program in c to find the second largest element in an array?
#include<stdio.h>

    int main(){
    int i,a[5],max,sec,j,temp;
    printf("enter elements in array\n");
    for(i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("a[%d]------>%d\n",i,a[i]);
        
    }
    temp=a[i];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
    }
    }
    }
    max=a[0];
    for(i=0;i<5;i++){
     if(max<a[i])
     sec=max;
     max=a[i];
    }
    printf("max=%d\n",a[i]);
return 0;
}/*
//write a program in c to find a pair with give sum in the array.
/*#include<stdio.h>
    int main(){
    int i,j,a[6],sum=0,start,end;
    printf("enter elements in array\n");
    for(i=0;i<6;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
    printf("a[%d]------->%d\n",i,a[i]);
    }
    printf("enter start\n");
    scanf("%d",&start);
    printf("enter end\n");
    scanf("%d",&end);
    end=6-1;
    printf("start=%d and end=%d",start,end);
    sum=a[start]+a[end];
    printf("sum=%d",sum);
return 0;
}/**/
//write a program in c find mejority elements
/*#include<stdio.h>
int main()
{
    int i,a[8],j,flag=0,temp,count=1;
    printf("enter elements in array\n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        printf("a[%d]------>%d\n",i,a[i]);
    }count=1;
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
           if(a[i]>a[j])
           {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           }
           }count=1;
    }       for(i=0;i<8;i++)
            {
           if(a[i]==a[i+1]){
             ++count;
             if(count>=(8/2)){
                flag=1;
                break;
             }
           }
           else{
            flag=0;
           }
        }
        if(flag){
            printf("it is mejority elament\n");
        }
        else{
            printf("it is not mejority elament\n");
        }  
}*/
//write a program to enter the 5 values in ascending order and strore in array and find out the missing element from array
/*#include<stdio.h>

    int main(){
    int i,l,a[5],temp,j;
    l=sizeof(a)/sizeof(a[0]);
    printf("length=%d\n",l);
    printf("enter elements in array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("a[%d]----->%d\n",i,a[i]);
    }
    temp=a[i];
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]>a[j]){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        } 
         
    }
    printf("a[%d]------>%d\n",i,a[i]);
    }
    for(i=0;i<l;i++){
        for(j=a[i]+1;j<a[i+1];j++)
        {
          printf("%d\n",j);
        }
    }
return 0;
}*/
//write a program to print smallest missing elements in array
/*#include<stdio.h>

    int main(){
    int i,j,a[5],c[5],k,temp,dif,min,count;
    printf("enter elements in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
    }
    printf("a[%d]---->%d\n",i,a[i]);
    }k=0;
    count=0;
    for(i=0;i<5;i++){
        dif=a[i+1]-a[i];
        if(dif>1){
        for(j=a[i]+1;j<a[i+1];j++)
        {   
            
            c[k]=j;
          printf("count=%d\n",c[k]);
          ++count;
          k++;
        }
    }
    }
    min=c[0];
    for(k=1;k<count;k++)
    {
        
        if(min>c[k])
        {
            min=c[k];
        }
    }
    printf("%d is smallest missing number\n",min);
return 0;
}
/*#include<stdio.h>

    int main(){
    int i,a[5],next,j;
    printf("enter elements in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        next=-1;
        for(j=i+1;j<5;j++){
            if(a[i]<a[j]){
            next=a[j];
            
            
        }
        
    }
    
    }
    printf("biggg=%d\n",next);
return 0;
}*/
/*\
#include<stdio.h>

    int main(){
    int i,a[5],j,count,temp;
    printf("enter elements in array\n");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }j=0;
    for(i=0;i<5;i++)
    {
        if(a[i]!=0){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
           for(i=0;i<5;i++){
            printf("count=%d\n",a[i]);
           }
return 0;
}
//write a program in c to find out the maximum diff between any two elements 
/*#include<stdio.h>

    int main(){
    int i,a[6],j,k,max,diff;
    printf("enter elements in array\n");
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(a[i]<a[j]){
            diff=a[j]-a[i];
                 printf("a[%d %d]=%d\n",a[i],a[j],diff);
            }
        }
        
    }
    // printf("max diff/////%d\n",diff);
        for(i=0;i<6;i++)
        {    diff=a[0];
            j=a[i]+1;
            j<a[i+1];
                diff=j;
                j++;
        
          printf("max diff%d\n",diff);
          break;
        }
        a[i]=a[j];
        printf("a[%d %d]=%d\n",a[i],a[i],diff);
        
       
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int i,a[10],j,diff=0,min_i,min_j,min_sum;
    printf("enter elements in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }min_i=0;
    min_j=1;
    min_sum=a[0]+a[1];
    for(i=0;i<10;i++){
        diff=0;
        for(j=i+1;j<10;j++){
           diff=a[i]+a[j];
           if(abs(min_sum)>abs(diff)){
              min_sum=diff;
              min_i=j;
              min_j=i;
           }
        }
    }
    printf("the pair of elements whose sum is min is [%d\t %d]",a[min_j],a[min_i]);
        
}*/
//q20
/*#include<stdio.h>
int main(){
    int i,a[]={5,3,10,9,6,13},l,j,next;
l=sizeof(a)/sizeof(a[0]);
for(i=0;i<l;i++){
    next=-1;
  for(j=i+1;j<l;j++){
    if(a[i]<a[j]){
        next=a[i];
        break;
    }
  }
    printf("the next bigger element of %d in array is %d\n",a[i],a[j]); 
}
}     */
/*#include<stdio.h>

    int main(){
    int a[]={1,3,3,5,4,3,2,3,3},i,j,l,c=1,o;
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<l;i++){
         //c=0;
           for(j=i+1;j<l;j++){
            if(a[i]=a[j]){
                 c++;             
            }
    }
           
    if(c>=(l/2)){
                 printf("%d appeares more than %d times in the given array\n",a[i],(l/2));
                 break;
    } 
    }                         
    return 0;
}
*/
/*24#include<stdio.h>

    int main(){
    int a[]={2,5,7,0,4,0,7,-5,0},i,j,l;
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<l;i++){
        if(a[i]!=0){
         printf("%d ",a[i]);
                //printf("%d ",a[i]);

       }
    }
    for(i=0;i<l;i++){
    if(a[i]==0){
        printf("%d ",a[i]);
    }
    }
return 0;
}*/
/*25#include<stdio.h>

    int main(){
    int a[]={1,9,6,4,5},i,l,j,c=0;
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<l;i++){
        
        for(j=i+1;j<l;j++){
           if(a[i]>a[j]){
            
            printf("inversions are=[%d %d]\n",a[i],a[j]);
            c++;
           }
          
        }
         
    }
    printf("the number of inversion can be formed from the array is %d\n",c);
return 0;
}*/
/*#include<stdio.h>

    int main(){
    int a[]={7,9,5,6,13,2},i,j,l,diff,max,a1,b1;
    l=sizeof(a)/sizeof(a[0]);
    max=a[1]-a[0];
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(a[i]<a[j])
            {
              diff=a[j]-a[i];
                printf("[%d %d]=%d\n",a[i],a[j],diff);
            }
            if(diff>max){
                max=diff;
                a1=i;
                b1=j;
            }
        }
    }
     printf("max difference in [%d %d] pair in array is %d\n",a[a1],a[b1],max);
return 0;
}
*/
/*26#include<stdio.h>

    int main(){
    int a[]={5,2,3,7,6,4,9,8},i,j,l,c,diff,x;
    l=sizeof(a)/sizeof(a[0]);
    printf("specific diff\n");
    scanf("%d",&x);
    c=0;
    for(i=0;i<l;i++) {
      for(j=i+1;j<l;j++){
        if(a[i]-a[j]==x||a[j]-a[i]==x){
            printf("[%d %d]\n",a[j],a[i]);
            c++;  
        }
    }     
} 
      printf("number of distinct pairs for difference %d are :%d",x,c);
return 0;
}
*/
/*#include<stdio.h>

    int main(){
    int a[]={2,3,3,5,4,1,3,7,7,7},i,j,l,c;
    l=sizeof(a)/sizeof(a[0]);
    c=0;
    for(i=0;i<l;i++){
        
        for(j=i+1;j<l;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
    }
    printf("the maximum repeating number is %d",c);
return 0;
}*/
/*29#include<stdio.h>
    int main(){
    int a[]={1,15,39,75,92},i,j,l,x,diff;
    printf("enter specific index\n");
    scanf("%d",&x);
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<l;i++){
        for(j=1+1;j<l;j++){
        if(a[i]<a[j]){
        
        if(a[j]-a[i]==x)
        printf("the pair are:[%d %d] difference is%d\n",a[i],a[j],x);
            }
        }
    }
return 0;
}*/
/*33#include<stdio.h>

    int main(){
    int a[]={0,3,3,3,0,0,7,7,0,9},i,j,l,diff,temp;
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<l;i++){
      int c=-1;
        for(j=i+1;j<l;j++){
           if(a[i]==a[j] || a[i]!=0){
             diff=a[i]+a[j];
           // printf("%d ",diff);
              printf("%d ",diff);
           }
           // printf("%d ",diff);
           }
  
        }
return 0;
}
*/
/*#include<stdio.h>

    int main(){
    int a[]={1,2,5,1,7,4,2},l,i,j,temp;
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<l;i++){
       int c=0;
        for(j=i+1;j<l;j++){
            if(a[i]!=a[j]){
            printf("%d ",a[i]);
            --c;
            break;
            }
        }
    }    

return 0;
}*/
//35
/*#include<stdio.h>

    int main(){
    int a[3][3],i,j,l;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
return 0;
}*/
#include<stdio.h>

    int main(){
    int a[2][2],b[2][2],c[2][2],j,i,l,sum=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in first array\n");
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }printf("enter elemnts in 2nd array\n");
        for(i=0;i<l;i++){
            for(j=0;j<l;j++){
             scanf("%d",&b[i][j]);
             }
         }
         for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
         }
         for(i=0;i<l;i++){
            for(j=0;j<l;j++){
              c[i][j]=a[i][j]+b[i][j];   
         }
         }
         for(i=0;i<l;i++){
            for(j=0;j<l;j++){
         printf("%d\t",c[i][j]);
            }
         printf("\n");
         }
return 0;
}
//substraction of 2d
/*#include<stdio.h>

    int main(){
    int a[2][2],b[2][2],c[2][2],i,j,l,sum=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("enter elemnts in 2nd array\n");
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            sum=0;
            for(int k=0;k<l;k++){
            /*c[i][j]=a[i][j]-b[i][j];multi logic *//*sum=sum+a[i][k] * b[k][j];
        }
        c[i][j]=sum;
    }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}*/
/*#include<stdio.h>

    int main(){
    int a[2][2],j,i,l,temp;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
           temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}*/
/*#include<stdio.h>

    int main(){
    int a[2][2],i,j,l;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter the elements in array\n");
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
        scanf("%d",&a[i][j]);
    }
    }int ld=0;
    int rd=0;
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
        if(i==j){
            ld=ld+a[i][j];
        }
        if(j==1-i){
            rd=rd+a[i][j];
        }
        }
    }
     printf("sum of left=%d ",ld);
     printf("sum of right=%d",ld);
return 0;
}*/
/*#include<stdio.h>
int main(){
    int a[6],i,j,l,sce;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++){
      for(j=i+1;j<l-1;j++){
        if(a[i]<a[j]){
            printf("number:%d celing is :%d floor is %d\n",i,a[j],a[i]);
            break;
        }
                    if(a[j]==a[j]){
                printf("number:%d celing is :%d floor is %d\n",i,a[j],a[j]);
                break;
            }
      }
    }
   /*for(i=0;i<l;i++){
      for(j=i+1;j<l-1;j++){

        }
      }
}*/