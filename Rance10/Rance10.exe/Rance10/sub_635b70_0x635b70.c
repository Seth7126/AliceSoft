// 函数: sub_635b70
// 地址: 0x635b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745ac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[0x1f]

if (eax_3 s> 0)
    arg1[0x1f] = eax_3 - 1
    
    if (eax_3 - 1 s<= 0)
        sub_6d0967(0xc)
        noreturn

int32_t eax_5 = arg1[0x1e]

if (eax_5 s> 0)
    arg1[0x1e] = eax_5 - 1
    
    if (eax_5 - 1 s<= 0)
        sub_6d0967(0xb)
        noreturn

int32_t ebx = arg2
char var_14 = 0

if (ebx == 0)
label_635de5:
    ebx = var_14.d
else
    while (true)
        int32_t ecx = *(ebx + 4)
        
        if (ecx - 1 u> 0x14)
            sub_6d0967(0xd)
            noreturn
        
        int32_t var_4c_3
        uint8_t var_48_3
        int32_t var_44_10
        void* eax_11
        
        switch (ecx)
            case 1, 8, 9, 0x11, 0x14
                goto label_635dcc
            case 2
                int32_t ecx_1 = arg1[0x18]
                
                if ((ecx_1 & 0x101) == 1)
                    ebx.b = 1
                    break
                
                if ((ecx_1 & 0x100) == 0 && *arg1 == arg1[0x13])
                    goto label_635dcc
                
                eax_11.b = *(*arg1 - 2) != 0xa
                var_14.d = eax_11
                goto label_635dcf
            case 3
                if ((arg1[0x18].b & 2) != 0)
                    ebx.b = 1
                    break
                
                int16_t* eax_12 = *arg1
                
                if (eax_12 == arg1[0x14] || *eax_12 == 0xa)
                    goto label_635dcc
                
                ebx.b = 1
                break
            case 4
                uint32_t ecx_2 = arg1[0x18]
                int16_t* eax_13
                
                if (((ecx_2.b & 4) == 0 || *arg1 != arg1[0x13])
                        && ((ecx_2.b & 8) == 0 || *arg1 != arg1[0x14]))
                    void* eax_14 = *arg1
                    
                    if (eax_14 != arg1[0x13] || (ecx_2 & 0x100) != 0)
                        uint32_t eax_15 = zx.d(*(eax_14 - 2))
                        
                        if (eax_15 != sx.d(eax_15.b))
                            arg2:3.b = 0
                        else
                            void* eax_17
                            eax_17, ecx_2 = _strchr(
                                "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", 
                                eax_15.b)
                            arg2:3.b = 1
                            
                            if (eax_17 == 0)
                                arg2:3.b = 0
                    else
                        arg2:3.b = 0
                    
                    eax_13 = *arg1
                    
                    if (eax_13 == arg1[0x14])
                        ecx_2.b = 0
                    else
                        uint32_t eax_18 = zx.d(*eax_13)
                        
                        if (eax_18 != sx.d(eax_18.b))
                            ecx_2.b = 0
                        else
                            eax_13, ecx_2 = _strchr(
                                "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", 
                                eax_18.b)
                            
                            if (eax_13 == 0)
                                ecx_2.b = 0
                            else
                                ecx_2.b = 1
                    
                    ecx_2.b ^= arg2:3.b
                else
                    ecx_2.b = 0
                
                eax_13.b = *(ebx + 8)
                eax_13.b &= 1
                
                if (ecx_2.b != eax_13.b)
                    goto label_635dcc
                
                ebx.b = 1
                break
            case 5
                int16_t* eax_19 = *arg1
                
                if (eax_19 == arg1[0x14])
                    ebx.b = 1
                    break
                
                uint32_t ecx_3 = zx.d(*eax_19)
                
                if (ecx_3 == 0xa || ecx_3 == 0xd)
                    ebx.b = 1
                    break
                
                *arg1 = &eax_19[1]
                goto label_635dcc
            case 6
                int16_t* ecx_4 = *(ebx + 0x1c)
                void* eax_22 = &ecx_4[*(ebx + 0x18)]
                int16_t* eax_23 =
                    sub_6360d0(eax_22, arg1[0x14], *arg1, ecx_4, eax_22, arg1[0x1c], arg1[0x17])
                
                if (eax_23 == *arg1)
                    ebx.b = 1
                    break
                
                *arg1 = eax_23
                goto label_635dcc
            case 7
                if (*arg1 == arg1[0x14])
                    ebx.b = 1
                    break
                
                if (sub_637330(arg1, ebx) == 0)
                    ebx.b = 1
                    break
                
                var_14 = 0
            case 0xa, 0xb
                int32_t eax_26 = *arg1
                int32_t var_30 = eax_26
                ebx.b = ecx == 0xb
                void var_2c
                sub_4275f0(&var_2c, &arg1[1])
                int32_t eax_27 = arg1[4]
                int32_t var_20_1 = eax_27
                int32_t var_8_1 = 0
                
                if (sub_635b70(*(arg2 + 0x14)) != ebx.b)
                    *arg1 = eax_26
                else
                    *arg1 = var_30
                    arg1[4] = eax_27
                    sub_4274a0(&arg1[1], &var_2c)
                    var_14 = 1
                
                int32_t var_8_2 = 0xffffffff
                sub_56dbf0(&var_30)
                ebx = arg2
                goto label_635dcc
            case 0xc
            label_635ee7:
                ebx = 0
            label_635dcc:
                eax_11 = var_14.d
            label_635dcf:
                
                if (eax_11.b != 0)
                    goto label_635de5
            case 0xd
                *(arg1[5] + (*(ebx + 0x14) << 3)) = *arg1
                int32_t i = arg1[4]
                
                while (*(ebx + 0x14) u< i)
                    i -= 1
                    int32_t* edx_3 = arg1[1] + (i u>> 5 << 2)
                    *edx_3 &= not.d(1 << ((i & 0x1f) u% 0x20))
                
                goto label_635dcc
            case 0xe
                void* edi_2 = *(ebx + 0x14)
                
                if (*(arg1 + 0x65) != 0 || *(edi_2 + 0x14) != 0)
                    int32_t edx_4 = *(edi_2 + 0x14)
                    int32_t* ecx_18 = arg1[1] + (edx_4 u>> 5 << 2)
                    *ecx_18 |= 1 << ((edx_4 & 0x1f) u% 0x20)
                    *(arg1[5] + (*(edi_2 + 0x14) << 3) + 4) = *arg1
                
                goto label_635dcc
            case 0xf
                int32_t edi_3 = *(ebx + 0x14)
                
                if ((*(arg1[1] + (edi_3 u>> 5 << 2)) & 1 << (edi_3.b & 0x1f)) == 0)
                    goto label_635dcc
                
                int32_t eax_46 = arg1[5]
                int16_t* ecx_23 = *arg1
                int16_t* edx_8 = *(eax_46 + (edi_3 << 3))
                int32_t eax_47 = *(eax_46 + (edi_3 << 3) + 4)
                
                if (edx_8 != eax_47)
                    ecx_23 = sub_6360d0(eax_47, arg1[0x14], ecx_23, edx_8, eax_47, arg1[0x1c], 
                        arg1[0x17])
                
                if (edx_8 != eax_47 && ecx_23 == *arg1)
                    ebx.b = 1
                    break
                
                *arg1 = ecx_23
                goto label_635dcc
            case 0x10
                uint32_t ebx_2 = zx.d(var_14)
                
                if (sub_636f50(arg1, ebx) == 0)
                    ebx_2 = 1
                
                var_14.d = ebx_2
                goto label_635ee7
            case 0x12
                var_44_10 = 0
                var_48_3 = (*(ebx + 8) u>> 1).b & 1
                var_4c_3 = ebx
            label_635f06:
                char ecx_26 = var_14
                
                if (sub_637160(arg1, var_4c_3, var_48_3, var_44_10) == 0)
                    ecx_26 = 1
                
                var_14 = ecx_26
                ebx = 0
                goto label_635dcc
            case 0x13
                int32_t edx_11 = *(ebx + 0x14)
                
                if (*(edx_11 + 0x24) != 0)
                    ebx = 0
                    goto label_635dcc
                
                var_44_10 = *(arg1[0x10] + (*(edx_11 + 0x20) << 3))
                var_48_3 = (*(edx_11 + 8) u>> 1).b & 1
                var_4c_3 = edx_11
                goto label_635f06
            case 0x15
                if (((arg1[0x18] & 0x2020) != 0 && arg1[0x13] == *arg1)
                        || (arg1[0x1d].b != 0 && *arg1 != arg1[0x14]))
                    var_14 = 1
                    ebx = nullptr
                    goto label_635dcc
                
                char eax_60
                
                if (arg1[0x19].b != 0)
                    eax_60 = sub_6374a0(arg1)
                
                if (arg1[0x19].b != 0 && eax_60 == 0)
                    ebx = 0
                    goto label_635dcc
                
                sub_6364c0(&arg1[8], arg1)
                arg1[0x19].b = 1
                ebx = 0
                goto label_635dcc
        
        if (ebx == 0)
            goto label_635de5
        
        ebx = *(ebx + 0xc)
        arg2 = ebx
        
        if (ebx == 0)
            goto label_635de5

int32_t result = arg1[0x1f]

if (result s> 0)
    arg1[0x1f] = result + 1

result.b = ebx.b == 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
