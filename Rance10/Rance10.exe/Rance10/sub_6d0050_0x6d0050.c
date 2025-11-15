// 函数: sub_6d0050
// 地址: 0x6d0050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

OSVERSIONINFOEXA versionInformation
int32_t eax_1 = __security_cookie ^ &versionInformation
int32_t var_bc = 0
versionInformation.dwMajorVersion = arg1
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.dwMinorVersion = arg2
int32_t ConditionMask
int32_t edx
ConditionMask, edx = VerSetConditionMask(0, VER_MAJORVERSION, 1)
int32_t var_bc_1 = edx
int32_t dwlConditionMask
int32_t edx_1
dwlConditionMask, edx_1 = VerSetConditionMask(ConditionMask, VER_MINORVERSION, 1)
int32_t var_b4 = edx_1
int32_t eax_5 =
    VerifyVersionInfoA(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, dwlConditionMask)
    - 1
int32_t eax_6 = neg.d(eax_5)
@__security_check_cookie@4(eax_1 ^ &versionInformation)
return sbb.d(eax_6, eax_6, eax_5 != 0) + 1
