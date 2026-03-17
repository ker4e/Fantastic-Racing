#ifndef RACE_API_H
#define RACE_API_H

#ifdef RACE_LIB_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif

#endif