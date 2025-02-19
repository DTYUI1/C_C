#include <stdio.h>
#include <stdlib.h> // Для itoa
#include <limits.h>

unsigned bin(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;                       /* optional */
    return (k % 2) + 10 * bin(k / 2);
}

int main() {
    int n = 0;
    for (int i = 0; i < 8; i++){
        n = i;
        printf("%d\n", bin(n));
        printf("%u%u%u\n", bin(n) / 100, bin(n) / 10 % 10, bin(n) % 10);
    }
}


/*
// Tihkonov Iaroslav K0709-23/3
void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
  pinMode(12, OUTPUT);   
  pinMode(11, OUTPUT);   
}

unsigned bin(unsigned k) {
  if (k == 0) return 0;
  if (k == 1) return 1;                     
  return (k % 2) + 10 * bin(k / 2);
}

void loop() {
  int n = 0;
  for (int i = 0; i < 8; i++){
    n = bin(i);
    digitalWrite(13, n / 100);
    digitalWrite(12, n / 10 % 10);
    digitalWrite(11, n % 10);
    delay(2000); 
  }


}
*/