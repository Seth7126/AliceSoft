// 函数: sub_403f90
// 地址: 0x403f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &common::CIDManager::`vftable'
int32_t result = arg1[4]
arg1[5] = result
void* ecx = arg1[7]

if (ecx != 0)
    result = sub_403160(ecx, (arg1[9] - ecx) s>> 2, 4)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

void* ecx_1 = arg1[4]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[6] - ecx_1) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

return result
