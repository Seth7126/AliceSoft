// 函数: sub_644ca0
// 地址: 0x644ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x24) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x20)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = *(arg1 + 8)

if (eax_2 != 0)
    _free(eax_2)

__builtin_memset(arg1, 0, 0x28)
_free(arg1)
