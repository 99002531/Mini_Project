#include "unity.h"
#include "canteen.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_prime_number(void)
{
    TEST_ASSERT_EQUAL(6, start(6));
    TEST_ASSERT_EQUAL(5, start(4));
    TEST_ASSERT_EQUAL(1,start(1));
}

int main(void)
{
    //Initiating the unity framework
    UNITY_BEGIN();
    RUN_TEST(testing_prime_number);
    RUN_TEST(testing_forlarge_prime_number);
    return UNITY_END();
}
