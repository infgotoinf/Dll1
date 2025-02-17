#pragma once

#ifdef FIBMATH_EXPORTS
#define FIBMATH_API __declspec(dllexport)
#else
#define FIBMATH_API __declspec(dllimport)
#endif

extern "C" FIBMATH_API void fibonacci_init(
	unsigned long long a,
	unsigned long long b
);

extern "C" FIBMATH_API bool fibonacci_next();

extern "C" FIBMATH_API unsigned long long fibonacci_current();

extern "C" FIBMATH_API unsigned fibonacci_index();

