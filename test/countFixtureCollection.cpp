#include "gtest/gtest.h"
#include "../TaskCollection.h"
#include "../TaskDisplayer.h"

class countFixtureCollection:public::testing::Test {
protected:
    void SetUp(){
        TaskList tl1("Lista 1");
        TaskList tl2("Lista 2");
        Task t1("t1",1,1,2000,12,12, true);
        Task t2("t2",2,1,2000,12,12, false);
        Task t3("t3",3,1,2000,12,12, true);
        Task t4("t3",3,1,2000,12,12, true);
        tl1.addActivity(t1);
        tl1.addActivity(t4);
        tl2.addActivity(t2);
        tl2.addActivity(t3);
        tc.addTaskList(tl1);
        tc.addTaskList(tl2);
    }
    TaskCollection tc;
};

TEST_F(countFixtureCollection,countTestCollection){
    ASSERT_EQ(3,tc.countAllCompleted());
    ASSERT_EQ(1,tc.countAllNotCompleted());
    TaskDisplayer td;
    td.displayTask(tc);
}

