file(GLOB SRC CONFIGURE_DEPENDS 
"Src/*.cpp")

add_library(max17843 STATIC ${SRC})
target_include_directories(max17843 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Inc)

target_compile_options(max17843 PRIVATE
        -mcpu=cortex-m0plus
        -mthumb
        # -mfpu=fpv4-sp-d16

        -fdata-sections
        -ffunction-sections

        -Wall
        $<$<CONFIG:Debug>:-gdwarf-2>
)