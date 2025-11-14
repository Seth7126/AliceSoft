// 函数: sub_5c4b50
// 地址: 0x5c4b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx_1 = arg1[0x28] - arg1[0x27]
int32_t eax_3 = ecx_1 s/ 0x48

if (arg3 u< eax_3)
    eax_3 = arg1[0x27]
    ecx_1 = arg3 * 9
    int32_t edi_1 = eax_3 + (ecx_1 << 3)
    
    if (edi_1 != 0)
        if (arg1[0x4ae].b != 0)
            sub_5b34e0(arg1[0x4a0] + arg3 * 0x38)
        
        int32_t var_c
        struct sys43vm::CPage::VTable** eax_5
        int32_t ecx_6
        int32_t edx_3
        eax_5, ecx_6, edx_3 = sub_5d60d0(&arg1[0x5b], edi_1, &var_c, arg2)
        
        if (eax_5.b == 0)
            int32_t var_1c_1 = 0x6e6fd4
            sub_5c2400(eax_5, edx_3, ecx_6, arg1, "RunMethod")
            int32_t eax_6
            eax_6.b = 0
            return eax_6
        
        int32_t eax_7
        int32_t edx_4
        eax_7, edx_4 = sub_5c0400(arg1, var_c)
        
        if (eax_7.b == 0)
            int32_t var_1c_3 = 0x6e7004
            sub_5c2400(eax_7, edx_4, arg1, arg1, "RunMethod")
            int32_t eax_8
            eax_8.b = 0
            return eax_8
        
        int32_t edx_5 = *(edi_1 + 4)
        int32_t ecx_9 = arg1[0x82] - arg1[0x83]
        *arg1[0x393] = 5
        arg1[0x393] += 4
        *arg1[0x18f] = ecx_9
        arg1[0x18f] += 4
        arg1[0x82] = arg1[0x83] + edx_5
        int32_t* eax_13
        int32_t ecx_11
        int32_t edx_6
        eax_13, ecx_11, edx_6 = sub_5c0500(arg1, arg2)
        
        if (eax_13.b == 0)
            int32_t var_1c_5 = 0x6e7038
            sub_5c2400(eax_13, edx_6, ecx_11, arg1, "RunMethod")
            int32_t eax_14
            eax_14.b = 0
            return eax_14
        
        int32_t* eax_15 = *(edi_1 + 0x28)
        
        if (eax_15 s> 0)
            int32_t ecx_13
            int32_t edx_7
            eax_15, ecx_13, edx_7 = sub_5d3b50(arg1[0x496], nullptr, eax_15)
            
            if (eax_15.b == 0)
                int32_t var_1c_7 = 0x6e7070
                sub_5c2400(eax_15, edx_7, ecx_13, arg1, "RunMethod")
                int32_t eax_16
                eax_16.b = 0
                return eax_16
        
        while (arg1[0x85].b != 0)
            int16_t* eax_17 = arg1[0x82]
            uint32_t ecx_14 = zx.d(*eax_17)
            arg1[0x82] = &eax_17[1]
            sub_5c1100(arg1, ecx_14)
        
        arg1[0x85].b = 1
        eax_15.b = 1
        return eax_15

int32_t var_1c_9 = arg3
int32_t var_20_1 = 0x6e6f9c
sub_5c2400(eax_3, arg3, ecx_1, arg1, "RunMethod")
int32_t eax_19
eax_19.b = 0
return eax_19
