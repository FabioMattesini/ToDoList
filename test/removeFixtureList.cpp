#include "gtest/gtest.h"
#include "../TaskList.h"

class removeFixture:public::testing::Test{
protected:
    void SetUp(){
        Task t1("t1",1,1,2000,12,12);
        Task t2("t2",2,1,2000,12,12);
        list.addActivity(t1);
        list.addActivity(t2);
    }
    TaskList list;
};

TEST_F(removeFixture,removeTestList){
    ASSERT_NO_THROW(list.removeActivity(1));
    ASSERT_THROW(list.removeActivity(2),std::out_of_range);
}

