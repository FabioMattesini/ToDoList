#include "gtest/gtest.h"
#include "../TaskList.h"

class countFixture:public::testing::Test{
protected:
    void SetUp(){
        Task t1("t1",1,1,2000,12,12, true);
        Task t2("t2",2,1,2000,12,12, false);
        Task t3("t3",3,1,2000,12,12, true);
        list.addActivity(t1);
        list.addActivity(t2);
        list.addActivity(t3);
    }
    TaskList list;
};


TEST_F(countFixture,counTest){
ASSERT_EQ(2,list.countCompleted());
ASSERT_EQ(1,list.countNotCompleted());
}