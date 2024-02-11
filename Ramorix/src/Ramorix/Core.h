#pragma once

#ifdef RMX_PLATFORM_WINDOWS
	#ifdef RMX_BUILD_DLL
		#define RMX_API __declspec(dllexport)
	#else
		#define RMX_API __declspec(dllimport)
	#endif
#else
#error Ramorix only supports Windows for now !
#endif