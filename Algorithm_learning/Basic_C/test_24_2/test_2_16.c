//演示字符从两端，向中间汇聚
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    char arr1[] = "welcome to bit..";
    char arr2[] = "################";
    int left = 0;
    int right = strlen(arr1)-1;
    printf("%s\n",arr2);
    while(left<=right)
    {
        Sleep(1000);
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        
        system("cls");
        left++;
        right--;
        printf("%s\n",arr2);
    }
    Sleep(1000);
    return 0;
}