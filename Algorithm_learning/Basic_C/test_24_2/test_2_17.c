// Binary Search (with duplicate handling)
#include <stdio.h>
#include <windows.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 7, 7, 8, 9, 10};
    int left = 0;//left pointers  0
    int right = sizeof(arr) / sizeof(arr[0]) - 1;//right pointers  11
    int key = 7;//search 7's index
    int find = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;//mid pointers
        if (arr[mid] == key)
        {
            find = 1;
            printf("Found at index %d\n", mid);

            // Search left for duplicates
            int i = mid - 1;
            while (i >= 0 && arr[i] == key)
            {
                printf("Found at index %d\n", i);
                i--;
            }

            // Search right for duplicates
            i = mid + 1;
            while (i < sizeof(arr) / sizeof(arr[0]) && arr[i] == key)
            {
                printf("Found at index %d\n", i);
                i++;
            }
            break;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (!find)
    {
        printf("Not found\n");
    }

    Sleep(1000);
    return 0;
}

