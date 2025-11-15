// 函数: sub_6b4a40
// 地址: 0x6b4a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

int32_t* eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    int32_t eax_2 = *eax_1
    
    if (eax_2 != 0)
        _free(eax_2)
    
    int32_t eax_4 = *(*(arg1 + 8) + 4)
    
    if (eax_4 != 0)
        _free(eax_4)
    
    _free(*(arg1 + 8))

__builtin_memset(arg1, 0, 0x20)
_free(arg1)
