# Raknet
MESSAGE("Buscamos Rakneti...")

if(UNIX AND NOT APPLE)
	SET(LINUX TRUE)
endif()

if(LINUX)
	find_library(RAKNET
		NAMES RakNetStaticLib
		HINTS "${CMAKE_SOURCE_DIR}/libraries/linux/"
		)
else()
	find_library(RAKNET
		NAMES RakNetStaticLib
		HINTS "${CMAKE_SOURCE_DIR}/libraries/macos/"
		)
endif()

if(RAKNET_FOUND)
	set(RAKNET_LIBRARY ${RAKNET})
else(RAKNET_FOUND)
	set(RAKNET_LIBRARY)
endif(RAKNET_FOUND)

