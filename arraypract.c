/*#include<stdio.h>
int main(){
    int a[5],l,max;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array");
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("max element is");
    max=a[0];
    for(int i=0;i<l;i++){
    if(a[i]>max){
    max=a[i];
   }
    }
    printf(" max value is %d",max);
}*/
/*#include<stdio.h>
int main(){
    int a[5],l,skey,flag=0;
    l=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array");
    for(int i=0;i<l;i++){
     scanf("%d",&a[i]);
    }
    printf("enter search key");
    scanf("%d",&skey);
    for(int i=0;i<l;i++){
        if(skey==a[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("value found");
    }
    else{
        printf("value not found");
    }
}*/
/*#include<stdio.h>
int main(){
    int a[5],len,r,l=0,m,skey,flag=0;
    len=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array");
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    printf("enter skey");
    scanf("%d",&skey);
    r=len-1;
    while(l<=r){
        m=l+(r-l)/2;
        if(a[m]==skey){
        flag=1;
        break;
        }
        if(a[m]<skey){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    if(flag==1){
        printf("value found");
    }
    else{
        printf("value not found");
    }
}*/
/*#include<stdio.h>
int main(){
    int a[5],len,temp;
    len=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array");
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("assending order");
    for(int i=0;i<len;i++){
        printf("%d\n",a[i]);
    }

}*/
/*#include<stdio.h>
int main(){
    int a[5],len,start,mid,end,temp;
    len=sizeof(a)/sizeof(a[0]);
    printf("enter elements in array");
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    start=0;
    mid=len/2;
    end=len-1;
    for(start=0;start<mid;start++){
      temp=a[start];
      a[start]=a[end];
      a[end]=temp;
      end--;
    }
    printf("reverse array\n");
    for(int i=0;i<len;i++){
        printf("%d\n",a[i]);
    }

}

*/
/*#include<stdio.h>
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
}*/
#include<stdio.h>
int main(){
    int queue[6],rear=-1,front=-1,max,ch,value;
    max=sizeof(queue)/sizeof(queue[0]);
    printf("1.Insrtion");
    printf("2.Deletion");
    printf("3.Display");
    printf("Exit");
    do{
    printf("enter choise\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    
    printf("enter elements in queue");
    scanf("%d",&value);
    if(rear==-1&&front==-1){
    front=0;
    rear=0;
    queue[rear]=value;
    }
    else if((rear+1)%max==front){
        printf("queue is overflow");
    }
   
    else{
        rear=(rear+1)%max;
        queue[rear]=value;
    }
     break;
    default:
        break;
    }
    }while(ch<5);
}