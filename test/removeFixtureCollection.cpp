#include "gtest/gtest.h"
#include "../TaskCollection.h"
#include "../TaskDisplayer.h"

class removeFixtureCollection:public::testing::Test {
protected:
    void SetUp(){
        TaskList tl1("Lista 1");
        TaskList tl2("Lista 2");
        tc.addTaskList(tl1);
        tc.addTaskList(tl2);
    }
    TaskCollection tc;
};

TEST_F(removeFixtureCollection,countTestCollection){
    ASSERT_THROW(tc.removeTaskList(0),std::out_of_range);
    ASSERT_NO_THROW(tc.removeTaskList(2));
    ASSERT_NO_THROW(tc.removeTaskList(1));
    ASSERT_THROW(tc.removeTaskList(1),std::out_of_range);
    TaskDisplayer td;
    td.displayTask(tc);
}

