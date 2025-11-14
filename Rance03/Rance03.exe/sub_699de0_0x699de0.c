// 函数: sub_699de0
// 地址: 0x699de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

OSVERSIONINFOEXA versionInformation
int32_t eax_1 = __security_cookie ^ &versionInformation
int32_t var_b4 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wServicePackMajor = arg1
int32_t dwlConditionMask
int32_t edx
dwlConditionMask, edx = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
int32_t var_ac = edx
int32_t eax_4 = VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask) - 1
int32_t eax_5 = neg.d(eax_4)
sub_69a5bc(eax_1 ^ &versionInformation)
return sbb.d(eax_5, eax_5, eax_4 != 0) + 1
