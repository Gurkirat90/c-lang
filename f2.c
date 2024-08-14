#include<stdio.h>
void india();
void eng();
void aus();
int main()
{
  india() ;
  return 0;
  }
void india(){
  printf("hello 1 \t");
  aus();
  return;
}

void aus(){
  printf("hello 2 \t");
  eng();
  return;

}
void eng(){printf("hello 3");
  return;

}

