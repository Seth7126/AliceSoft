// 函数: sub_100047ac
// 地址: 0x100047ac
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_8 = ecx
int32_t* eax = sub_10009f7a(arg1)
int32_t eax_1 = arg1[3]

if ((eax_1.b & 0x82) != 0)
    if ((eax_1.b & 0x40) == 0)
        if ((eax_1.b & 1) != 0)
            arg1[1] = 0
            
            if ((eax_1.b & 0x10) == 0)
                arg1[3] = eax_1 | 0x20
                return 0xffffffff
            
            *arg1 = arg1[2]
            arg1[3] = eax_1 & 0xfffffffe
        
        int32_t eax_7 = (arg1[3] & 0xffffffef) | 2
        arg1[3] = eax_7
        arg1[1] = 0
        void* var_8_1 = nullptr
        
        if ((eax_7 & 0x10c) == 0)
            int32_t eax_8
            
            if (arg1 == &data_10020ab0 || arg1 == &data_10020ad0)
                eax_8 = sub_10009d61(eax)
            
            if ((arg1 != &data_10020ab0 && arg1 != &data_10020ad0) || eax_8 == 0)
                sub_10009d18(arg1)
        
        int32_t edi
        int32_t var_14_3 = edi
        uint32_t result
        int32_t arg_4
        uint32_t edi_2
        
        if ((arg1[3] & 0x108) == 0)
            edi_2 = 1
            var_8_1 = sub_10009c3c(eax, &arg_4, 1)
        label_100048f5:
            
            if (var_8_1 == edi_2)
                result = zx.d(arg_4.b)
            else
                arg1[3] |= 0x20
                result = 0xffffffff
        else
            char* eax_9 = arg1[2]
            int32_t edi_1 = *arg1
            *arg1 = &eax_9[1]
            edi_2 = edi_1 - eax_9
            arg1[1] = arg1[6] - 1
            int32_t* ecx_8
            
            if (edi_2 s> 0)
                void* eax_10
                eax_10, ecx_8 = sub_10009c3c(eax, eax_9, edi_2)
                var_8_1 = eax_10
            label_100048d8:
                ecx_8.b = arg_4.b
                *arg1[2] = ecx_8.b
                goto label_100048f5
            
            void* eax_15
            
            if (eax == 0xffffffff || eax == 0xfffffffe)
                eax_15 = &data_100202b0
            else
                eax_15 = ((eax & 0x1f) << 6) + (&data_10023540)[eax s>> 5]
            
            if ((*(eax_15 + 4) & 0x20) == 0)
                goto label_100048d8
            
            uint32_t eax_16
            int32_t edx_3
            eax_16, ecx_8, edx_3 = sub_100093f0(eax, 0, 0, FILE_END)
            
            if ((eax_16 & edx_3) != 0xffffffff)
                goto label_100048d8
            
            arg1[3] |= 0x20
            result = 0xffffffff
        return result
    
    *__errno() = 0x22
else
    *__errno() = 9

arg1[3] |= 0x20
return 0xffffffff
