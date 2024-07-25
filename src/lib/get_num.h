#ifndef GET_NUM_H
#define GET_NUM_H

#ifdef DLL_OUT_ENABLE
#define DLL_OUT __declspec(dllexport) __stdcall
#else
#define DLL_OUT __declspec(dllimport) __stdcall
#endif

#ifdef __cplusplus
extern "C" {
#endif

int DLL_OUT get_num();

#ifdef __cplusplus
}
#endif

#endif