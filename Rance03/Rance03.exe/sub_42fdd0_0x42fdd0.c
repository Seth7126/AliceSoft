// 函数: sub_42fdd0
// 地址: 0x42fdd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_1

if (esi != 0 && arg3 s>= 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(*esi + 0x14))())
    
    if (arg3 s< (eax_3 + (edx_2 & 3)) s>> 2)
        eax_1 = (*(*esi + 0x18))()
        
        if (eax_1 != 0)
            sub_42f0d0(arg1, (*(**(arg1 + 0xc) + 0xc))((*(**(arg1 + 8) + 0x18))(arg2), arg3), 
                *(eax_1 + (arg3 << 2)), arg4)
            int32_t* eax_9
            eax_9.b = 1
            return eax_9

eax_1.b = 0
return eax_1
