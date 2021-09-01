#include<stdio.h> // define the header file   
void fibo(int n)
{
    int a = 0, b=1;
    int c;
    int l = n-2;
    printf("%d %d ",a,b);
    while(l){
        c = a+b;
        l = l-1;
        printf("%d ",c);
        a = b;
        b = c;
        }
}
int main(){
    int a;
    printf("Enter the length of Fibonacci series needed: ");
    scanf("%d",&a);
    if (a>0)
    {
    printf("Here is your fibonacci series of length %d : \n",a);
    fibo(a);
    }
}

