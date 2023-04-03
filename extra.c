#include <stdio.h>
void summation(int *x,int *y, int *z)
{
    int result= *x + *y;
    *z= result;
}
void product(int *x,int *y, int *z)
{
    int result= *x * (*y);
    *z= result;
}
void diff(int *x, int *y, int *z)
{
    int result= *x - *y;
    *z= result;
}

int main()
{
    int a=10, b=20,c=0;
    int *M=&a,*N=&b;
    int *L=&c;
    summation(M,N,L);
    printf("The sum of the a and b is %d\n",*L);
    product(M,N,L);
    printf("The product of the a and b is %d\n",*L);
    diff(M,N,L);
    printf("The difference of the a and b is %d\n",*L);
    return 0;
}
