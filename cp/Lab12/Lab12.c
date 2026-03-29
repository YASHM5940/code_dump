//Have the correct header files. Enter as many you want.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>



/**
 * Definition of Struct Employee and Organization.
 * Do NOT change.
*/
typedef struct Employee
{
    char fname[50];
    int prod;
}emp;

typedef struct Organization
{
    emp **e;
    int num;
}org;



/**
 * @brief Dynamically allocates the required memory for the organization.
 * 
 * Takes in the number of employees as the parameter. 'num' is a positive integer. 
 * Returns the pointer to the organization.
 * 
 * Set the 'num' field of the organization as the value of the function parameter.
 * Allocate 'e' field as the starting address of an array that holds the pointers to each individual employee.
 * 
 * Refer to the image in the Lab 12 folder. 
 * Remember the addresses in the image are for understanding purpose only.
 * The actual addresses will vary.
 * 
 * Refering to the image, 
 * - The number of employees 'num' is 3.
 * - This function would allocate memory for the organization in the heap starting at 0x50 
 * - 'e' points to the array of 3 pointers, which is 0x1000. 
 * - Each index in this array will point to the each of the 3 employees. 
*/
org* allocate_memory(int num)
{
    org* o= malloc(sizeof(org));
    //creates a pointer to struct organisation to store num
    o->num=num;//assigns num of organisation to num

    o->e= malloc((num)*(sizeof(emp *)));
    //creates pointer to array of emp type pointers
    
    // for (int z = 0; z < num; z++)
    // {
        
    // }
    
    //TODO
    
    return o;
}

/**
 * @brief Takes inputs from the user.
 * 
 * Requires: Employee names contains only upper case and lower case characters. No spaces or digits or special characters.
 * Assume that the length of all entered names are <= 49 (that is, no invalid input will be provided)
 * 
 * This function first allocates the memory on the heap for an employee.
 * Then takes the employee's name and productivity as input.
 * 
 * Refereing to the image in the Lab12 folder, 
 * - Space will be allocated on the heap for the first employee.
 * - Assume that the starting addrees of the allocated space is 0x2000.
 * - Save that address as the value of the first index of the array of pointers to the employees created in the allocate_memory()
 * - Similarly, the second index will store 0x3000 for the second employee and the third index stores 0x4000 which points to the third employee.
 * - The first employee's name is "Arnab" and the productivity is 50. Similarly the others.
*/
void get_input(org *o)
{
    for(int i = 0; i < o->num; i++)
    {
        printf("number of emp in get_input=%d\n",o->num );
        //TODO: allocate memory for an employee and store the starting address in the respective index of the array created in the allocate_memory() 
        o->e[i]=malloc(sizeof(emp));

        printf("Enter name and productivity:\n");
        
        //TODO: Complete the 2 scanf statements to take the name and productivity as input.
        scanf("%s",o->e[i]->fname);
        // getchar(); //TODO;
        scanf("%d",&(o->e[i]->prod)); //TODO
        printf("input take\n");
        printf("emp name is %s , productivity is %d\n", o->e[i]->fname, o->e[i]->prod);
    }
}

/**
 * @brief Returns the index of the employee with the highest productivity. 
 * If more than one employee has the same highest productivity, then return the larger index.
 * 
 * Assume that the employee index start from 0 in the array of pointers each poinitng to an employee.
 * 
 * Examples: 
 *      e[0]->prod = 50
 *      e[1]->prod = 100
 *      e[2]->prod = 80
 *          Return index = 1
 * 
 *      e[0]->prod = 50
 *      e[1]->prod = 100
 *      e[2]->prod = 100
 *          Return index = 2
 */
int highest_prod(org *o)
{
  int maxIndex = -1;
  int most_productive = o->e[0]->prod;
  maxIndex = 0;
  //TODO
  for (int j = 0; j < o->num; j++)
  {
    
        if (o->e[j]->prod >=most_productive)
        {
           most_productive= o->e[j]->prod;
           maxIndex=j;

        }
        
    
    
  }
  

  return maxIndex;
}

/**
 * @brief Returns the index of the employee with the longest name after 
 * rearranging the corresponding index's fname's alphabets in alphabetical order.
 *  
 * If there are multiple employee's names with the same longest length, 
 * then arrange the name present at the lower index. Return the index.
 * 
 * While arranging the characters of a name in alphabetical order (a-z),
 * for the same character, upper case should come alphabetically earlier than the lower case.
 * 
 * The index of the array containing the pointers to the employees start from zero 
 *      
 * Examples: 
 *      e[0]->fname = "abBA"
 *      e[1]->fname = "abc"
 *      e[2]->fname = "aBBa"
 *          index = 0
 *          e[0]->fname = "AaBb"
 * 
 *      e[0]->fname = "abB"
 *      e[1]->fname = "abc"
 *      e[2]->fname = "aBBa"
 *          index = 2
 *          e[2]->fname = "aaBB"
*/
int longest_name_alphabetically(org *o)
{
    int maxIndex = -1;
    int long_name_len = strlen(o->e[0]->fname);
  maxIndex = 0;
  //TODO
  for (int k = 0; k < o->num; k++)
  {
    
        if (strlen(o->e[k]->fname) >=long_name_len)
        {
           long_name_len= strlen(o->e[k]->fname);
           maxIndex=k;
           
        }    
  }
  //we got the index and string. how to make string alphabetcal?
  char longest_name[strlen(o->e[maxIndex]->fname)];
  strcpy(longest_name,o->e[maxIndex]->fname);

  for (int i = 0; i < strlen(longest_name); i++)
  {
    for (int j = i+1; j <strlen(longest_name) ; j++)
    {
        char a=longest_name[i];
        char b=longest_name[j];
        int is_a_lower=(a>='a' && a<='z');
        int is_b_lower=(b>='a' && b<='z');
        int a_value=(is_a_lower?a-'a':a-'A');
        int b_value=(is_b_lower?b-'a':b-'A');

        if ((a_value==b_value? is_a_lower: a_value)>b_value)
        {
            char temp=longest_name[i];
            longest_name[i]=longest_name[j];
            longest_name[j]=temp;
            printf("%s\n", longest_name);
        }
        

    }
    
  }

 strcpy(o->e[maxIndex]->fname, longest_name);
  

  
    //TODO

    return maxIndex;
}


/**
 * The driver function of the code. Do not modify it.
*/
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    org* o = allocate_memory(n);

    get_input(o);

    printf("This program supports TWO operations:\n");
    printf("\t1. Print the employee's name with the highest productivity,\n");
    printf("\t2. Print all characters of the longest name in alphabetical order.\n\n");
    printf("Choose an operation (1 or 2): ");
    int operation = 0;
    scanf("%d", &operation);

    if(operation == 1)
    {
        int index = highest_prod(o);
        printf("The employee with the highest productivity is %s\n", o->e[index]->fname);
    }

    else if(operation == 2)
    {
        int index = longest_name_alphabetically(o);
        printf("The characters in the longest employee's name in alphabetical order are %s\n", o->e[index]->fname);
    }

  return 0;
}