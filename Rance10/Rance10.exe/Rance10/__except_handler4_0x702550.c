// 函数: __except_handler4
// 地址: 0x702550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2
char var_5 = 0
int32_t result = 1
int32_t* ebx_1 = *(esi + 8) ^ __security_cookie
int32_t* var_c = ebx_1
_ValidateLocalCookies(ebx_1, esi + 0x10)
int32_t var_38 = arg3

if ((arg1[1].b & 0x66) == 0)
    int32_t* var_20 = arg1
    int32_t var_1c_1 = arg3
    int32_t edi_1 = *(esi + 0xc)
    *(esi - 4) = &var_20
    
    if (edi_1 != 0xfffffffe)
        int32_t ecx_1
        
        while (true)
            int32_t eax_3 = edi_1 + ((edi_1 + 2) << 1)
            int32_t* eax_4 = &ebx_1[eax_3]
            int32_t ebx_2 = *eax_4
            
            if (ebx_1[eax_3 + 1] == 0)
                ecx_1.b = var_5
            else
                int32_t eax_5
                eax_5, ecx_1 = @_EH4_CallFilterFunc@8()
                ecx_1.b = 1
                var_5 = 1
                
                if (eax_5 s< 0)
                    ebx_1 = var_c
                    result = 0
                    goto label_702672_1
                
                if (eax_5 s> 0)
                    int32_t* eax_6 = arg1
                    
                    if (*eax_6 == 0xe06d7363)
                        if (__IsNonwritableInCurrentImage(&Concurrency::details::ThreadVirtualProcessor::`vftable'{for `Concurrency::details::VirtualProcessor'}
                                .vFunc_9) != 0)
                            int32_t var_30_1 = 1
                            j_sub_4033e0()
                            sub_6ff214(arg1)
                            esi = arg2
                        
                        eax_6 = arg1
                    
                    sub_7032ee(esi, eax_6)
                    
                    if (*(esi + 0xc) != edi_1)
                        @_EH4_LocalUnwind@16(esi, edi_1, esi + 0x10, &__security_cookie)
                    
                    *(esi + 0xc) = ebx_2
                    _ValidateLocalCookies(var_c, esi + 0x10)
                    @_EH4_TransferToHandler@8(eax_4[2], esi + 0x10)
                    breakpoint
            
            edi_1 = ebx_2
            
            if (ebx_2 == 0xfffffffe)
                break
            
            ebx_1 = var_c
        
        if (ecx_1.b != 0)
        label_702672:
            _ValidateLocalCookies(var_c, esi + 0x10)
else if (*(esi + 0xc) != 0xfffffffe)
    @_EH4_LocalUnwind@16(esi, 0xfffffffe, esi + 0x10, &__security_cookie)
label_702672_1:
    _ValidateLocalCookies(ebx_1, esi + 0x10)

return result
