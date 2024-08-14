#include <stdio.h>
// Driver's Code
int main(){
  int arr[] = { 12, 34, 1, 6, 40, 56, 10 };
  int n = sizeof(arr) / sizeof(arr[0]);
  // Using a last element as search element
  int i,key = 0; 
  // Function call
    for(i = 0; i<n;i++){
        if(arr[i]==key){
            printf("Element found at %d",i+1);
            break;
          
        }
      else printf("no input found");break;
    }
  return 0;
}
//linear search