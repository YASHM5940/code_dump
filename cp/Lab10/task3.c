#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct Employee
{
  int id;
  int salary;
  char fav_quote[50];
  int sick_leaves[6];
}emp;


void longest_word(char* s)
{ char longest[50];
  char word2[50]="";
  int word2_len=0;
  int i=0;
  while (i<strlen(s))
  {
    int j=0;
    char word1[50]="";
    int word1_len=0;
    while (s[i]!='_' && s[i]!='.')
    {
      word1[j]=s[i];
      i++;
      j++;
    }
    word1[j]='\0';
    word1_len=strlen(word1);

    if (word1_len>=word2_len)
    {
      strcpy(word2,word1);
      strcpy(longest,word1);
      word2_len=strlen(word2);
    }
    i++;
    
    
  }
  
  printf("The longest word is: %s\n", longest);
  
}


emp get_input()
{
  emp e;
  printf("Enter employee id:\n");
  scanf("%d", &e.id);
  printf("Enter employee's salary:\n");
  scanf("%d", &e.salary);
  printf("Enter Favorite Quote (each word is separated by '_' and the phrase ends with a '.'):\n");
  scanf("%s", e.fav_quote);
  printf("Enter sick leaves taken by an employee for each month during the first 6 months\n");
  for(int i = 0; i < 6; i++)
    scanf("%d", &e.sick_leaves[i]);

  return e;
}


//////////////////
///function to remove duplicate things from fav_quote

void remove_duplicates(char *s)
{
    int i=0;
    while (i<strlen(s))
    {
      int j=i+1;
      while (j<strlen(s))
      {
        if(s[j]==s[i])
        {
          s[j]='p';
          j++;
        }
      }
      i++;
      
      
    }


    
}

int main()
{
  emp e1 = get_input();
  
  longest_word(e1.fav_quote);
  remove_duplicates(e1.fav_quote);
  printf("Favorite Quote: %s\n", e1.fav_quote);
  // for(int j = 0; j < 6; j++)
  //     printf("Sick Leaves for Month %d: %d\n", j + 1, e1.sick_leaves[j]);
  return 0;
  
}