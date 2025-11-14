// 函数: sub_5e0800
// 地址: 0x5e0800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_43aa00(arg1, 0x6ead30) == 0 && sub_43aa00(arg1, 0x6ead20) == 0)
    if (sub_43aa00(arg1, 0x6ead40) != 0)
        if (sub_43aa00(arg1, 0x6dcf50) != 0)
            return data_75d4dc
        
        return 0
    
    if (sub_43aa00(arg1, 0x6eacb0) == 0)
        if (sub_43aa00(arg1, 0x6ead10) != 0)
            return sub_44cfc0()
        
        if (sub_43aa00(arg1, 0x6ead50) != 0)
            if (sub_43aa00(arg1, 0x6ddb20) != 0)
                return data_75d4ec
            
            return 0
        
        if (sub_43aa00(arg1, 0x6eace0) != 0)
            return sub_620e90(arg1)
        
        if (sub_43aa00(arg1, 0x6eacd0) != 0)
            return sub_620e90(arg1)
        
        if (sub_43aa00(arg1, 0x6eacf0) != 0)
            return sub_620e90(arg1)
        
        if (sub_43aa00(arg1, 0x6eacc0) != 0)
            return sub_620e90(arg1)
        
        if (sub_43aa00(arg1, 0x6ead00) != 0)
            return sub_620e90(arg1)
    else
        int32_t* ecx_5 = data_75d538
        
        if (ecx_5 != 0)
            (**ecx_5)()
            return data_75d538
    
    return 0

int32_t* edi = data_75d540

if (edi != 0)
    char eax_20 = sub_43aa00(arg1, 0x6f1f40)
    char eax_23
    
    if (eax_20 == 0)
        eax_23 = sub_43aa00(arg1, 0x6f1f30)
    
    if (eax_20 != 0 || eax_23 != 0)
        (**edi)()
        return data_75d540

return 0
