#pragma once

#ifdef CT_PLATFORM_WINDOWS
	#ifdef CT_BUILD_DLL
		#define COBALT_API __declspec(dllexport)
	#else
		#define COBALT_API __declspec(dllimport)
	#endif
#endif