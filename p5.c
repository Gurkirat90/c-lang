//array vs *p
int main( ){
char A[] = "Hello", B[10] ;
char *C = "Good Morning", *D;
//B = A ; /* error */
D = C ; /* Okay */
printf("%s",D);
} 
// cannot assign array to array, but can assign pointer to pointer 
