#include <stdio.h>
int A[10];
int N;
int create(int N) {
for (int i = 0; i < N; i++) {
scanf("%d", &A[i]);
}
return 0;
}
void printarr() {
for (int i = 0; i < N; i++) {
printf("%d\t", A[i]);
}
printf("\n");
}
void insertelement() {
int ele;
int pos;
// Get the element and position from the user
printf("Enter element you want to insert: ");
scanf("%d", &ele);
printf("Enter index at which you want to insert (0 to %d): ", N);
scanf("%d", &pos);
// Validate position
if (pos < 0 || pos > N) {
printf("Invalid position.\n");
return;
}
// Shift elements to the right to make space for the new element
for (int i = N; i > pos; i--) {
A[i] = A[i - 1];
}
// Insert the new element
A[pos] = ele;
N++;
// Print the array
printf("Updated array: ");

NAME:- Siddharth Tiwari Batch:-C-3
Roll.no:- 42 Practical_1
for (int i = 0; i < N; i++) {
printf("%d\t", A[i]);
}
printf("\n");
}
void delete_element() {
int pos;
printf("Enter index at which you want to delete (0 to %d): ", N);
scanf("%d", &pos);
// Validate position
if (pos < 0 || pos >= N) {
printf("Invalid position.\n");
return;
}
// Shift elements to the left to remove the element
for (int i = pos; i < N - 1; i++) {
A[i] = A[i + 1];
}
N--;
// Print the array
printf("Updated array: ");
for (int i = 0; i < N; i++) {
printf("%d\t", A[i]);
}
printf("\n");
}
void arrSort() {
int i, j, temp;
int swapped;
for (i = 0; i < N - 1; i++) {
swapped = 0;
for (j = 0; j < N - i - 1; j++) {
if (A[j] > A[j + 1]) {
temp = A[j];
A[j] = A[j + 1];
A[j + 1] = temp;
swapped = 1;
}
}
// If no two elements were swapped by inner loop, then break
if (swapped == 0)

NAME:- Siddharth Tiwari Batch:-C-3
Roll.no:- 42 Practical_1
break;
}
// Print the sorted array
printf("Sorted array: ");
for (i = 0; i < N; i++) {
printf("%d\t", A[i]);
}
printf("\n");
}
void searchElement() {
int ele, found = 0;
printf("Enter the element to search: ");
scanf("%d", &ele);
for (int i = 0; i < N; i++) {
if (A[i] == ele) {
printf("Element found at index %d\n", i);
found = 1;
break;
}
}
if (!found) {
printf("Element not found.\n");
}
}
int main() {
int opt;
printf("Menu driven program\n");
printf("1: Create an array\n");
printf("2: Traverse\n");
printf("3: Insert element in specific position\n");
printf("4: Delete element\n");
printf("5: Sort array\n");
printf("6: Search element\n");
printf("7: End\n");
while (opt != 7) {
printf("\nPlease enter option: ");
scanf("%d", &opt);
switch (opt) {
case 1:

NAME:- Siddharth Tiwari Batch:-C-3
Roll.no:- 42 Practical_1
printf("Enter number of elements you want to enter: ");
scanf("%d", &N);
create(N);
break;
case 2:
printarr();
break;
case 3:
insertelement();
break;
case 4:
delete_element();
break;
case 5:
arrSort();
break;
case 6:
searchElement();
break;
case 7:
printf("Exiting the program.\n");
return 0;
default:
printf("Invalid option. Please try again.\n");
break;
}
}
return 0;
}