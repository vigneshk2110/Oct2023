#include <stdio.h>

  // student structure having address structure inside
  struct student {
    char name[255];
    char id[20];
    
    // address of the student
    struct {
     char line1[255];
     char line2[255];
     char city[255];
     char state[100];
     char country[255];
     char pincode[20];
    } address;
  };


int main(void) {
 
  // create structure variable
  struct student std;
  
  // take student data
  printf("Enter student detail:\n");
  printf("Name: ");
  gets(std.name);
  printf("ID: ");
  gets(std.id);
  printf("Address Line1: ");
  gets(std.address.line1);
  printf("Address Line2: ");
  gets(std.address.line2);
  printf("City: ");
  gets(std.address.city);
  printf("State: ");
  gets(std.address.state);
  printf("Country: ");
  gets(std.address.country);
  printf("Pincode: ");
  scanf("%s", std.address.pincode);
  
  // display result
  printf("Student Detail:\n");
  printf("Name: %s\n", std.name);
  printf("ID: %s\n", std.id);
  printf("\nAddress of the student:\n");
  printf("%s\n", std.address.line1);
  printf("%s\n", std.address.line2);
  printf("%s, %s %s\n", std.address.city, std.address.state, std.address.country);
  printf("%s\n", std.address.pincode);
  
  return 0;
}