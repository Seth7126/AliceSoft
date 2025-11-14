// 函数: sub_699af0
// 地址: 0x699af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

OSVERSIONINFOEXA versionInformation
int32_t eax_1 = __security_cookie ^ &versionInformation
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_2

if (cond:0)
    eax_2 = arg1
else
    eax_2 = *arg1

int32_t var_c0 = 0
*eax_2 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.dwMajorVersion = 5
versionInformation.dwMinorVersion = 0
int32_t ConditionMask
int32_t edx
ConditionMask, edx = VerSetConditionMask(0, VER_MAJORVERSION, 1)
int32_t var_c0_1 = edx
int32_t dwlConditionMask
int32_t edx_1
dwlConditionMask, edx_1 = VerSetConditionMask(ConditionMask, VER_MINORVERSION, 1)
int32_t var_b8 = edx_1

if (VerifyVersionInfoA(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, dwlConditionMask)
        != 1)
    int32_t var_c0_2 = 0
    versionInformation.dwOSVersionInfoSize = 0x9c
    versionInformation.dwMajorVersion = 5
    versionInformation.dwMinorVersion = 1
    int32_t ConditionMask_1
    int32_t edx_2
    ConditionMask_1, edx_2 = VerSetConditionMask(0, VER_MAJORVERSION, 1)
    int32_t var_c0_3 = edx_2
    int32_t dwlConditionMask_1
    int32_t edx_3
    dwlConditionMask_1, edx_3 = VerSetConditionMask(ConditionMask_1, VER_MINORVERSION, 1)
    int32_t var_b8_1 = edx_3
    
    if (VerifyVersionInfoA(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, 
            dwlConditionMask_1) != 1)
        char* var_b8_2
        
        if (sub_699d60(6, 0) == 0)
            if (sub_699d60(6, 1) == 0)
                if (sub_699d60(6, 2) == 0)
                    if (sub_699d60(6, 3) == 0)
                        var_b8_2 = &data_703c04
                    else
                        var_b8_2 = "Windows8.1 "
                else
                    var_b8_2 = "Windows8 "
            else
                var_b8_2 = "Windows7 "
        else
            var_b8_2 = "WindowsVista "
        
        sub_405780(arg1, var_b8_2)
    else
        sub_4057c0(arg1, "WindowsXP ", 0xa)
else
    sub_4057c0(arg1, "Windows2000 ", 0xc)

int32_t var_c0_4 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wServicePackMajor = 5
int32_t dwlConditionMask_2
int32_t edx_4
dwlConditionMask_2, edx_4 = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
int32_t var_b8_3 = edx_4

if (VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask_2) == 1)
    int32_t* eax_10 = sub_4057c0(arg1, 0x703c00, 3)
    sub_69a5bc(eax_1 ^ &versionInformation)
    return eax_10

int32_t var_c0_5 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wServicePackMajor = 4
int32_t dwlConditionMask_3
int32_t edx_5
dwlConditionMask_3, edx_5 = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
int32_t var_b8_4 = edx_5

if (VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask_3) == 1)
    int32_t* eax_12 = sub_4057c0(arg1, 0x703c30, 3)
    sub_69a5bc(eax_1 ^ &versionInformation)
    return eax_12

int32_t var_c0_6 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wServicePackMajor = 3
int32_t dwlConditionMask_4
int32_t edx_6
dwlConditionMask_4, edx_6 = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
int32_t var_b8_5 = edx_6
char* var_b8_6

if (VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask_4) != 1)
    if (sub_699de0(2) == 0)
        if (sub_699de0(1) == 0)
            if (sub_699de0(0) == 0)
                var_b8_6 = &data_703c44
            else
                var_b8_6 = &data_6da989
        else
            var_b8_6 = &data_703c24
    else
        var_b8_6 = &data_703c28
else
    var_b8_6 = &data_703c2c

int32_t* eax_17 = sub_405780(arg1, var_b8_6)
sub_69a5bc(eax_1 ^ &versionInformation)
return eax_17
