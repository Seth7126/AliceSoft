// 函数: sub_6282b0
// 地址: 0x6282b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 4)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4bda12f7, *(esi + 0x7c) - *(esi + 0x78))
int32_t edx_1 = edx s>> 5

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_4 = arg2 * 0x6c
    
    if (eax_4 != neg.d(*(esi + 0x78)))
        int32_t* result = eax_4 + *(esi + 0x78) + 0x1c
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
