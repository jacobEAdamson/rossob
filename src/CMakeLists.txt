include_directories ("${PROJECT_SOURCE_DIR}/src")

add_executable(main TutorialApplication.cpp TutorialApplication.h BaseApplication.cpp BaseApplication.h)

set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)

find_package(Boost 1.47.0 REQUIRED)
if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
	target_link_libraries(main ${Boost_LIBRARIES})
endif(Boost_FOUND)

find_package(OIS REQUIRED)
if(OIS_FOUND)
	include_directories(${OIS_INCLUDE_DIRS})
	target_link_libraries (main ${OIS_LIBRARIES})
endif (OIS_FOUND)

find_package(OGRE REQUIRED)
if(OGRE_FOUND)
	include_directories(${OGRE_INCLUDE_DIRS})
	target_link_libraries (main ${OGRE_LIBRARIES})
endif (OGRE_FOUND)

