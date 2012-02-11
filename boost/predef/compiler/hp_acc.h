/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_HP_ACC_H
#define BOOST_PREDEF_COMPILER_HP_ACC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_HPACC`]

HP aC++ compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_HPACC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__HP_aCC)
    #undef BOOST_CXX_HPACC
    #if (__HP_aCC > 1)
        #define BOOST_CXX_HPACC BOOST_PREDEF_MAKE_NN_NN_NN(__HP_aCC)
    #else
        #define BOOST_CXX_HPACC BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_HPACC,"HP aC++")

#endif