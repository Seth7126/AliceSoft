// 函数: sub_423cb0
// 地址: 0x423cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = *(*(arg1 + 0x118) - 0x24)
int32_t eax_3 = (*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebp)
int32_t edi_1 = arg2 - 2

if ((*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebp) == 4)
    edi_1 += sub_423e80(arg1, ebp, edi_1)

if (eax_3 == 1)
    return sub_42d000(*(arg1 + 0xe0), ebp, edi_1, arg3)

if (eax_3 == 3)
    return sub_42d000(*(arg1 + 0xe0), ebp, edi_1, arg3)

if (eax_3 == 4)
    return sub_42d000(*(arg1 + 0xe0), ebp, edi_1, arg3)

int32_t result
result.b = 0
return result
