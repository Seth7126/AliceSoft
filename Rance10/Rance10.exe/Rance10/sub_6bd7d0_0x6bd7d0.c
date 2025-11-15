// 函数: sub_6bd7d0
// 地址: 0x6bd7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

int32_t i = 0

if ((*arg1)[1] s> 0)
    do
        int32_t eax_2 = *((*arg1)[5] + (i << 2))
        
        if (eax_2 != 0)
            _free(eax_2)
        
        i += 1
    while (i s< (*arg1)[1])

_free((*arg1)[5])
int32_t i_1 = 0

if ((*arg1)[6] s> 0)
    do
        _free(*((*arg1)[7] + (i_1 << 2)))
        i_1 += 1
    while (i_1 s< (*arg1)[6])

_free((*arg1)[7])
_memset(arg1, 0, 0x2c)
_free(arg1)
