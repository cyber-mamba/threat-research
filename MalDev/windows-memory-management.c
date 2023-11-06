# include <Windows.h>
# include <stdio.h>

int main() {

	PVOID pAddress = HeapAlloc(GetProcessHeap(), 0, 100);

	printf("[+] Base Address Of Allocated Memory : 0x%p \n, pAddress");

	printf("[#] Press <Enter> To Quit ... ");
	getchar();

	return 0;

}
