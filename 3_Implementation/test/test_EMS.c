#include "unity.h"
#include "record.h"
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

    char name[20];
    int rno;
    char fees;
    float days;
    float attend;

 
FILE *f = NULL;
FILE *r = NULL;
FILE *rt = NULL;

void check_openFile(void){
    TEST_ASSERT_EQUAL(SUCCESS,indexFile("INDEX.DAT","rb+",&f));
    TEST_ASSERT_EQUAL(SUCCESS,openFile("RECORD.DAT","rb+",&r)); 
}
void test_add(void){

    rno = 1;
    strcpy(name, "Harsha");
    fees = 30000;
    days = 60
    attend = 50
    
    

    start = add(start,rno,name,fees,days,attend);
    
    fseek(f,0,SEEK_END);
    fwrite(&rno,4,1,f);

    TEST_ASSERT_EQUAL(1,start->id);
    TEST_ASSERT_EQUAL_STRING("Harsha",start->name);
    TEST_ASSERT_EQUAL_STRING("60",start->days);
    TEST_ASSERT_EQUAL_STRING("50",start->attend);
}

}
void test_delete(void){
    TEST_ASSERT_EQUAL(SUCCESS, delete(start,rno));
}
void test_display(void){
    TEST_ASSERT_EQUAL(SUCCESS, display(start));

}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_add);

    //RUN_TEST(test_display);
    
    RUN_TEST(test_delete);


    /* Close the Unity Test Framework */
    return UNITY_END();
}