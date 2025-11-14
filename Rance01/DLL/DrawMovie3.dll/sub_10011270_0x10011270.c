// 函数: sub_10011270
// 地址: 0x10011270
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

OSVERSIONINFOA versionInformation
int32_t eax_1 = __security_cookie ^ &versionInformation
versionInformation.dwOSVersionInfoSize = 0x94
BOOL dwMajorVersion

if (GetVersionExA(&versionInformation) != 0)
    dwMajorVersion = versionInformation.dwMajorVersion
    
    if (dwMajorVersion u> 5)
    label_100112ac:
        dwMajorVersion.b = 1
        sub_10001d19(eax_1 ^ &versionInformation)
        return dwMajorVersion
    
    if (dwMajorVersion == 5 && versionInformation.dwMinorVersion u>= 1)
        goto label_100112ac

dwMajorVersion.b = 0
sub_10001d19(eax_1 ^ &versionInformation)
return dwMajorVersion
