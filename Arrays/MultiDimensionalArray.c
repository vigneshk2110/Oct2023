#include <stdio.h>
int main(void)
{
  //variable
  int
    scoreboard[2][3][2],
    player, match, year;
    
  //user input
  printf("---------- INPUT ----------\n\n");
  for (year = 0; year < 2; year++) {
    printf("---------- Year #%d ----------\n", (year + 1));
    for (player = 0; player < 2; player++) {
      printf("Enter score of Player #%d\n", (player + 1));
      for (match = 0; match < 3; match++) {
        printf("Match #%d: ", (match + 1));
        scanf("%d", &scoreboard[player][match][year]);
      }
    }
  }
  
  //output
  printf("\n\n---------- OUTPUT ----------\n\n");
  for (year = 0; year < 2; year++) {
    printf("---------- Scoreboard of Year #%d ----------\n", (year + 1));
    for (player = 0; player < 2; player++) {
      printf("----- Player #%d -----\n", (player + 1));
      for (match = 0; match < 3; match++) {
        printf("Match #%d: %d\n", (match + 1), scoreboard[player][match][year]);
      }
    }
  }
  
  printf("End of code\n");
  return 0;
}