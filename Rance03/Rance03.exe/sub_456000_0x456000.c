// 函数: sub_456000
// 地址: 0x456000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
*sub_4561b0(arg1 + 0x24, arg2) = arg3
int32_t result = *(arg1 + 0x14) - *(arg1 + 0x10)

if ((result & 0xfffffffc) s> 0)
    do
        (*(**(*(*(arg1 + 0x10) + (esi << 2)) + 0x20) + 8))(arg2, arg3)
        esi += 1
        result = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2
    while (esi s< result)

return result
