# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_usb_camera_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED usb_camera_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(usb_camera_FOUND FALSE)
  elseif(NOT usb_camera_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(usb_camera_FOUND FALSE)
  endif()
  return()
endif()
set(_usb_camera_CONFIG_INCLUDED TRUE)

# output package information
if(NOT usb_camera_FIND_QUIETLY)
  message(STATUS "Found usb_camera: 0.0.0 (${usb_camera_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'usb_camera' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${usb_camera_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(usb_camera_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${usb_camera_DIR}/${_extra}")
endforeach()
