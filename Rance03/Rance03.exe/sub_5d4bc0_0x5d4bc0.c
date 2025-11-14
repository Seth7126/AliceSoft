// 函数: sub_5d4bc0
// 地址: 0x5d4bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x3c)
uint32_t result

if (eax != 0x10)
    if (eax != 0x11)
        result.b = 1
        return result
    
    if (arg2 u< *(arg1 + 0xc) u>> 2)
        int32_t eax_3
        
        if (*(arg1 + 0xc) != 0)
            eax_3 = *(arg1 + 8)
        else
            eax_3 = 0
        
        if (sub_5d5e80(*(arg1 + 0x1c), *(eax_3 + (arg2 << 2))).b != 0
                && sub_5d34a0(arg1, arg2, 0xffffffff).b != 0)
            result.b = 1
            return result
else if (arg2 u< *(arg1 + 0xc) u>> 2)
    int32_t eax_5
    
    if (*(arg1 + 0xc) != 0)
        eax_5 = *(arg1 + 8)
    else
        eax_5 = 0
    
    if (sub_5d5e80(*(arg1 + 0x1c), *(eax_5 + (arg2 << 2))).b != 0
            && sub_5d34a0(arg1, arg2, 0xffffffff).b != 0)
        result.b = 1
        return result

result.b = 0
return result
