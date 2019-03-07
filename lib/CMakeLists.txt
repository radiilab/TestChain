# add incude directories

#include_directories(${CMAKE_SOURCE_DIR}/include)

# make the library of the base library blockchain
file(GLOB libr_SRCS
    "${CMAKE_SOURCE_DIR}/lib/*.cpp"
)
add_library(basechain STATIC ${libr_SRCS})
target_include_directories(basechain PUBLIC
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/TESTCHAIN>
)

install(TARGETS basechain 
      ARCHIVE DESTINATION lib
      LIBRARY DESTINATION lib
      )
