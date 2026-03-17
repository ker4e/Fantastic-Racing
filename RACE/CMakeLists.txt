# CMakeList.txt: проект CMake для RACE; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.10)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("RACE")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(RaceLib SHARED
"Transport.cpp" 
"Ground/GroundTransport.cpp" 
"Air/AirTransport.cpp" 
"Ground/Camel.cpp" 
"Ground/FastCamel.cpp" 
"Ground/Centaur.cpp" 
"Ground/AllTerrainBoots.cpp" 
"Air/MagicCarpet.cpp" 
"Air/Eagle.cpp" 
"Air/Broom.cpp" 
"RaceType/MainRace.cpp" 
"RaceType/GroundRace.cpp" 
"RaceType/AirRace.cpp" 
"RaceType/MixedRace.cpp"
"TransportArr.cpp"
)

target_include_directories(RaceLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Ground
    ${CMAKE_CURRENT_SOURCE_DIR}/Air
    ${CMAKE_CURRENT_SOURCE_DIR}/RaceType
)

target_compile_definitions(RaceLib PRIVATE RACE_LIB_EXPORTS)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (RACE "RACE.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET RACE PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

target_link_libraries(RACE RaceLib)