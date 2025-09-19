#include <stdio.h>
int main() {
int arr[100], n, i, j, temp, choice;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Choose sorting order:\n1. Ascending\n2. Descending\n2.Enter choice: ") ;
scanf("%d", &choice);
for (i = 0; i < n - 1; i++) {
for (j = i + 1; j < n; j++) {
if ((choice == 1 && arr[i] > arr[j]) ||
(choice == 2 && arr[i] < arr[j])) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("\nSorted Array:\n");
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
return 0;
}
