# Raknet
MESSAGE("Buscamos Raknet...")

if(UNIX AND NOT APPLE)
	SET(LINUX TRUE)
endif()

MESSAGE("LINUX--->" ${LINUX})

if(LINUX)
	find_library(RAKNET
		NAMES RakNetStaticLib
		HINTS "${CMAKE_SOURCE_DIR}/libraries/linux/"
		)
	MESSAGE("RAKNET--->" ${RAKNET})
else()
	find_library(RAKNET
		NAMES RakNetStaticLib
		HINTS "${CMAKE_SOURCE_DIR}/libraries/macos/"
		)
	MESSAGE("RAKNET--->" ${RAKNET})
endif()

MESSAGE("RAKNET_FOUND--->" ${RAKNET_FOUND})
if(RAKNET_FOUND)
	set(RAKNET_LIBRARY ${RAKNET})
else(RAKNET_FOUND)
	set(RAKNET_LIBRARY)
endif(RAKNET_FOUND)

