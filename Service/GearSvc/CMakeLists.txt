
find_package(GEAR REQUIRED)

set(GearSvc_srcs
    src/GearSvc.cpp
)

gaudi_add_header_only_library(GearSvc)

gaudi_add_module(GearSvcPlugins
                 SOURCES ${GearSvc_srcs}
                 LINK GearSvc
                      Gaudi::GaudiKernel
                      ${GEAR_LIBRARIES}
)

install(TARGETS GearSvc GearSvcPlugins
  EXPORT CEPCSWTargets
  RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}" COMPONENT bin
  LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}" COMPONENT shlib
  COMPONENT dev)

