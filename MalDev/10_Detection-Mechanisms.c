// How to detect malware with security software.

// Static/Signature Detection

/* 
This method is checking bytes in code. ex) FC 48 83 E4 F0

We can bypass this signature detection by avoiding hardcording.
Can bypass by dinamically retrieving or calculates the values.
*/

/*
Hashing Detection

Compare hash value of file and security vender's database.
If value is same, it detects.
To bypass, change at least 1 bytes.
*/

/* 
Heuristic Detection
	
	Static Heuristic Analysis
		-Decompile suspicious program and compare code snippets to known malware that are already known and are in the heuristic database.
		 If a particular percentage of the source code matches anything in the heuristic database, the program is flagged.

	Dynamic Heuristic Analysis
		-The program is placed inside a virtual environment or a sandbox shich is then analyzed by the security solution for any suspicious behaviors.
*/

/*
Behavior-based Detection

Once the malware is running, security solutions an in-memory scan ofr the runnning process.
For example, if the malware performs process injection into notepad.exe and connects to the internet, this will likely cause the process to be terminated immediately due to the high likelihood that this is malicious activity.
To bypass this method, not creating new child process, and encrypt memory. However, this topic is advaced.

*/

/*
API Hooking

This is a technique used by security solutions, mainly EDRs.
API hooking works by intercepting commonly abused APIs and then analyzing the parameters of these APIs in real time. This is a powerful way of detection.

*/


/*
IAT Checking

IAT (Import Address Table) have informations of functions that used by PE execution and contains DLL.
IAT is worth because security solution can get information about using WinAPI by exe file.
For example, ransomware often use CreateFileA/W, SetFilePointer, Read/WriteFile, CryptCreateHash, CryptHashData, CryptGetHashParam.
We can check these iAT information by using dumpbin.exe.
To bypass IAT scan, use API hashing.
*/
