#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    print("Hello world\n");
    int n, num[], s;
    scanf("%d", &n);
    for (int i=0; i=0; i<n)   {
        scanf("%d", &num[i]);
    }
    scanf("Enter search value %d", &s);
    binary_search(num, 0, n, s);
}
