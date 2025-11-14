// 函数: sub_5d5d40
// 地址: 0x5d5d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0

if (((*(arg1 + 0xc) - *(arg1 + 8)) & 0xfffffffc) s> 0)
    do
        int32_t* ecx = *(*(arg1 + 8) + (i << 2))
        
        if (ecx != 0)
            (**ecx)(1)
        
        i += 1
    while (i s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)

int32_t i_1 = 0
*(arg1 + 0xc) = *(arg1 + 8)

if (((*(arg1 + 0x28) - *(arg1 + 0x24)) & 0xfffffffc) s> 0)
    do
        int32_t* ecx_1 = *(*(arg1 + 0x24) + (i_1 << 2))
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        i_1 += 1
    while (i_1 s< (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2)

int32_t result = *(arg1 + 0x24)
*(arg1 + 0x28) = result
*(arg1 + 0x3c) = 0
return result
