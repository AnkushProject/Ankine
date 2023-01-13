#pragma once

#ifdef ANKINE_PLATFORM_WINDOWS
	#ifdef ANKINE_BUILD_DLL
		#define	ANKINE_API __declspec(dllexport)
	#else
		#define	ANKINE_API __declspec(dllimport)
	#endif
#else
	#error Ankine only support Windows!
#endif

