#define DLL_OUT_ENABLE
#include "get_num.h"
#include "Windows.h"
#include <atomic>

#pragma data_seg("Shared") 
std::atomic<int> g_num(1);
#pragma data_seg() 
#pragma comment(linker, "/section:Shared,rws")


int DLL_OUT get_num()
{
    g_num++;
    return g_num;
}

