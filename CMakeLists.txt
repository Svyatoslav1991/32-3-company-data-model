# CMakeList.txt : CMake project for 32-3-company-data-model, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("32-3-company-data-model")

find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS enterprise.proto)


# Add source to this project's executable.
add_executable (32-3-company-data-model "main.cpp" ${PROTO_SRCS} ${PROTO_HDRS})

target_include_directories(enterprise_info PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(enterprise_info PRIVATE ${PROTOBUF_LIBRARIES})
target_link_libraries(enterprise_info gRPC::grpc++ gRPC::grpc++_reflection)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 32-3-company-data-model PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
