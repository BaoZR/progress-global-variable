#include "lib/get_num.h"
#include <iostream>
#include <windows.h>

int	(*p_get_num)	();


int main(){

    HMODULE dll_handle = LoadLibraryW(L"get_num.dll");
    p_get_num = (int(*)())GetProcAddress(dll_handle, "get_num");

    int num = p_get_num();
    printf("The number is %d\n", num);
    system("pause");

    int ret = FreeLibrary(dll_handle);
    printf("FreeLibrary ret: %d\n", ret);
    return 0;
}