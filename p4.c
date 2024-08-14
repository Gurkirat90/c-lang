void AreaPeri(int r, float *A, float *P){
*A = 3.14*r*r;  *P = 2*3.14*r;
}
int main( ){
int r;  float A,P;
printf("\nEnter radius: " );
  scanf("%d",&r);
AreaPeri(r,&A,&P);
  printf("Area = %f, Peri = %f",A,P);
}