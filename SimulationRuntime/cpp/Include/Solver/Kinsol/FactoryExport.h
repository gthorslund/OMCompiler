#pragma once
/** @defgroup solverKinsol Solver.Kinsol
 *  Kinsol class wrapper from sundials package
 *  @{
 */
#if defined(__vxworks) || defined(__TRICORE__)

#define BOOST_EXTENSION_SOLVER_DECL
#define BOOST_EXTENSION_SOLVERSETTINGS_DECL

#elif defined(OMC_BUILD) || defined(SIMSTER_BUILD)

#define BOOST_EXTENSION_SOLVER_DECL BOOST_EXTENSION_IMPORT_DECL
#define BOOST_EXTENSION_SOLVERSETTINGS_DECL BOOST_EXTENSION_IMPORT_DECL

#else
    error "operating system not supported"
#endif
/** @} */ // end of solverKinsol