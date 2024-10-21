#include<stdio.h>
int main()
{
    int ar[10],s,k,flag=1,count=1;
    printf("enter the no of elements in that array:");
    scanf("%d",&s);
    printf("enter the elements:");
    for(int i=1;i<=s;i++){
        scanf("%d",&ar[i]);
        count++;
    }
    printf("enter the number you want to search:");
    scanf("%d",&k);
    for(int i=0;i<=s;i++){count++;
        if(ar[i]==k){
            printf("the element found at %d position\n",i);
        }
        else{
            flag++;
        }
    }
    if(flag>s)
    {count++;
        printf("element not found\n");
        printf("time complexity:%d",count);
    }
    
    return 0;
}