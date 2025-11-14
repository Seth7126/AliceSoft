// 函数: sub_5ee120
// 地址: 0x5ee120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_54
uint32_t result = __security_cookie ^ &var_54
uint32_t result_1 = result

if (arg1 != 0 && arg2 != 0)
    MEMORYSTATUSEX buffer
    buffer.dwLength = 0x40
    var_4c
    _memset(&var_4c, 0, 0x3c)
    GlobalMemoryStatusEx(&buffer)
    int32_t esi_1 = buffer.ullTotalPhys.d
    int32_t edx = buffer.ullTotalPhys:4.d
    int32_t eax_2 = sbb.d(edx, buffer.ullAvailPhys:4.d, esi_1 u< buffer.ullAvailPhys.d)
    result = eax_2 u>> 0x14
    *arg2 = (esi_1 - buffer.ullAvailPhys.d) u>> 0x14 | eax_2 << 0xc
    *arg1 = esi_1 u>> 0x14 | edx << 0xc

sub_69a5bc(result_1 ^ &var_54)
return result
