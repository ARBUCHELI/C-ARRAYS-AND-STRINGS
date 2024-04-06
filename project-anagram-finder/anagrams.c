#include<stdio.h>
#include<string.h>
int main()
{
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  int flag = 0;

  for (int i = 0; i < strlen(s1); i++)
  {
    if(s1[i] == 'a')
    {
      counter1[0] += 1;
    }
    else if(s1[i] == 'b')
    {
      counter1[1] += 1;
    }
    else if(s1[i] == 'c')
    {
      counter1[2] += 1;
    }
    else if(s1[i] == 'd')
    {
      counter1[3] += 1;
    }
  }

  /*for (int i = 0; i < sizeof(counter1)/sizeof(int); i++)
  {
    printf("%i\n", counter1[i]);
  }
  printf("\n");
  printf("\n");*/

  for (int i = 0; i < strlen(s2); i++)
  {
    if(s2[i] == 'a')
    {
      counter2[0] += 1;
    }
    else if(s2[i] == 'b')
    {
      counter2[1] += 1;
    }
    else if(s2[i] == 'c')
    {
      counter2[2] += 1;
    }
    else if(s2[i] == 'd')
    {
      counter2[3] += 1;
    }
    else if(s2[i] == ' ')
    {
      counter2[0] = counter2[0];
      counter2[1] = counter2[1];
      counter2[2] = counter2[2];
      counter2[3] = counter2[3];
    }
  }

  /*for (int i = 0; i < sizeof(counter2)/sizeof(int); i++)
  {
    printf("%i\n", counter2[i]);
  }*/
  for (int i = 0; i < 4; i++)
  {
    if (counter1[i] != counter2[i])
    {
      flag = 1;
    }
  }
  if (flag == 0)
  {
    printf("Anagram!");
  }
  else
  {
    printf("Not Anagram!");
  }
}