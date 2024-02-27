#include <stdio.h>
//defined function
int Add(int x,int y)//return value;function name;formal params
{
    //int z = 0;
    //z = x + y;
    //return z;
    return x + y;//can return expression
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int r = Add(a,b);//call function;a,b is actual params
    printf("%d\n",r);
    return 0;
}