In this module, we will discuss one of the simplest ways to execute shellcode via the creation of a new thread.
Although this technique is simple, it's crucial to understand how it works as it lays the groundwork for more advanced shellcode execution methods.
The method discussed in this module utilizes **VirtualAlloc**, **VirtualProtect** and **CreateThread** Windows APIs.

It's important to note that this method is by no measn a stealthy technique and EDRs will almost certainly detect this simple shellcode execution technique.
On the other hand, antiviruses can potentially be bypassed using this method with sufficient obfuscation.

[VirtualAlloc](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualalloc)
[VirtualProtect](https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualprotect)
[CreateThread](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread)

## Obfuscating Payload
The deobfuscated payload bytes are copied into the newly allocated memory region at **pShellcodeAddress** and then clean up **pDeobfuscatedPayload** by overwriting it with 0s.
**pDeobfuscatedPayload** is the base address of a heap allocated by the **UuidDeobfuscation** function which returns the raw shellcode bytes.
It has been overridden with zeroes since it is not required anymore and therefore this will reduce the possibility of security solutions finding thd payload in memory.

