#include <stdio.h>

int bonus[2][3] = {
  1, 2, 3,
  4, 5, 6
};

int bonus1[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};

int bonus2[2][3] = {
  {1, 2},
  {3}
};


/*
The above code will create 
the bonus array having 2 rows and 3 columns 
and we will get the following initialisation.

int bonus[2][3] = {
  {1, 2, 0},
  {3, 0, 0}
};
*/

int bonus3[2][3] = {
  {0},
  {0}
};

/*
So, the above code will give us the following result.

int bonus[2][3] = {
  {0, 0, 0},
  {0, 0, 0}
};
*/

#include <stdio.h>
int main(void)
{

    int n1 = 2;
    int n2 = 3;
  //variable
  int
    score[n1][n2],
    r, c;

  //user input
  for (r = 0; r < n1; r++) {
    printf("Enter 3 scores of Player #%d: ", (r + 1));
    for (c = 0; c < n2; c++) {
      scanf("%d", &score[r][c]);
    }
  }
  
  //output
  printf("You have entered the following:\n");
  for (r = 0; r < n1; r++) {
    printf("---------- Score of Player #%d ----------\n", (r + 1));
    for (c = 0; c < n2; c++) {
      printf("Match #%d\tScore: %d\n", (c + 1), score[r][c]);
    }
  }
  
  printf("End of code\n");
  return 0;
}