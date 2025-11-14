// 函数: sub_60d050
// 地址: 0x60d050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[9] != 0)
    (*(*arg1 + 8))()
    int32_t* ecx = arg1[0x9d]
    int32_t var_c = 0
    (*(*ecx + 4))(0, &var_c)
    int32_t edi_1
    
    switch (var_c)
        case 1
            edi_1 = 2
        case 2
            edi_1 = 4
        case 3
            edi_1 = 8
        case 4
            edi_1 = 0x10
        default
            edi_1 = 0
    
    int32_t* ecx_1 = arg1[0x9d]
    int32_t var_8 = 0
    (*(*ecx_1 + 4))(1, &var_8)
    
    if (sub_60aa00(&arg1[0xb], arg1[9], arg1[6], arg1[7], edi_1, var_8 == 1) != 0)
        if (sub_618680(&arg1[0x56], arg1[0xa], arg1) != 0)
            if (sub_619e80(&arg1[0x6e], arg1[0xa], arg1) == 0)
                sub_64b530(0x6ebc24)
                enum MESSAGEBOX_RESULT result
                result.b = 0
                return result
            
            if (sub_609c10(&arg1[0x87], arg1[0xd]) != 0)
                int32_t __saved_edi_4 = arg1[0xd]
                return sub_60fb20(&arg1[0x8f]) != 0
        else
            sub_64b530(0x6ebbf8)

return 0
