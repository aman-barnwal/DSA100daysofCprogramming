/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)
*/

#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);
    scanf("%d", &x);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

