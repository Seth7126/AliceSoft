// 函数: sub_6bb6b0
// 地址: 0x6bb6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

uint32_t eax_1 = arg1[1][0]

if (eax_1 != 0)
    _free(eax_1)

uint32_t eax_2 = (*arg1)[5]

if (eax_2 != 0)
    _free(eax_2)

uint32_t eax_3 = (*arg1)[6]

if (eax_3 != 0)
    _free(eax_3)

if ((*arg1)[2] != 0)
    for (int32_t i = 0; i s< 0x44; i += 4)
        for (int32_t j = 0; j s< 0x20; j += 4)
            _free(*(*(i + (*arg1)[2]) + j))
        
        _free(*(i + (*arg1)[2]))
    
    _free((*arg1)[2])

if ((*arg1)[3] != 0)
    for (int32_t i_1 = 0; i_1 s< 0xc; i_1 += 4)
        _free(*((*arg1)[3] + i_1))
    
    _free((*arg1)[3])

_memset(arg1, 0, 0x34)
