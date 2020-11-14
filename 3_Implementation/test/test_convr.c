#include "unity.h"
#include "Bin_to_Dec.h"
#include "Bin_to_Oct.h"
#include "Bin_to_Hex.h"

#include "Dec_to_Bin.h"
#include "Dec_to_Oct.h"
#include "Dec_to_Hex.h"

#include "Oct_to_Bin.h"
#include "Oct_to_Dec.h"
#include "Oct_to_Hex.h"

#include "Hex_to_Bin.h"
#include "Hex_to_Dec.h"
#include "Hex_to_Oct.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

//binary
void test_Bin_to_Dec(void)
{
  TEST_ASSERT_EQUAL(31, Bin_to_Dec(1010));
}
void test_Bin_to_Oct(void)
{
  TEST_ASSERT_EQUAL(0, Bin_to_Oct(1010));
}
void test_Bin_to_Hex(void)
{
  TEST_ASSERT_EQUAL(0, Bin_to_Hex(1010));
}
//decimal
void test_Dec_to_Bin(void)
{
  TEST_ASSERT_EQUAL(1, Dec_to_Bin(8));
}
void test_Dec_to_Oct(void)
{
  TEST_ASSERT_EQUAL(1, Dec_to_Oct(8));
}
void test_Dec_to_Hex(void)
{
  TEST_ASSERT_EQUAL(1, Dec_to_Hex(8));
}
//octal
void test_Oct_to_Bin(void)
{
  TEST_ASSERT_EQUAL(0, Oct_to_Bin(6));
}
void test_Oct_to_Dec(void)
{
  TEST_ASSERT_EQUAL(30, Oct_to_Dec(6));
}
void test_Oct_to_Hex(void)
{
  TEST_ASSERT_EQUAL(0, Oct_to_Hex(6));
}
//hexa
//void test_Hex_to_Bin(void)
//{
  //TEST_ASSERT_EQUAL_STRING('B', Hex_to_Bin('B'));
//}
//void test_Hex_to_Dec(void)
//{
 // TEST_ASSERT_EQUAL(11, Hex_to_Dec('B'));
//}
//void test_Hex_to_Oct(void)
//{
//  TEST_ASSERT_EQUAL(13, Hex_to_Oct('B'));
//}



int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Bin_to_Dec);
  RUN_TEST(test_Bin_to_Oct);
  RUN_TEST(test_Bin_to_Hex);

  RUN_TEST(test_Dec_to_Bin);
  RUN_TEST(test_Dec_to_Oct);
  RUN_TEST(test_Dec_to_Hex);

  RUN_TEST(test_Oct_to_Bin);
  RUN_TEST(test_Oct_to_Dec);
  RUN_TEST(test_Oct_to_Hex);

  //RUN_TEST(test_Hex_to_Bin);
  //RUN_TEST(test_Hex_to_Dec);
  //RUN_TEST(test_Hex_to_Oct);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
