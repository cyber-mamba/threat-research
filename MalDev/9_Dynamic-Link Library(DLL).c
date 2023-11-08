/*
Both .exe and .dll are portable executable formats.
However, DLL can't execute by being double clicked.
DLL are used to export functions such as CreateFileW. This function is exported from kernel32.dll.
ntdll.dll, kernel32.dll, kernelbase.dll, these are also DLL and export functions.
We need to load DLL into its address space.
*/


/* source code for creating dll */
// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


