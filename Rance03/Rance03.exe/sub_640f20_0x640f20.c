// 函数: sub_640f20
// 地址: 0x640f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 0x10)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = *(arg1 + 0x14)

if (eax_2 != 0)
    _free(eax_2)

int32_t eax_3 = *(arg1 + 0x18)

if (eax_3 != 0)
    _free(eax_3)

if (*(arg1 + 8) != 0)
    int32_t ebx
    int32_t var_c_1 = ebx
    
    for (int32_t* i = nullptr; i s< 0x44; i = &i[1])
        for (int32_t j = 0; j s< 0x20; j += 4)
            _free(*(*(i + *(arg1 + 8)) + j))
        
        _free(*(i + *(arg1 + 8)))
    
    _free(*(arg1 + 8))

if (*(arg1 + 0xc) != 0)
    for (int32_t i_1 = 0; i_1 s< 0xc; i_1 += 4)
        _free(*(*(arg1 + 0xc) + i_1))
    
    _free(*(arg1 + 0xc))

_memset(arg1, 0, 0x34)
