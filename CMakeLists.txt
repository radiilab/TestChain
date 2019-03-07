#this is the loader for the buildsystem


cmake_minimum_required (VERSION 2.8)
project (LearnChain)
#-----------------------
# add the c++ compiler flags
set(CMAKE_CXX_FLAGS_DEBUG "-std=c++11")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-std=c++11")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-std=c++11")
set(CMAKE_CXX_FLAGS_RELEASE "-std=c++11")
#----------------------------
# add versioning information
#--------------------------------


  set (TestChain_VERSION_MAJOR "0")
  set (TestChain_VERSION_MINOR "003")
  set (TestChain_VERSION_PATCH "10")

  # configure a header file to pass some of the CMake settings
# to the source cod
configure_file (
  "${PROJECT_SOURCE_DIR}/ProjectConfig.h.in"
  "${PROJECT_BINARY_DIR}/ProjectConfig.h"
  )

#add subdirectory s
add_subdirectory(lib)
add_subdirectory(sources)
add_subdirectory(tests)
#add library creation codes

# create the executables and link to libraries in lib

#the versioning of the release tools that the system is to provide 
set(CPACK_PACKAGE_VERSION_MAJOR ${TestChain_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${TestChain_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${TestChain_VERSION_PATCH})
set(LIB_VERSION_STRING ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})
set_target_properties(${PROGRAM_NAME} PROPERTIES VERSION ${LIB_VERSION_STRING})
set (CPACK_RESOURCE_FILE_LICENSE  
     "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_CONTACT "Support on ReasonAI contact Radii Corporation")


set(CPACK_GENERATOR "DEB")
include (CPack)