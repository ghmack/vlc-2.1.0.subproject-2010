// access_output_shout.h : main header file for the access_output_shout DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Caccess_output_shoutApp
// See access_output_shout.cpp for the implementation of this class
//

class Caccess_output_shoutApp : public CWinApp
{
public:
	Caccess_output_shoutApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
