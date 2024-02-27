//将一个整型数组，并将其内容重置为-1，使用函数实现
#include <stdio.h>
//reset array
void set_arr(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        arr[i] = -1;
    }
}
//print array
void print_arr(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    print_arr(arr,sz);
    set_arr(arr,sz);//Implement reset array to -1
    print_arr(arr,sz);//print array contents
    return 0;
}
