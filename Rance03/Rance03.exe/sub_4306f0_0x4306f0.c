// 函数: sub_4306f0
// 地址: 0x4306f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_1

if (esi != 0)
    int32_t arg_8
    int32_t edi_1 = arg_8
    
    if (edi_1 s>= 0)
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = sx.q((*(*esi + 0x14))())
        
        if (edi_1 s< (eax_3 + (edx_2 & 3)) s>> 2)
            eax_1 = (*(*esi + 0x18))()
            
            if (eax_1 != 0)
                int32_t esi_1 = *(eax_1 + (edi_1 << 2))
                
                if (sub_42dd60(arg1, arg2, &arg_8).b != 0)
                    sub_42f0d0(arg1, arg_8, esi_1, arg3)
                    int32_t* eax_6
                    eax_6.b = 1
                    return eax_6

eax_1.b = 0
return eax_1
