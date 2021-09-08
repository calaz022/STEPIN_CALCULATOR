#include "unity.h"
#include "feature.h"
#include <math.h>

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_square(void);
void test_squareroot(void);


void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_square);
  RUN_TEST(test_squareroot);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_add(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a_i));
    TEST_ASSERT_EQUAL(30,a_i.output);  

    a_i.input_1=2*3+5;
    a_i.input_2=8/2-1;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a_i));
    TEST_ASSERT_EQUAL(14,a_i.output);

    a_i.input_1=9223372036854775807;
    a_i.input_2=-2;
    TEST_ASSERT_EQUAL(SUCCESS, add(&a_i));
    TEST_ASSERT_EQUAL((9223372036854775805),a_i.output);
}

void test_subtract(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a_i));
    TEST_ASSERT_EQUAL(10,a_i.output); 

    a_i.input_1=20/2+1;
    a_i.input_2=10*1;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a_i));
    TEST_ASSERT_EQUAL(1,a_i.output); 

    a_i.input_1=9223372036854775807;
    a_i.input_2=2;
    TEST_ASSERT_EQUAL(SUCCESS, subtract(&a_i));
    TEST_ASSERT_EQUAL(9223372036854775805,a_i.output); 
}

void test_multiply(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a_i));
    TEST_ASSERT_EQUAL(200,a_i.output); 

    a_i.input_1=2+6/2;
    a_i.input_2=0;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a_i));
    TEST_ASSERT_EQUAL(0,a_i.output); 

    a_i.input_1=999999;
    a_i.input_2=123456;
    TEST_ASSERT_EQUAL(SUCCESS, multiply(&a_i));
    TEST_ASSERT_EQUAL(123455876544,a_i.output); 
}
void test_divide(void) {
    a_i.input_1=20;
    a_i.input_2=10;
    TEST_ASSERT_EQUAL(SUCCESS, division(&a_i));
    TEST_ASSERT_EQUAL(2,a_i.output); 

/* we are making output as '0' when input_2 is '0' */
    a_i.input_1=20;
    a_i.input_2=0;
    TEST_ASSERT_EQUAL(ERROR_DIVISION_BY_ZERO, division(&a_i));
    TEST_ASSERT_EQUAL(0,a_i.output); 

    a_i.input_1=9223372036854775806;
    a_i.input_2=2;
    TEST_ASSERT_EQUAL(SUCCESS, division(&a_i));
    TEST_ASSERT_EQUAL(4611686018427387903,a_i.output); 
}
void test_square(void){
    a_i.input_1=2;
    
    TEST_ASSERT_EQUAL(SUCCESS, square(&a_i));
    TEST_ASSERT_EQUAL(4,a_i.output); 

    a_i.input_1=15;
    TEST_ASSERT_EQUAL(SUCCESS, power(&a_i));
    TEST_ASSERT_EQUAL(225,a_i.output);
}
void test_squareroot(void){
    s_i.input_3=9;
    TEST_ASSERT_EQUAL(SUCCESS,square_root(&s_i));
    TEST_ASSERT_EQUAL(3,s_i.output_2); 

    s_i.input_3=9223372036854775805;
    TEST_ASSERT_EQUAL(SUCCESS,square_root(&s_i));
    TEST_ASSERT_EQUAL(3037000448,s_i.output_2);
}
