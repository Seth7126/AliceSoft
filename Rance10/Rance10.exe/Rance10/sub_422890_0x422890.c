// 函数: sub_422890
// 地址: 0x422890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_1

if (edi != 0 && arg3 s>= 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(*edi + 0x14))())
    
    if (arg3 s< (eax_3 + (edx_2 & 3)) s>> 2)
        eax_1 = (*(*edi + 0x18))()
        
        if (eax_1 != 0)
            int32_t edi_1 = *(eax_1 + (arg3 << 2))
            
            if ((*(**(arg1 + 8) + 0x20))(arg2) s<= 0)
                sub_422010(arg1, (*(**(arg1 + 8) + 0x24))(arg2), edi_1, arg4)
                int32_t* eax_11
                eax_11.b = 1
                return eax_11
            
            sub_422010(arg1, 0x4f, edi_1, arg4)
            int32_t* eax_8
            eax_8.b = 1
            return eax_8

eax_1.b = 0
return eax_1
