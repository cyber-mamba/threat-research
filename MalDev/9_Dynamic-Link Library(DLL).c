/*
Both .exe and .dll are portable executable formats.
However, DLL can't execute by being double clicked.
DLL are used to export functions such as CreateFileW. This function is exported from kernel32.dll.
ntdll.dll, kernel32.dll, kernelbase.dll, these are also DLL and export functions.
We need to load DLL into its address space.
*/

/*
Why use DLLs?




*/
