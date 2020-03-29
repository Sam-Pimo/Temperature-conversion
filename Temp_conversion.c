#include<stdio.h>
int main(){
/*This converts Fahrenheit to celsius and displays the values in a somewhat tabular form.
The program is inflexible but I'm working on it.*/
  
  //Fahrenheit-Celsius Table

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
  
  //Celsius-Fahrenheit Table
  int fahrenheit;
  printf("Celsius Fahr\n");
  for(int fahrenheit = 0; fahrenheit <= 400; fahrenheit = fahrenheit + 20){
    printf("%6.1f %3d\n", (5.0/9.0) * (fahrenheit - 32), fahrenheit );
  }
  return 0;
}
