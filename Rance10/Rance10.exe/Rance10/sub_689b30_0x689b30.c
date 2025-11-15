// 函数: sub_689b30
// 地址: 0x689b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(*arg1 + 0xc))()
int32_t* eax_2

if (arg5 - 1 u<= 3)
    int32_t edi_1
    
    switch (arg5)
        case 1
            edi_1 = 0x1c
        case 2
            edi_1 = 0xa
        case 3
            edi_1 = 0x22
        case 4
            edi_1 = 0x29
    
    int32_t var_14 = 1
    int32_t var_c = 0
    
    if (sub_68a270(arg1, arg2, arg3, edi_1, arg6, &var_14, &var_c).b != 0)
        eax_2 = sub_68a330(arg1, arg2, arg3, edi_1, 1, 0)
        arg1[3] = eax_2
        
        if (eax_2 != 0 && sub_68a3f0(arg1, edi_1).b != 0)
            int32_t eax_3
            
            if (arg1[0x10].b == 0)
                eax_3 = arg1[3]
            else
                eax_3 = arg1[0xc]
            
            int32_t* ecx_3 = *(arg1[2] + 0x34)
            
            if ((*(*ecx_3 + 0x24))(ecx_3, eax_3, 0, &arg1[0xd]) s>= 0
                    && sub_68a470(arg1, arg2, arg3, var_14, var_c).b != 0
                    && sub_68a530(arg1, var_14).b != 0)
                eax_2 = (*(*arg1[2] + 0x5c))()
                arg1[0x15] = eax_2
                
                if (eax_2 != 0)
                    int32_t var_2c_5 = arg3
                    (*(*eax_2 + 0x28))(0, 0, arg2)
                    arg1[6] = arg2
                    arg1[7] = arg3
                    arg1[8] = arg4
                    int32_t eax_8
                    eax_8.b = arg7
                    arg1[9] = arg5
                    arg1[0x11] = edi_1
                    arg1[0xb].b = eax_8.b
                    arg1[0x16] = sub_68a5c0(eax_8, arg3, arg2, arg5, arg6)
                    int32_t eax_9
                    eax_9.b = 1
                    return eax_9

eax_2.b = 0
return eax_2
