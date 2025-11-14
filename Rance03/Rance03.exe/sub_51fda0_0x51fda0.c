// 函数: sub_51fda0
// 地址: 0x51fda0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x1c) != 0)
        goto label_51fddf
    
    if (sub_5200e0(arg1) != 0)
        *(arg1 + 0x1c) = 1
    label_51fddf:
        int32_t edi_1 = *(arg1 + 0x28)
        void** eax_2
        int32_t ecx_1
        eax_2, ecx_1 = sub_417ed0(arg1 + 0x28, arg2)
        char eax_4
        
        if (eax_2 != *(arg1 + 0x28))
            eax_4, ecx_1 = sub_40c3a0(arg2, &eax_2[4])
        
        void** var_8
        
        if (eax_2 == *(arg1 + 0x28) || eax_4 != 0)
            var_8 = *(arg1 + 0x28)
        else
            var_8 = eax_2
        
        if (var_8 != edi_1)
            return 1
        
        uint32_t var_1c_3 = zx.d(data_75dd2a)
        int32_t* var_20_2 = arg2
        sub_4ce1a0(arg1 + 0x28, &var_8, ecx_1)
        
        if (sub_5203f0(arg1) != 0)
            return 1
else
    sub_64b530(0x6e313c)

return 0
