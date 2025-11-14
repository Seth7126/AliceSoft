// 函数: sub_451eb0
// 地址: 0x451eb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_42f470(arg1 + 4, arg2)
int32_t* result = *(arg1 + 4)
int32_t esi = 0
uint32_t ecx_4 = (*(arg1 + 8) - result + 3) u>> 2

if (result u> *(arg1 + 8))
    ecx_4 = 0

if (ecx_4 != 0)
    do
        esi += 1
        *result = 0xffffffff
        result = &result[1]
    while (esi != ecx_4)

*(arg1 + 0x14) = 0
*(arg1 + 0x10) = 0xffffffff
return result
