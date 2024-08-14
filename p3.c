// name[i] 
// *( name + i ) 
// *( i + name ) 
// i[name] 
 #include<stdio.h>
int main(){
  int arr[]={1,2,3};
  int * p = arr;
  printf("%d",*(p));//value of arr[0]
  printf("%d",*(p+1));//value of arr[1]
  //array printing with address using pointers
  for(int i =0;i<3;i++)
  {
    printf("%d\t",*p);
    printf("%p\t\n",p);
    p++;
  }//change of address
  int i=3,*x; float j=1.5,*y; char k='c',*z ;
  printf("\n i=%d, j=%f, k=%c",i,j,k) ; 
  x = &i ; y = &j ; z = &k ; 
  printf("\n Addr of x,y,z = %u, %u, %u",x,y,z); 
  x++; y++; z++; 
  printf("\n New Addr of x,y,z = %u, %u, %u",x,y,z); 
  //changing value in array 
   int a[3]={1,2,3},*b,i;
b=a;
b[2] =0;//or *(b+2) =0 // 3 pt of an array
for(i=0;i<3;i++) {
printf("\n %d %d",i[a],i[b]);
}
}