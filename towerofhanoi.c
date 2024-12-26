#include <stdio.h>

void toh(int n,char s ,char aux, char des){
    if (n==1){
    printf("move disk 1 from %c to%c\n",s,des);
    return;

    }
    toh(n-1,s,des,aux);
    printf("move disk %d from %c to %c\n",n,s,des);
    toh(n-1,aux,des,s);


}
int main(){
    int n;
    printf("Enter the Numer of Disk = ");
    scanf("%d",&n); 
    printf("the sequence of moves to solve the tower of hanoi for %d disks is \n",n);
    toh(n,'A','C','B');
    return 0 ;
}

