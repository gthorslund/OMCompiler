cmake_minimum_required (VERSION 2.8.6)

project(${EulerName})
# add the solver default implementation library
IF(RUNTIME_STATIC_LINKING)
	add_library(${EulerName} STATIC Euler.cpp EulerSettings.cpp FactoryExport.cpp )
	include_directories(${SUNDIALS_INCLUDE_DIR}/cvodes ${SUNDIALS_INCLUDE_DIR}/nvector  ${SUNDIALS_INCLUDE_DIR}/sundials ${SUNDIALS_INCLUDE_DIR})
ELSE(RUNTIME_STATIC_LINKING)
	add_library(${EulerName} SHARED Euler.cpp EulerSettings.cpp FactoryExport.cpp )
    add_precompiled_header(${EulerName} Include/Core/Modelica.h )
ENDIF(RUNTIME_STATIC_LINKING)
target_link_libraries (${EulerName} ${SolverName} ${Boost_LIBRARIES} ${LAPACK_LIBRARIES} )
#target_link_libraries( Euler ${Boost_serialization_LIBRARY})
#target_link_libraries( Euler ${Boost_LIBRARIES})
#target_link_libraries( Euler ${LAPACK_LIBRARIES})



install (TARGETS ${EulerName} DESTINATION ${LIBINSTALLEXT})
install (FILES "config/EulerSettings.xml"
  DESTINATION share/omc/runtime/cpp/config)





