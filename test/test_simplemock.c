#include "unity.h"
#include "simplemock.h"
#include "mock_multiplydivide.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_simplemock(void)
{   
    int result;
    
    multiply_ExpectAndReturn(2,3,6);
    divide_ExpectAndReturn(10,5,2);
    result = addmultiplyAndDivide(2,3,10,5);
    TEST_ASSERT_EQUAL(8,result);
}
