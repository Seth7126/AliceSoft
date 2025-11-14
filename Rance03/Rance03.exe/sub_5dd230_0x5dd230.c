// 函数: sub_5dd230
// 地址: 0x5dd230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(*(arg1 + 4) + 8)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(esi + 0xa0) - *(esi + 0x9c))
int32_t edx_1 = edx s>> 4

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    void* eax_5 = *(esi + 0x9c) + arg2 * 0x48
    
    if (eax_5 != 0)
        int32_t* result = eax_5 + 8
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
