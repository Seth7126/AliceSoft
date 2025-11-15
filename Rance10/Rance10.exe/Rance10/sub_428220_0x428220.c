// 函数: sub_428220
// 地址: 0x428220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x28) == 0)
    *(arg1 + 0x28) = 1
    
    if (*(arg1 + 0x34) != *(arg1 + 0x38))
        result.b = 1
    else
        result = *(arg1 + 0x1c)
        
        if (result == *(arg1 + 0x20))
            result.b = 1
        else
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = muls.dp.d(0x66666667, *(arg1 + 0x20) - result)
            int32_t edx_2 = edx_1 s>> 4
            void var_58
            sub_42cbc0(&var_58, result, &result[((edx_2 u>> 0x1f) + edx_2) * 0xa])
            int32_t var_8_1 = 0
            void* var_2c
            int32_t var_24
            int32_t* ebx_1
            
            if (var_2c == var_24)
            label_428305:
                ebx_1.b = 1
            else
                while (true)
                    struct advengine::CLineSyntax::VTable** eax_11 = sub_6e810c(8)
                    void* var_5c = eax_11
                    var_5c = eax_11
                    *eax_11 = &advengine::CLineSyntax::`vftable'
                    eax_11[1] = 0
                    
                    if (sub_42abb0(eax_11, &var_58, arg1 + 0x40, arg3) == 0)
                        (*eax_11)->char_traits<wchar_t> >(1)
                        int32_t* esi_3 = *(arg1 + 0x34)
                        int32_t eax_15 = *(arg1 + 0x38)
                        int32_t edi_2 = 0
                        uint32_t ebx_5 = (eax_15 - esi_3 + 3) u>> 2
                        
                        if (esi_3 u> eax_15)
                            ebx_5 = 0
                        
                        if (ebx_5 != 0)
                            do
                                int32_t* ecx_10 = *esi_3
                                
                                if (ecx_10 != 0)
                                    (**ecx_10)(1)
                                
                                edi_2 += 1
                                esi_3 = &esi_3[1]
                            while (edi_2 != ebx_5)
                        
                        *(arg1 + 0x38) = *(arg1 + 0x34)
                        void* ecx_12 = var_2c
                        void* esi_4
                        void var_54
                        
                        if (ecx_12 != var_24)
                            esi_4 = ecx_12
                            ecx_12 += 0x28
                            var_2c = ecx_12
                        else
                            esi_4 = &var_54
                        arg2[1] = *(esi_4 + 4)
                        
                        if (&arg2[2] != esi_4 + 8)
                            sub_403590(&arg2[2], esi_4 + 8, 0, 0xffffffff)
                            ecx_12 = var_2c
                        
                        arg2[8] = *(esi_4 + 0x20)
                        arg2[9] = *(esi_4 + 0x24)
                        int32_t var_28
                        
                        if (ecx_12 != var_28)
                            void* var_2c_1 = ecx_12 - 0x28
                        
                        ebx_1.b = 0
                        break
                    
                    sub_428f00(arg1 + 0x34, &var_5c)
                    
                    if (var_2c == var_24)
                        goto label_428305
            
            sub_42cc30(&var_58)
            result.b = ebx_1.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
