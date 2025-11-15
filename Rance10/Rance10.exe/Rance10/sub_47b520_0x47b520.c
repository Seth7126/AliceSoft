// 函数: sub_47b520
// 地址: 0x47b520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *(arg1 + 4)

if (result != 0)
    int32_t eax = *result
    
    if (eax != 0)
        _free(eax)
    
    result = _free(*(arg1 + 4))

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
return result
