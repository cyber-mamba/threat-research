Throughout the modules thus far, the payload has been consistently stored directly within the binary.
This is a fast and commonly used method to fetch the payload.
However, in some cases where payload size constraints exist, saing the payload inside the code is not a
feasible approach.
The alternative approach is to hos the payload on a web server and fetch it during execution.

## Windows APIs that can use for fetching the payload

- InternetOpenW
- InternetOpenUrlW
- InternetReadFile
- InternetCloseHandle
- InternetSetOptionW

## How to fetch?
1. store binary into web server
2. execute some malware in target device.
3. the malware use above Windows APIs for fetching binary from web server(C2)
4. payload is fetched on target device.
