// 函数: sub_640750
// 地址: 0x640750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax = *(arg1 + 0xc)

if (eax != 0)
    _free(eax)

__builtin_memset(arg1, 0, 0x14)
