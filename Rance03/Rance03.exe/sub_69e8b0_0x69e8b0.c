// 函数: sub_69e8b0
// 地址: 0x69e8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_5 = 0
int32_t* edi_1 = *(arg2 + 8) ^ __security_cookie
int32_t result = 1
int32_t eax = *edi_1

if (eax != 0xfffffffe)
    sub_69a5bc((edi_1[1] + arg2 + 0x10) ^ *(eax + arg2 + 0x10))

sub_69a5bc((edi_1[3] + arg2 + 0x10) ^ *(edi_1[2] + arg2 + 0x10))

if ((arg1[1].b & 0x66) == 0)
    int32_t* var_1c = arg1
    int32_t var_18_1 = arg3
    *(arg2 - 4) = &var_1c
    int32_t i_2 = *(arg2 + 0xc)
    int32_t i_1 = i_2
    
    if (i_2 != 0xfffffffe)
        int32_t ecx_7
        int32_t i
        
        do
            void* eax_6 = &edi_1[i_2 * 3 + 4]
            i = *eax_6
            
            if (edi_1[i_2 * 3 + 5] == 0)
                ecx_7.b = var_5
            else
                int32_t eax_7
                eax_7, ecx_7 = @_EH4_CallFilterFunc@8()
                ecx_7.b = 1
                var_5 = 1
                
                if (eax_7 s< 0)
                    result = 0
                    goto label_69e9eb
                
                if (eax_7 s> 0)
                    if (*arg1 == 0xe06d7363 && __IsNonwritableInCurrentImage(&data_6d6d78) != 0)
                        int32_t var_2c_1 = 1
                        ___DestructExceptionObject(arg1)
                    
                    sub_6a71f2(arg2, arg1)
                    void* eax_10 = arg2
                    
                    if (*(eax_10 + 0xc) != i_1)
                        @_EH4_LocalUnwind@16(eax_10, i_1, arg2 + 0x10, &__security_cookie)
                        eax_10 = arg2
                    
                    *(eax_10 + 0xc) = i
                    int32_t eax_11 = *edi_1
                    
                    if (eax_11 != 0xfffffffe)
                        sub_69a5bc((edi_1[1] + arg2 + 0x10) ^ *(eax_11 + arg2 + 0x10))
                    
                    sub_69a5bc((edi_1[3] + arg2 + 0x10) ^ *(edi_1[2] + arg2 + 0x10))
                    @_EH4_TransferToHandler@8(*(eax_6 + 8), arg2 + 0x10)
                    breakpoint
            
            i_1 = i
            i_2 = i
        while (i != 0xfffffffe)
        
        if (ecx_7.b != 0)
            goto label_69e9eb
else if (*(arg2 + 0xc) != 0xfffffffe)
    @_EH4_LocalUnwind@16(arg2, 0xfffffffe, arg2 + 0x10, &__security_cookie)
label_69e9eb:
    int32_t eax_12 = *edi_1
    
    if (eax_12 != 0xfffffffe)
        sub_69a5bc((edi_1[1] + arg2 + 0x10) ^ *(eax_12 + arg2 + 0x10))
    
    sub_69a5bc((edi_1[3] + arg2 + 0x10) ^ *(edi_1[2] + arg2 + 0x10))

return result
