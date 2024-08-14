#include<stdio.h>
#include<stdbool.h>
//goes for large no. of enteries(condition-sorted arr.)
//fatest process for finding an element 



int main()
{
    int n,i;
    bool flag = false;
    printf("size:");
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        printf("%d element=",i+1 );
        scanf("%d",&arr[i]);
    }
     for( i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
     for(i=0;i<=n-1;i++)
         for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int t = arr[i];
                arr[i]=arr[j];
                arr[j]= t;
            }
         }
     }printf("\nnew array\n===================\n");
     for( i=0;i<n;i++)printf("%d \t",arr[i]);
  int low = 0,element;printf("\nelement to be searched=\n");scanf("%d",&element);
  int high = n-1;
  while(low<=high){
    int mid= (low+high)/2;
    if(arr[mid]==element)printf("\nelement %d found at %d",element,mid+1);
    if(arr[mid]<element)low = mid+1;
    else high = mid-1;}
  printf("\nnot found");
  printf("\nfuckin over\n----------------");
  return 0;
}