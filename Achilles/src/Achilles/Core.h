#pragma once
#ifdef AC_PLATFORM_WINDOWS
	#ifdef AC_BUILD_DLL
		#define ACHILLES_API __declspec(dllexport)
	#else 	
		#define ACHILLES_API __declspec(dllimport)
	#endif 
#else
	#error Achilles only support windows
#endif
