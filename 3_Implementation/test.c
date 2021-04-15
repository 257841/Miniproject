#include "unity.h"
#include"unity_internals.h"
#include "online.h"
#define TEST_ASSERT_EQUAL(expected, actual) 

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_votesCount(void) 
{

  TEST_ASSERT_EQUAL(0, votesCount());
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_votesCount);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}