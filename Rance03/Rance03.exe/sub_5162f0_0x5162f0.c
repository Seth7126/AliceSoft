// 函数: sub_5162f0
// 地址: 0x5162f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c252b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0xc8) != *(arg1 + 0xcc))
    result = *(arg1 + 0xd4)
    
    if (result == *(arg1 + 0xd8))
        int32_t ebx_1 = *(arg1 + 0xcc)
        void* edi_1 = *(arg1 + 0xc8)
        int32_t var_10_1 = ebx_1
        
        if (edi_1 != ebx_1)
            void* ecx = arg1
            
            do
                void** i = *(ecx + 0xb0)
                
                if (i != *(ecx + 0xb4))
                    do
                        result = (i - *(ecx + 0xb0)) s>> 2
                        
                        if (result s>= *(edi_1 + 4))
                            if (*(edi_1 + 0xc) s< result)
                                break
                            
                            struct partsengine::CLLSprite::VTable** eax_7 = sub_69adc6(0x1c)
                            struct partsengine::CLLSprite::VTable** var_18_1 = eax_7
                            int32_t var_4 = 0
                            int32_t* result_1
                            int32_t* result_3
                            
                            if (eax_7 == 0)
                                result_3 = nullptr
                                result_1 = nullptr
                            else
                                struct partsengine::CLLSprite::VTable** result_2 = sub_505680(eax_7)
                                result_3 = result_2
                                result_1 = result_2
                            
                            int32_t var_4_1 = 0xffffffff
                            int32_t eax_8 = *(arg1 + 0xd8)
                            int32_t* result_6 = result_3
                            
                            if (&result_6 u>= eax_8 || *(arg1 + 0xd4) u> &result_6)
                                if (eax_8 == *(arg1 + 0xdc))
                                    int32_t* result_5 = result_3
                                    sub_412f20(arg1 + 0xd4)
                                    result_3 = result_1
                                
                                int32_t** eax_12 = *(arg1 + 0xd8)
                                
                                if (eax_12 != 0)
                                    *eax_12 = result_3
                            else
                                int32_t edx_2 = (&result_6 - *(arg1 + 0xd4)) s>> 2
                                
                                if (eax_8 == *(arg1 + 0xdc))
                                    int32_t* result_4 = result_3
                                    sub_412f20(arg1 + 0xd4)
                                    result_3 = result_1
                                
                                int32_t* eax_9 = *(arg1 + 0xd8)
                                
                                if (eax_9 != 0)
                                    *eax_9 = *(*(arg1 + 0xd4) + (edx_2 << 2))
                            
                            *(arg1 + 0xd8) += 4
                            void* eax_14 = *(*i + 4)
                            
                            if (eax_14 != 0)
                                eax_14 = *(eax_14 + 0x18)
                            
                            sub_505b50(result_3, eax_14 + arg3, arg4, *(edi_1 + 0x10), 
                                *(edi_1 + 0x14), *(edi_1 + 0x18), 0xff)
                            void* eax_17 = *(*i + 4)
                            int32_t xmm0_1
                            
                            if (eax_17 != 0)
                                xmm0_1 = *(eax_17 + 0xc)
                            else
                                xmm0_1 = (zx.o(0)).d
                            
                            result = result_1
                            void* ecx_4 = result[1]
                            
                            if (ecx_4 != 0)
                                *(ecx_4 + 0xc) = xmm0_1
                                result = result[1]
                                result[4] = arg2
                            
                            ecx = arg1
                        
                        i = &i[1]
                    while (i != *(ecx + 0xb4))
                    
                    ebx_1 = var_10_1
                
                edi_1 += 0x1c
            while (edi_1 != ebx_1)
else
    result = sub_4b51e0(arg1 + 0xd4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
