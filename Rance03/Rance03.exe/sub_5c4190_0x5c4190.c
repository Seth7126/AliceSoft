// 函数: sub_5c4190
// 地址: 0x5c4190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
char ebx = (*arg1[0x8d]).b
arg1[0x8d] -= 4
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
void* edx = *arg1[0x8d]
int32_t eax_5 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (edx u< eax_5)
    eax_5 = arg1[0x5d]
    edx = *(eax_5 + (edx << 2))
    
    if (edx != 0)
        uint32_t eax_7 = *(edx + 0xc) u>> 2
        
        if (edi u>= eax_7)
            return sub_5c24e0(eax_7, edx, arg1, arg1, 0x6e69fc)
        
        int32_t eax_8
        
        if (*(edx + 0xc) != 0)
            eax_8 = *(edx + 8)
        else
            eax_8 = 0
        
        int32_t eax_10 = *(eax_8 + (edi << 2)) << ebx
        
        if (*(edx + 0xc) != 0)
            *(*(edx + 8) + (edi << 2)) = eax_10
            return sub_5ddf10(&arg1[0x88], eax_10)
        
        *(edi << 2) = eax_10
        return sub_5ddf10(&arg1[0x88], eax_10)

return sub_5c24e0(eax_5, edx, arg1, arg1, 0x6e6a20)
