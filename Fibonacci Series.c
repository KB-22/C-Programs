#include<stdio.h>

int fun(int n)
{
if(n==1)
   return 0;
else if(n==2 || n==3)
  return 1;
else
 return fun(n-1)+fun(n-1);

}

int main (){
    
    int limit , count;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&limit);

    for (count =1; count <= limit; count++){
        printf("%d ",fun(count));
    }
    return 0;
}