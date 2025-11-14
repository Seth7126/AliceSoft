// 函数: sub_642e00
// 地址: 0x642e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 

int32_t i = 0

if (*(arg1 + 4) s> 0)
    do
        int32_t eax_2 = *(*(arg1 + 0x14) + (i << 2))
        
        if (eax_2 != 0)
            _free(eax_2)
        
        i += 1
    while (i s< *(arg1 + 4))

_free(*(arg1 + 0x14))
int32_t i_1 = 0

if (*(arg1 + 0x18) s> 0)
    do
        _free(*(*(arg1 + 0x1c) + (i_1 << 2)))
        i_1 += 1
    while (i_1 s< *(arg1 + 0x18))

_free(*(arg1 + 0x1c))
_memset(arg1, 0, 0x2c)
_free(arg1)
