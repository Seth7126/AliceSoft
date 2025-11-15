// 函数: sub_5a8e60
// 地址: 0x5a8e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f0a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_24 = edi

if (*(edi + 4) != 0)
    void* esi_2 = *arg2
    void* edx_1 = *(esi_2 + 0x220)
    
    if (edx_1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (*(edi + 0x24) != 0)
        float xmm0 = *(esi_2 + 0x178)
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = muls.dp.d(0x4da637d, *(edx_1 + 8) - *(edx_1 + 4))
        int32_t edx_3 = edx_2 s>> 4
        void* var_3c
        sub_5ab7d0(&var_3c, (edx_3 u>> 0x1f) + edx_3)
        int32_t var_8_1 = 0
        void* eax_8 = *(esi_2 + 0x220)
        int32_t eax_9
        int32_t edx_4
        edx_4:eax_9 = muls.dp.d(0x4da637d, *(eax_8 + 8) - *(eax_8 + 4))
        int32_t edx_5 = edx_4 s>> 4
        void* var_30
        sub_5ab760(&var_30, (edx_5 u>> 0x1f) + edx_5)
        var_8_1.b = 1
        void* esi_3 = *(esi_2 + 0x220)
        int32_t ebx = 0
        int32_t eax_13
        int32_t edx_6
        edx_6:eax_13 = muls.dp.d(0x4da637d, *(esi_3 + 8) - *(esi_3 + 4))
        int32_t edx_7 = edx_6 s>> 4
        void* ebx_2
        void* edi_6
        
        if ((edx_7 u>> 0x1f) + edx_7 s> 0)
            int32_t edi_1 = 0
            void* var_1c_1 = var_30
            void* var_18_1 = var_3c
            
            while (true)
                if (edi_1 s>= 0)
                    int32_t eax_18
                    int32_t edx_8
                    edx_8:eax_18 = muls.dp.d(0x4da637d, *(esi_3 + 8) - *(esi_3 + 4))
                    int32_t edx_9 = edx_8 s>> 4
                    
                    if (ebx s< (edx_9 u>> 0x1f) + edx_9)
                        void* esi_4 = *(esi_3 + 4)
                        void* esi_5 = esi_4 + edi_1
                        
                        if (esi_4 != neg.d(edi_1))
                            void var_60
                            int64_t* eax_21 = sub_579230(esi_5, &var_60)
                            *var_18_1 = *eax_21
                            *(var_18_1 + 0x10) = eax_21[2].d
                            var_18_1 += 0x14
                            ebx += 1
                            edi_1 += 0x34c
                            int128_t* eax_24 = var_1c_1
                            void var_4c
                            *eax_24 = *sub_579490(esi_5, &var_4c)
                            var_1c_1 = &eax_24[1]
                            esi_3 = *(esi_2 + 0x220)
                            int32_t eax_27
                            int32_t edx_10
                            edx_10:eax_27 = muls.dp.d(0x4da637d, *(esi_3 + 8) - *(esi_3 + 4))
                            int32_t edx_11 = edx_10 s>> 4
                            
                            if (ebx s< (edx_11 u>> 0x1f) + edx_11)
                                continue
                            
                            edi = var_24
                            break
                
                ebx_2 = var_30
                edi_6 = var_3c
                goto label_5a9108
        
        int32_t* esi_6 = *(edi + 0x28)
        int32_t eax_30 = *(edi + 0x2c)
        int32_t ebx_1 = 0
        uint32_t edi_5 = (eax_30 - esi_6 + 3) u>> 2
        
        if (esi_6 u> eax_30)
            edi_5 = 0
        
        if (edi_5 != 0)
            do
                int32_t* ecx_19 = *esi_6
                int32_t var_48 = 0
                int32_t var_44_1 = 0
                int32_t var_40_1 = 0
                sub_57b1a0(ecx_19, xmm0, arg2, *(esi_2 + 0x220), &var_48)
                ebx_1 += 1
                esi_6 = &esi_6[1]
            while (ebx_1 != edi_5)
        
        void* result = sub_5a9230(var_24, xmm0)
        ebx_2 = var_30
        edi_6 = var_3c
        
        if (result == 0)
            arg2:3.b = 1
        else
            int32_t edx_12 = *result
            
            if (sub_5af0d0(result, *arg2, edi_6 + edx_12 * 0x14, (edx_12 << 4) + ebx_2, arg3).b
                == 0)
            label_5a9108:
                arg2:3.b = 0
            else
                arg2:3.b = 1
        
        int32_t var_28
        
        if (ebx_2 != 0)
            sub_403160(ebx_2, (var_28 - ebx_2) s>> 4, 0x10)
        int32_t var_34
        
        if (edi_6 != 0)
            sub_403160(edi_6, (var_34 - edi_6) s/ 0x14, 0x14)
        result.b = arg2:3.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 1
