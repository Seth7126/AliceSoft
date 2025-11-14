// 函数: sub_5c4710
// 地址: 0x5c4710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[0x393] u<= &arg1[0x293])
    int32_t edx
    sub_5c24e0(&arg1[0x293], edx, arg1, arg1, 0x6e6b08)
    return 2

int32_t edi = *(arg1[0x393] - 4)

if (edi - 2 u> 4)
    goto label_5c4765

switch (edi)
    case 2, 3
        sub_5c0550(arg1)
    label_5c4765:
        arg1[0x393] -= 4
        void* eax_4
        int32_t* ecx_1
        int32_t edx_1
        eax_4, ecx_1, edx_1 = sub_5c0460(arg1)
        
        if (eax_4.b == 0)
            int32_t var_c_1 = 0x6e6adc
            sub_5c2400(eax_4, edx_1, ecx_1, arg1, "RETURN")
            return 2
        
        if (arg1[0x291] u<= &arg1[0x191])
            sub_5c24e0(&arg1[0x191], edx_1, ecx_1, arg1, 0x6e6b2c)
            return 2
        
        if (*(arg1[0x291] - 4) s>= 0)
        label_5c47e9:
            
            if (arg1[0x18f] u<= &arg1[0x8f])
                sub_5c24e0(&arg1[0x8f], edx_1, ecx_1, arg1, 0x6e6b88)
                return 2
            
            int32_t* ecx_3 = *(arg1[0x18f] - 4)
            arg1[0x18f] -= 4
            
            if (ecx_3 == 0xfffffffe)
                arg1[0x85].b = 0
                return 0
            
            if (ecx_3 != 0xffffffff)
                arg1[0x82] = arg1[0x83] + ecx_3
                return 0
            
            arg1[0x8d] -= 4
            int32_t eax_16 = arg1[0x60]
            
            if (eax_16 != 0xffffffff)
                eax_16, ecx_3, edx_1 = sub_5d6460(&arg1[0x5b], eax_16)
                
                if (eax_16.b != 0)
                    arg1[0x60] = 0xffffffff
            
            sub_5c24e0(eax_16, edx_1, ecx_3, arg1, "main")
            return 0
        
        if (edi == 3)
            sub_5c0fc0(arg1)
        else if (arg2 == 0)
            goto label_5c47e9
    case 5
        sub_5c0550(arg1)
    label_5c475e:
        arg1[0x85].b = 0
        goto label_5c4765
    case 6
        goto label_5c475e

return 1
