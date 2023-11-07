/*Module 8 - PE Format*/

/*PE(Portable Executable) is such as .exe, .dll, .sys, .scr etc...*/

/*Structure of PE.*/

/*
Dos Header

Dos Stub

Nt Headers{
    Nt Signatures
    File Header
    Optional Header
}

Data Directories{
    
}

Sections{

}
*/


/*DOS Header(IMAGE_DOS_HEADER) is always prefixed with two bytes. 0x4D and 0x5A.
These two bytes are DOS header signature.
*/

/*DOS Stub which is an error message that prints "This program cannot be run in DOS mode" is loaded in DOS mode or Disk Operating Mode.*/


/*NT Header(IMAGE_NT_HEADERS)
This header's signature element is equal to the "PE" strring, which is represented cby the 0x50 and 0x45.
You can reach this header using the "e_lfanew" member, which represented as Offset to the NT header.
*/



/*Optional Header(IMAGE_OPTIONAL_HEADER
This is important although it's called "optional".
It contains DataDirectory, AddressOfEntryPoint etc...
*/
