#include <stdio.h>

int main() {
int n;
int arr[100];

scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

int left = 0, right = n - 1;
while (left < right) {
int temp = arr[left];
arr[left] = arr[right];
arr[right] = temp;
left++;
right--;
}

for (int i = 0; i < n; i++) {
printf("%d", arr[i]);
if (i < n - 1) printf(" ");
}
printf("\n");

return 0;
}

