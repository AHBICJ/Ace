#pragma once

#ifdef ACE_PLATFORM_WINDOWS
#ifdef ACE_BUILD_DLL
#define ACE_API __declspec(dllexport)
#else
#define ACE_API __declspec(dllimport)
#endif // ACE_BUILD_DLL
#else
#error windows only now!

#endif // ACE_PLATFORM_WINDOWS
