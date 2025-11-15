// 函数: sub_687000
// 地址: 0x687000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_692710(&arg1[0x5d], arg2) != 0)
    int32_t var_14_1 = arg19
    int32_t var_18_1 = arg18
    int32_t var_1c_1 = arg17
    int32_t var_20_1 = arg16
    int32_t var_24_1 = arg15
    int32_t var_28_1 = arg14
    int32_t var_2c_1 = arg13
    int32_t var_30_1 = arg12
    int32_t var_34_1 = arg11
    int32_t var_38_1 = arg10
    
    if (sub_692990(&arg1[0x5d], arg3, arg4, arg5, arg6, arg7, arg8, arg9) != 0)
        uint32_t edi_2 = arg5 u>> 0x18
        
        switch (arg3)
            case 0
                if (arg4.b == 0 && edi_2 == 0xff && arg8.b == 0)
                    (*(*arg1 + 0xc0))(0)
                    int32_t eax_4
                    eax_4.b = 1
                    return eax_4
                
                (*(*arg1 + 0xc0))(1)
                int32_t eax_6
                eax_6.b = 1
                return eax_6
            case 1
                if (arg4.b == 0 && edi_2 == 0xff && arg8.b == 0)
                    (*(*arg1 + 0xc0))(2)
                    int32_t eax_9
                    eax_9.b = 1
                    return eax_9
                
                (*(*arg1 + 0xc0))(3)
                int32_t eax_11
                eax_11.b = 1
                return eax_11
            case 2
                (*(*arg1 + 0xc0))(5)
                int32_t eax_13
                eax_13.b = 1
                return eax_13
            case 3
                (*(*arg1 + 0xc0))(4)
                int32_t eax_15
                eax_15.b = 1
                return eax_15

return 0
