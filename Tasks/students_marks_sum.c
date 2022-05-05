#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//boys=0,2,4,....
//girls=1,3,5,....

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum=0;
    int number_of_start=0;
    if (gender=='b') {
        number_of_start=0;
    }
    else {
        number_of_start=1;
    }

    int number_for_repeat;
    if(number_of_students%2 == 0){
        number_for_repeat = number_of_students/2;
    }
    else{
        number_for_repeat = (number_of_students/2)+1;
    }

  for (int i=0; i<number_for_repeat; i++,number_of_start=number_of_start+2) {
      sum=sum+marks[number_of_start];
  }
  
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}