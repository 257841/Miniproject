/**
 * @file multionline.c
 * @author Manasa V Bhat (https://github.com/257841/Miniproject.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "online.h"
#include <stdlib.h>
#include<stdio.h>
typedef struct candidate {
  char *name;
  int id;
} cand;
/**
 * @brief 
 * 
 * @return int 
 */
int main() 
{
  /**
   * @brief dynamic memory allocation and pointer usage
   * 
   */
  cand *a1=(cand*)malloc(sizeof(cand));
  a1->name="Amish";
  a1->id=123456;
  cand *a2=(cand*)malloc(sizeof(cand));
  a2->name="Jennifer";
  a2->id=123458;
  cand *a3=(cand*)malloc(sizeof(cand));
  a3->name="Divya";
  a3->id=123345;
  cand *a4=(cand*)malloc(sizeof(cand));
  a1->name="Deepak";
  a1->id=123378;
  printf("CANDIDATE 1:\nName-%s\nID-%d\n",a1->name,a1->id);
  printf("CANDIDATE 2:\nName-%s\nID-%d\n",a2->name,a2->id);
  printf("CANDIDATE 3:\nName-%s\nID-%d\n",a3->name,a3->id);
  printf("CANDIDATE 4:\nName-%s\nID-%d\n",a4->name,a4->id);
  int vid;
  printf("PLEASE ENTER YOUR 10 DIGIT VOTER ID:  \n");
  scanf("%d",&vid);
 checkvoterid(vid);
  int i;
  int choice;
  /**
   * @brief 
   * 
   */
   if(vid%10==0)
   {

  do {
    
    printf("\n\n ***WELCOME TO THE ELECTION***");
    printf("\n\n 1. Cast your Vote");
    printf("\n 2. Find votes polled by each candidate");
    printf("\n 3. Find who leads the election");
    printf("\n 0. Exit");
    

    printf("\n\n Please enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      votecast();
      break;
    case 2:
      votesCount();
      break;
    case 3:
      leader();
      break;
    default:
      printf("\n SORRY:INVALID CHOICE");
    }
  } 
while (choice != 0);
getchar();
   }

   free(a1);
   free(a2);
   free(a3);
   free(a4);
return 0;
}
