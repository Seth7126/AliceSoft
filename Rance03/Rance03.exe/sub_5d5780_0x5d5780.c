// 函数: sub_5d5780
// 地址: 0x5d5780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0

if (((*(arg1 + 0xc) - *(arg1 + 8)) & 0xfffffffc) s> 0)
    do
        int32_t* ecx = *(*(arg1 + 8) + (i << 2))
        
        if (ecx != 0)
            (**ecx)(1)
        
        i += 1
    while (i s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)

int32_t result = *(arg1 + 8)
*(arg1 + 0xc) = result
return result
