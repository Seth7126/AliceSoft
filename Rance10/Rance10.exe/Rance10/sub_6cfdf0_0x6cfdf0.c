// 函数: sub_6cfdf0
// 地址: 0x6cfdf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_54
int32_t eax_1 = __security_cookie ^ &var_54
MEMORYSTATUSEX buffer
buffer.dwLength = 0x40
var_4c
_memset(&var_4c, 0, 0x3c)
GlobalMemoryStatusEx(&buffer)
int32_t esi = buffer.ullTotalPhys.d
int32_t edx = buffer.ullTotalPhys:4.d
int32_t eax_3 = sbb.d(edx, buffer.ullAvailPhys:4.d, esi u< buffer.ullAvailPhys.d)
*arg2 = (esi - buffer.ullAvailPhys.d) u>> 0x14 | eax_3 << 0xc
*arg1 = esi u>> 0x14 | edx << 0xc
@__security_check_cookie@4(eax_1 ^ &var_54)
return eax_3 u>> 0x14
