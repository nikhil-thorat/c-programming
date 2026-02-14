#include <stdio.h>

int count(){
  static int cnt = 0;
  return cnt++;
}
 
int main() {
  printf("Count is %d\n", count());
  printf("Count is %d\n", count());

  return 0;
}
