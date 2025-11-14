// 函数: sub_5d46f0
// 地址: 0x5d46f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_1 = *(arg1 + 0x38)

if (edx_1 s< 0)
    int32_t eax
    eax.b = 0
    return eax

*(arg2 + (edx_1 << 2)) = *(arg1 + 0xc) u>> 2
uint32_t eax_2

if (*(arg1 + 0x38) == 0)
    eax_2.b = 1
    return eax_2

if ((*(arg1 + 0xc) & 0xfffffffc) u> 0)
    int32_t* eax_3
    
    if (*(arg1 + 0xc) != 0)
        eax_3 = *(arg1 + 8)
    else
        eax_3 = nullptr
    
    void* ecx = *(arg1 + 0x1c)
    int32_t edx = *eax_3
    
    if (edx u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2 && *(*(ecx + 8) + (edx << 2)) != 0)
        return sub_5d46f0(arg2) != 0

eax_2.b = 0
return eax_2
