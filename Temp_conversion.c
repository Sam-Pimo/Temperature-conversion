#include<stdio.h>
int main(){
/*This converts Fahrenheit to celsius and displays the values in a somewhat tabular form.
The program is inflexible but I'm working on it.*/

  float fahrenheit, celsius;
  int first = 0;
  int last = 400;
  int step = 20;
  fahrenheit = first;

  printf("Fahr Celsius\n");
  while(fahrenheit <= last){
    celsius = (5.0/9.0) * (fahrenheit - 32);
    printf("%3.0f %6.1f\n", fahrenheit, celsius); //adding width to the output.
    fahrenheit = fahrenheit + step;
  }
  return 0;
}
