
create_test_sourcelist (Tests
    maintest.cpp
    Test1Insert.cpp
    Test2Constr.cpp
    Test3ConstrDef.cpp
    Test4Delete.cpp
    Test5Empty.cpp
    #Tst6Terminate.cpp
)

add_executable(runtest ${Tests})

include_directories(../src/)

set(TestsToRun ${Tests})
remove(TestsToRun maintest.cpp)

foreach(test ${TestsToRun})
    get_filename_component(TName ${test} NAME_WE)

    add_test(NAME ${TName} COMMAND maintst ${TName})
endforeach()
