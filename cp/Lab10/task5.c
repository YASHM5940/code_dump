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


void cal_sick_leaves(int *e1,int a,int *mode, double *avg)
{   
    double sum=0;
    for (int i = 0; i < a; i++)
    {
      sum=e1[i]+e1[i+1];
    }
    *avg=sum/6;

    int max_count=0;
    for (int j = 0; j < a; j++)
    {
      int count=0;
      for (int k = 0; k < a; k++)
      {
        
        if (e1[k]==e1[j])
        {
          count++;
        }
        
      } 
      if (count>=max_count)
        {
          max_count=count;
          *mode=e1[j];
        }  
      
    }
    
        
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


emp max_salary(emp *e1, emp *e2) 
{
  if ((*e1).salary>(*e2).salary)
  {
    return *e1;
  }
  else if ((*e1).salary<(*e2).salary)
  {
    return *e2;
  }
  else if ((*e1).salary==(*e2).salary)
  {
    if ((*e1).id>(*e2).id)
    {
      return *e1;
    }
    else
      return *e2;
    
  } 
}

int main()
{
  emp e1 = get_input();
  emp e2 = get_input();


  //UNCOMMENT this block if you want to test your code quickly with different values.
  //Keep in mind to COMMENT this block once you are done with testing, else test cases WILL NOT PASS.
  //Sample inputs are given. Change it to test different cases.
  //Note: If you are hardcoding values for testing, you need to comment out the get_input statements for e1 and e2
  //emp e1 = {1, 10000, "BITS_Pilani.", {1,2,3,1,2,1}};
  //emp e2 = {2, 20000, "Its_Magic.", {1,1,2,2,3,3}};
  
  //display(e1);
  //display(e2);

  
  emp max = max_salary(&e1, &e2);

  printf("ID of the employee with the highest salary is: %d\n", max.id);

  printf("This program supports TWO operations for the employee with the highest salary:\n");
  printf("\t1. Find the longest word in the employee's favorite quote,\n");
  printf("\t2. Find the number of sick leaves that appears the most (i.e. mode) and the average number of sick leaves taken.\n\n");
  printf("Choose an operation (1 or 2): ");
  int operation = 0;
  scanf("%d", &operation);

//   if(operation == 1)
//   {
//     longest_word(&max.fav_quote[0]);
//   }

  if(operation == 2)
  {
    int mode;
    double avg;
    cal_sick_leaves(&max.sick_leaves[0], 6, &mode, &avg);
    printf("The number of sick leaves appearing the most: %d\n", mode);
    printf("The average number of sick leaves: %.1lf\n", avg);
  }

  return 0;
  
}