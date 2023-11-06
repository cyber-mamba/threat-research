// allocate new address

# include <Windows.h>
# include <stdio.h>

int main() {

	PVOID pAddress = HeapAlloc(GetProcessHeap(), 0, 100);

	printf("[+] Base Address Of Allocated Memory : 0x%p \n, pAddress");

	printf("[#] Press <Enter> To Quit ... ");
	getchar();

	return 0;

}

// copy strings and allocate new address

#include <Windows.h>
#include <stdio.h>

int main() {
	PVOID pAddress = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 100);
	CHAR* cString = "MalDev Academy Is The Best";

	memcpy(pAddress, cString, strlen(cString)); // mov pAddress, cString
	printf("[+] Address Of cString : 0x%p \n", cString);

	printf("[+] Base Address Of Allocated Memory : 0x%p \n", pAddress);
	printf("[+] Address Of cString : 0x%p \n", cString);

	printf("[#] Press <Enter> To Quit ... ");
	getchar();

	return 0;
}


// heapfree

#include <Windows.h>
#include <stdio.h>

int main() {
	PVOID pAddress = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 100);

	CHAR* cString = "MalDev Academy Is The Best";
	memcpy(pAddress, cString, strlen(cString)); // mov pAddress, cString

	printf("[+] Base Address Of Allocated Memory : 0x%p \n", pAddress); // still allocated memory address.

	HeapFree(GetProcessHeap(), 0, pAddress); // address is free!

	return 0;
}
