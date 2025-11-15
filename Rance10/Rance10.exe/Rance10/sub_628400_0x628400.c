// 函数: sub_628400
// 地址: 0x628400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 4)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4bda12f7, *(edi + 0x7c) - *(edi + 0x78))
int32_t edx_1 = edx s>> 5

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t esi_1 = arg2 * 0x6c
    void* esi_2 = esi_1 + *(edi + 0x78)
    
    if (esi_1 != neg.d(*(edi + 0x78)) && arg3 s>= 0
            && arg3 s< (*(esi_2 + 0x64) - *(esi_2 + 0x60)) s/ 0x70)
        int32_t* result = arg3 * 0x70 + *(esi_2 + 0x60)
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
