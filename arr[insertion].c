#include<stdio.h>

void display(int arr[], int n)
{
    // Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}



int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity)
    return -1;
    for(int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index-1] = element;
    return 1;}
    
int main(){
int arr[100] = {7,9 ,8, 12, 27, 88};
int size = 6, element = 45, index=3;
display (arr, size);
indInsertion (arr, size, element, 100, index);
size +=1;
printf("\n==========================================\n");
display (arr, size);
return 0;
}