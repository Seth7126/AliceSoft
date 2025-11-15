// 函数: sub_57ada0
// 地址: 0x57ada0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cd28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t eax_3

if (sub_57af50(arg1, esi, arg3, arg4, arg5, arg6).b != 0)
    arg1[4] = 0
    arg1[5] = 0xffffffff
    arg1[6] = 0xffffffff
    
    if (esi s>= 0)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = muls.dp.d(0x4da637d, arg3[2] - arg3[1])
        int32_t edx_2 = edx_1 s>> 4
        
        if (esi s< (edx_2 u>> 0x1f) + edx_2)
            int32_t ebx_1 = esi * 0x34c
            void* ebx_2 = ebx_1 + arg3[1]
            
            if (ebx_1 != neg.d(arg3[1]))
                int32_t var_18 = 0xffffffff
                int32_t var_14 = 0xffffffff
                sub_578d20(ebx_2, &var_18, &var_14)
                int32_t ebx_3 = *(ebx_2 + 0x320)
                int32_t eax_7
                
                if (ebx_3 s< 1)
                label_57af16:
                    eax_7.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_7
                
                eax_7 = var_18
                
                if (eax_7 s< 0)
                    goto label_57af16
                
                int32_t ecx_3 = var_14
                
                if (ecx_3 s< 0 || ecx_3 s<= eax_7)
                    goto label_57af16
                
                int32_t edi_1 = 0
                
                if (ebx_3 s<= 0)
                    goto label_57af16
                
                while (true)
                    int32_t* var_1c
                    sub_57c3a0(&var_1c)
                    int32_t var_8_1 = 0
                    int32_t* esi_1 = var_1c
                    int32_t ecx_6
                    eax_3, ecx_6 = sub_57af50(esi_1, esi, arg3, arg4, arg5, arg6)
                    
                    if (eax_3.b == 0)
                        if (esi_1 != 0)
                            int32_t var_34_5 = ecx_6
                            sub_57c340(esi_1)
                        
                        break
                    
                    int32_t edx_3 = var_14
                    edi_1 += 1
                    int32_t ecx_7 = var_18
                    esi_1[4] = _mm_cvtepi32_ps(zx.o((edx_3 - ecx_7) * edi_1))
                        / _mm_cvtepi32_ps(zx.o(ebx_3 + 1))
                    esi_1[5] = ecx_7
                    esi_1[6] = edx_3
                    sub_57c3d0(&arg1[7], &var_1c)
                    int32_t var_8_2 = 0xffffffff
                    int32_t* ecx_9 = var_1c
                    
                    if (ecx_9 != 0)
                        int32_t* var_34_4 = ecx_9
                        sub_57c340(ecx_9)
                    
                    esi = arg2
                    
                    if (edi_1 s>= ebx_3)
                        goto label_57af16

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
