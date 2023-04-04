#include<stdio.h>
int main(void)
{
        int arr[] = {4, 0, 1, 0, 2, 4, 8};
        int s_arr = sizeof(arr) / sizeof(*arr);
        for (int i = 0; i < s_arr - 1; ++i) {
                for (int j = 0; j < s_arr - i - 1; ++j) {
                        if ((arr[j] == 0) && (arr[j + 1] != 0)) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
        for (int i = 0; i < s_arr; ++i) {
                printf("%d ", arr[i]);
    }
    return 0;
}
