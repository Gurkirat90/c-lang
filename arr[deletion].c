#include<stdio.h>

void display(int arr[], int n)
{
    // Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}



int indInsertion(int arr[], int size, int index){

    for(int i =index-1; i<size; i++)
    {
        arr[i] = arr[i+1];
    }

    return 1;}

int main(){
int arr[100] = {7,9 ,8, 12, 27, 88};
int size = 6, index;
display (arr, size);
  printf("\nchoose the index to be deleted = ");
  scanf("%d",&index);
indInsertion (arr, size, index);
size -=1;
printf("==========================================\n");
display (arr, size);
return 0;
}