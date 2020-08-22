if(IDF_VERSION_MAJOR GREATER_EQUAL 4)
    idf_component_register(SRC_DIRS src
        REQUIRES log driver
        INCLUDE_DIRS include)
else()
    set(COMPONENT_SRCDIRS src)
    set(COMPONENT_ADD_INCLUDEDIRS include)
    set(COMPONENT_REQUIRES log driver)
    register_component()
endif()
