#include "../unity/unity.h"
#include "../sanke.h"

void test_input(void);
void test_setup(void);
void test_logic(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_input);
  RUN_TEST(test_setup);
  RUN_TEST(test_logic);
  
  //RUN_TEST(test_addrecords);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_input(void)
{
   
   
    TEST_ASSERT_EQUAL(1, input(2,3));
    
    TEST_ASSERT_EQUAL(1, input(4,5));
    
    TEST_ASSERT_EQUAL(1, input(1,7));
   
}
void test_setup(void)
{
   
    TEST_ASSERT_EQUAL(1, setup(1,5,4,1,5,8,4,9));
    
    TEST_ASSERT_EQUAL(1, setup(9,2,6,4,7,5,2,1));
    
    TEST_ASSERT_EQUAL(1, setup(4,6,7,2,6,8,2,4));
   
}
void test_logic(void)
{
   
    TEST_ASSERT_EQUAL(1, logic(2,4,6,5,1,3,8,3,1));
    TEST_ASSERT_EQUAL(1, logic(5,5,7,3,7,8,6,2,3));
     TEST_ASSERT_EQUAL(1, logic(1,4,4,2,6,9,1,8,4));
}

/*void test_searchrecords(void)
{
    char smartcardnumber[20]="KHY123456";
    TEST_ASSERT_EQUAL("KHY123456", smartcardnumber);
   
}

void test_addrecords(void)
{
    char smartcardnumber[20]="KHY123456";

    char name[20]="SOOGURESH";

    char amount [20]="1000";

 TEST_ASSERT_EQUAL("KHY123456",smartcardnumber);
 TEST_ASSERT_EQUAL("SOOGURESH", name);
 TEST_ASSERT_EQUAL("1000", amount);
   
}
*/
