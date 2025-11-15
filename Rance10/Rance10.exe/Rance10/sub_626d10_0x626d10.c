// 函数: sub_626d10
// 地址: 0x626d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_8 = *(arg1 + 0xc)

if (eax_8 != 0xd && eax_8 != 0x15 && eax_8 != 0x59)
    return 0

int32_t edi = *(arg1 + 0x10)
void* esi = **(arg1 + 4)

if (edi u< (*(esi + 0x94) - *(esi + 0x90)) s/ 0x38)
    int32_t* result = *(esi + 0x90) + edi * 0x38
    
    if (result != 0)
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
