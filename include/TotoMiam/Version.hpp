////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	This file is part of the TotoMiam library.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file 						TotoMiam/Version.hpp
///	@author 					Lucas Bremond <lucas@axelspace.com>
///	@date 						9 Oct 2016

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __TotoMiam_Version_HPP_INCLUDED__
#define __TotoMiam_Version_HPP_INCLUDED__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <SmingCore/SmingCore.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace TotoMiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Version
{

	public:

		uint					getMajor									( ) const ;
		uint					getMinor									( ) const ;
		uint					getPatch									( ) const ;

		String					getString									( ) const ;

		static Version 			Current										( ) ;

	private:

		uint					major_ ;
		uint					minor_ ;
		uint					patch_ ;

								Version										( ) ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////