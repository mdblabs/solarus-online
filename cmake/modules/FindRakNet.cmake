# - Find RakNet
# Find the native RakNet includes and libraries
#
#  RAKNET_INCLUDE_DIR - where to find raknet headers, etc.
#  RAKNET_LIBRARIES   - List of libraries when using libRakNetLibStatic.
#  RAKNET_FOUND       - True if RakNet found.

find_library(RAKNET_LIBRARY NAMES RakNetLibStatic)

# Handle the QUIETLY and REQUIRED arguments and set MODPLUG_FOUND to TRUE if
# all listed variables are TRUE.
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(RAKNET DEFAULT_MSG
    RAKNET_LIBRARY)

if(RAKNET_FOUND)
  set(RAKNET_LIBRARIES ${RAKNET_LIBRARY})
else(RAKNET_FOUND)
  set(RAKNET_LIBRARIES)
endif(RAKNET_FOUND)

mark_as_advanced(RAKNET_LIBRARY)