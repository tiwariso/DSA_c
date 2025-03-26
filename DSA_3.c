#include <stdio.h>
int max = 10;
int stack[10];
int top=-1;
void Push(){
int x;
printf("\nPlease enter the element that you want to insert: ");
scanf("%d", &x);
if(top==max-1){
printf("\n the stack is full stack overflow \n");
}else {
top=top+1;
stack[top]=x;
}
}
void Pop(){
int x;
if(top==-1){
printf("\n the stack is empty stack underflow \n");
}else {
x=stack[top];
printf("\n poped element %d \n ",x);
top=top-1;
}
}
void Peek(){
int x;
if(top==-1){
printf("\n the stack is empty stack underflow \n");
}else {
x=stack[top];
printf("\n Top of the stack element %d \n ",x);
}
}
void Display(){
if(top==-1){
printf("\n the stack is empty stack underflow \n");
}else {
for(int i=top;i>=0;i--){
printf(" %d \n ",i);
}
}
}
void Search(){
int x;
printf("\nPlease enter the element that you want to insert: ");
scanf("%d", &x);
if(top==-1){
printf("\n the stack is empty stack underflow \n");
}else {
for(int i=top;i>=0;i--){
if(stack[i]==x){
printf("\n element %d is found on index %d\n ",x,i);
}
}
}
}
int main() {
int opt, n;
do{
printf("Menu driven program\n");
printf("1: Push\n");
printf("2: Pop\n");
printf("3: Peek\n");
printf("4: Display\n");
printf("5: Search\n");
printf("6: Exit\n");
printf("Please enter option: ");
scanf("%d", &opt);
switch (opt) {
case 1:
Push();
break;
case 2:
Pop();
break;
case 3:
Peek();
break;
case 4:
Display();
break;
case 5:
Search();
break;
default:
break;
}
}while(opt!=6);
return 0;
}