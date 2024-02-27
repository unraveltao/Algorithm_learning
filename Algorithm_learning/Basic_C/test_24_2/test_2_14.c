#include <stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("&arr[%d]=%p\n",i,&arr[i]);//遍历数组，去的数组地址
    }
    printf("%d\n",sizeof(arr));//计算单位字节 4*10
    printf("%d\n",sizeof(arr[0]));//4
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",sz);
    return 0;
}