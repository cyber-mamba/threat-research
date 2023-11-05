# Windows Architecture

- There are two mode, **User Mode** and **Kernel Mode**.
- Applications run in the user mode.
- os components run in kernel mode.
- Applications can't execute tasks on its own, such as creating a file.
- The only entity that can complete the task is the kernel.

## Flow of calling function

| User Mode | Kernel Mode|
|-----------|------------|
| User Processes -> Subsystem DLLs -> NTDLL.DLL | -> Executive Kernel |
| Applications -> CreateFileW -> NtCreateFile | -> syscall |

1. User Processes - A program or application executed by the user such as Notepad, Word, Chrome.

2. Subsytem DLLs - DLLs that contain API functions that are called by user processes. For example, **kernel32.dll**, **ntdll.dll**, **advapi32.dll**, **user32.dll**.

3. Ntdll.dll - The lowest layer that is available in user mode. This is a special DLL that creates the transition from user mode to kernel mode. This is often called as "Native API" or "NTAPI".

4. Executive Kernel - This is the Windows Kernerl. The Windows kernel is partially stored in a file called **ntoskrnel.exe** under "C:\Windows\System32".

# Keywords

- User Mode
- Kernel Mode
- NativeAPI (Ntdll.dll or NTAPI)