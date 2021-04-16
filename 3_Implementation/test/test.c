/**
 * @file test.c
 * @author MANASA V BHAT (https://github.com/257841/Miniproject.git)
 * @brief UNIT TESTING
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include"unity_internals.h"
#include "online.h"


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
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_add()
{
    TEST_ASSERT_EQUAL(totalvotes(5,4,3,5),17);
}
void test_mul()
{
    TEST_ASSERT_EQUAL(totalvotes(5,4,3,10),600);
}




int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_add);
    RUN_TEST(test_mul);
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}