#include "unity.h"
#include "test_conversions_systems.h"
void setUp()
{       }
void tearDown()
{        }

void test_Binary_to_Decimal(void)
{
     TEST_ASSERT_EQUAL(10,Binary_to_Decimal(1010));
}
void test_Decimal_to_Binary(void)
{
    TEST_ASSERT_EQUAL(0001,Decimal_to_Binary(1));
}
 int test_main(void)
{
 UNITY_BEGIN();
RUN_TEST(test_Binary_to_Decimal);
RUN_TEST(test_Decimal_to_Binary);
return UNITY_END();
}
