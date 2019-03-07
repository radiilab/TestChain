# add incude directories

#include_directories(${CMAKE_SOURCE_DIR}/include)

# make the library of the base library blockchain
file(GLOB pat_SRCS
    "${CMAKE_SOURCE_DIR}/sources/*.cpp"
)
add_library(compChain STATIC ${pat_SRCS})
target_link_libraries(compChain PRIVATE
                                    basechain
                    )

install(TARGETS compChain 
      ARCHIVE DESTINATION lib
      LIBRARY DESTINATION lib
      )