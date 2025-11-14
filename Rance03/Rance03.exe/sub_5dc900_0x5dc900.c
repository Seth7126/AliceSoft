// 函数: sub_5dc900
// 地址: 0x5dc900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_8 = *(arg1 + 4)

if (*(eax_8 + 0x3c) != 0x11)
    return 0

int32_t edi = *(eax_8 + 0x40)
void* esi = *(*(eax_8 + 0x1c) + 4)
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2e8ba2e9, *(esi + 0xc4) - *(esi + 0xc0))
int32_t edx_1 = edx s>> 3

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_6 = edi * 0x2c
    int32_t* result = eax_6 + *(esi + 0xc0)
    
    if (eax_6 != neg.d(*(esi + 0xc0)))
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
