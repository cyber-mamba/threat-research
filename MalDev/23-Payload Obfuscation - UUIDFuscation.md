# UUIDFuscation
![image](https://github.com/cyber-mamba/threat-research/assets/96987448/3389250d-d6fe-435c-ba08-a96c18c3a17b)

The UUID format is made up of 5 segments of different sizes which look something
like above. The image illustrates the UUID structure.

For example, FC 48 83 E4 F0 E8 C0 00 00 00 41 51 41 50 52 51 FC4883E4-F0E80C000-0000-415141505251 E48348FC-E8F0-00C0-0000-415141505251

**First 3 segments are using the same bytes in our shellcode but the order is in reverse.**
The reason is that the first three segments use **little-endian** byte ordering.

## UUIDFuscation Implementation
A UUID address is made up 16 bytes, therefore the shellcode should be a multiple of 16.
UUIDFuscation will resemble IPv6Fuscation closely due to bothe requiring shellcode
multiples of 16 bytes. Again, padding can be used if the shellcode doesn&t meet that requirement.
