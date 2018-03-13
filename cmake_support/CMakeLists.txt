set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/Install CACHE PATH "install here" FORCE)

add_executable(my_app main.cpp Foo.h)

install(TARGETS my_app DESTINATION deb CONFIGURATIONS Debug)
install(TARGETS my_app DESTINATION rel CONFIGURATIONS Release)
install(FILES Foo.h DESTINATION src)