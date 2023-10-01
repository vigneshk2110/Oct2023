#include <stdio.h>

// creating a student structure template
struct student {
  char firstname[64];
  char lastname[64];
  char id[64];
  int score;
};
  
// function declaration
void displayDetail(struct student std);

int main(void) {
  int n = 2;
  // creating a student structure array variable
  struct student stdArr[n];
  
  // other variables
  int i;
  
  // taking user input
  for (i = 0; i < n; i++) {
    printf("Enter detail of student #%d\n", (i+1));

    printf("Enter First Name: ");
    scanf("%s", stdArr[i].firstname);
  
    printf("Enter Last Name: ");
    scanf("%s", stdArr[i].lastname);
  
    printf("Enter ID: ");
    scanf("%s", stdArr[i].id);
  
    printf("Enter Score: ");
    scanf("%d", &stdArr[i].score);
  }
  
  // output
  for (i = 0; i < n; i++) {
    printf("\nStudent #%d Detail:\n", (i+1));
    displayDetail(stdArr[i]);
  }
  
  return 0;
}

void displayDetail(struct student std) {
  printf("Firstname: %s\n", std.firstname);
  printf("Lastname: %s\n", std.lastname);
  printf("ID: %s\n", std.id);
  printf("Score: %d\n", std.score);
}