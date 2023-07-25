#pragma once

#ifdef HZ_PLATFORM_WINDOWS
#ifdef HZ_BUILD_DLL
#define GAMEENGINE_API __declspec(dllexport)
#else
#define GAMEENGINE_API __declspec(dllimport)	
#endif
#else
#error GameEngine only support windows!
#endif