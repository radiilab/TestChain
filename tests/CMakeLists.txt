#add the executables and link them to the target libraries

#include the class header linkage structure
include_directories(${CMAKE_SOURCE_DIR}/sources)
#-----------------------------------

set(M_TEST ${CMAKE_CURRENT_SOURCE_DIR}/initTest_Chain.cc)

add_executable(testchain ${M_TEST})
target_link_libraries(testchain PUBLIC compChain) # also adds the required include path
install (TARGETS testchain RUNTIME DESTINATION bin)