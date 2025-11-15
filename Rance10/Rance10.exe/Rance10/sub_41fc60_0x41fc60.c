// 函数: sub_41fc60
// 地址: 0x41fc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_2 = (*(**(arg1 + 0xc) + 0xc))((*(**(arg1 + 8) + 0x14))(arg2), arg3)

if (eax_2 != 0)
    int32_t eax_3 = (**eax_2)()
    int32_t* esi_1 = (*(**(arg1 + 8) + 4))(arg2)
    
    if (esi_1 != 0 && arg3 s>= 0)
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = sx.q((*(*esi_1 + 0x14))())
        
        if (arg3 s< (eax_5 + (edx_4 & 3)) s>> 2)
            eax_2 = (*(*esi_1 + 0x18))()
            
            if (eax_2 != 0)
                sub_420330(eax_3, eax_2[arg3], arg4)
                int32_t* eax_8
                eax_8.b = 1
                return eax_8

eax_2.b = 0
return eax_2
