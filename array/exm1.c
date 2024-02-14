#include <stdio.h>
void demo(int age1, int age2) {
  printf("%d\n", age1);
  printf("%d\n", age2);
}

int main() {
  int ageArray[] = {2, 8, 4, 12};

  // pass second and third elements to display()
  demo(ageArray[3], ageArray[2]); 
  return 0;
}

