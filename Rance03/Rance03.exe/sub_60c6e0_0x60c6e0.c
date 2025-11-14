// 函数: sub_60c6e0
// 地址: 0x60c6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = arg16

if (sub_6189e0(&arg1[0x56], arg2, arg8, arg15) != 0)
    int32_t var_14_1 = arg14
    int32_t var_18_1 = arg13
    
    if (sub_618c20(&arg1[0x56], arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12) != 0)
        uint32_t edi_2 = arg5 u>> 0x18
        
        switch (arg3)
            case 0
                if (arg4 == 0 && edi_2 == 0xff && arg8.b == 0)
                    (*(*arg1 + 0xbc))(0)
                    int32_t eax_4
                    eax_4.b = 1
                    return eax_4
                
                (*(*arg1 + 0xbc))(1)
                int32_t eax_6
                eax_6.b = 1
                return eax_6
            case 1
                if (arg4 == 0 && edi_2 == 0xff && arg8.b == 0)
                    (*(*arg1 + 0xbc))(2)
                    int32_t eax_9
                    eax_9.b = 1
                    return eax_9
                
                (*(*arg1 + 0xbc))(3)
                int32_t eax_11
                eax_11.b = 1
                return eax_11
            case 2
                (*(*arg1 + 0xbc))(5)
                int32_t eax_13
                eax_13.b = 1
                return eax_13
            case 3
                (*(*arg1 + 0xbc))(4)
                int32_t eax_15
                eax_15.b = 1
                return eax_15

return 0
