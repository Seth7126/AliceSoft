// 函数: sub_42cf20
// 地址: 0x42cf20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_2 = (*(**(arg1 + 0xc) + 0xc))((*(**(arg1 + 8) + 0x18))(arg2), arg3)
int32_t* esi_1 = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_3

if (esi_1 != 0 && arg3 s>= 0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q((*(*esi_1 + 0x14))())
    
    if (arg3 s< (eax_5 + (edx_3 & 3)) s>> 2)
        eax_3 = (*(*esi_1 + 0x18))()
        
        if (eax_3 != 0)
            sub_42d4b0(arg1, eax_2, *(eax_3 + (arg3 << 2)), arg4)
            int32_t* eax_8
            eax_8.b = 1
            return eax_8

eax_3.b = 0
return eax_3
