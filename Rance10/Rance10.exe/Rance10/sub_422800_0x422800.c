// 函数: sub_422800
// 地址: 0x422800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* esi = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_1

if (esi != 0 && arg3 s>= 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(*esi + 0x14))())
    
    if (arg3 s< (eax_3 + (edx_2 & 3)) s>> 2)
        eax_1 = (*(*esi + 0x18))()
        
        if (eax_1 != 0)
            int32_t esi_1 = *(eax_1 + (arg3 << 2))
            eax_1 = (*(**(arg1 + 0xc) + 0x24))((*(**(arg1 + 8) + 0x18))(arg2), arg3)
            
            if (eax_1 != 0)
                sub_422010(arg1, (**eax_1)(), esi_1, arg4)
                int32_t* eax_9
                eax_9.b = 1
                return eax_9

eax_1.b = 0
return eax_1
