#include <stdio.h>
#include <malloc.h>

int* solution(int arr[], int arr_len);
void main() {
    int* ans;
    int arr[4] = { 1, 2, 3, 4 };
    ans = solution(arr, 4);
    for (int i = 0; i < 4; i++) {
        printf("%3d", ans[i]);
    }
}

int* solution(int arr[], int arr_len){
    int left = 0;
    int right = arr_len - 1;

        while (left<right) {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left += 1;
            right -= 1;
        }
    return arr;
}
