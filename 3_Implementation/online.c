/**
 * @file online.c
 * @author Manasa V Bhat(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
int count1 = 0, count2 = 0, count3 = 0, count4 = 0, false = 0;
/**
 * @brief variables to hold the number of counts each candidate has recieved.
 * 
 */

/**
 * @brief function to check valid voter id
 * 
 */
 int checkvoterid(int vid) 
 {
   if (vid%10!=0)
   {
   
     printf("***Invalid Voter id:SORRY YOU ARE NOT ALLOWED TO VOTE***\n");
   }
   
   else
   {
   
   printf("PROCEED WITH YOUR VOTING\n");
   }
   return 0;
 }
 /**
  * @brief Function to cast the vote
  * 
  */

void votecast() 
{
  int choice;
  printf("\n\n*CHOOSE THE CANDIDATE YOU WANT TO VOTE FOR THE PRESENT ELECTION *\n\n");
  printf("\n 1. %s", "Amish");
  printf("\n 2. %s", "Jennifer");
  printf("\n 3. %s", "Divya");
  printf("\n 4. %s", "Deepak");
  printf("\n 5. %s", "None of These");

  printf("\n\n Input your choice (1 - 4) : ");
  scanf("%d", &choice);
  /**
   * @brief Construct a new switch object
   * 
   */

  switch (choice) {
  case 1:
    count1++;
    break;
  case 2:
    count2++;
    break;
  case 3:
    count3++;
    break;
  case 4:
    count4++;
    break;
  case 5:
    false ++;
    break;
  default:
    printf("\n Error: Wrong Choice !! Please retry");

    getchar();
  }
  printf("\n THANK YOU FOR VOTING ");
}
/**
 * @brief  Function to display votes recieved by each candidate
 * 
 */

void votesCount() {
  printf("\n\n **VOTES POLLED FOR EACH CANDIDATE**");
  printf("\n %s - %d ", "Amish", count1);
  printf("\n %s - %d ", "Jennifer", count2);
  printf("\n %s - %d ", "Divya", count3);
  printf("\n %s - %d ", "Deepak", count4);
  printf("\n %s - %d ", "Spoiled Votes", false);
}
/**
 * @brief To display winner of the election
 * 
 */

void leader() {
  printf("\n\n  ***CANDIDATE LEADING THE ELECTION***\n\n");
  if (count1 > count2 && count1 > count3 && count1 > count4)
    printf("[%s]", "Amish");
  else if (count2 > count3 && count2 > count4 && count2 > count1)
    printf("[%s]", "Jennifer");
  else if (count3 > count4 && count3 > count2 && count3 > count1)
    printf("[%s]", "Divya");
  else if (count4 > count1 && count4 > count2 && count4 > count3)
    printf("[%s]", "Deepak");
  else
    printf("**RESULTS CANNOT BE DECLARED**");
}
/**
 * @brief Function  To get the total number of votes cast
 * 
 * @return int 
 */
int totalvotes(count1,count2,count3,count4)
{
 int  sum=count1+count2+count3+count4;
 return sum;
}
int multotal(count1,count2,count3,count4)
{
  int mul=count1*count2*count3*count4;
  return mul;
}

/**
 * @brief 
 * 
 * @return int 
 */

