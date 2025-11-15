// 函数: sub_634030
// 地址: 0x634030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
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
label_6342a4:
    ebx = var_14.d
else
    while (true)
        int32_t ecx = *(ebx + 4)
        
        if (ecx - 1 u> 0x14)
            sub_6d0967(0xd)
            noreturn
        
        int32_t var_50_3
        uint8_t var_4c_3
        int32_t var_48_10
        void* eax_11
        
        switch (ecx)
            case 1, 8, 9, 0x11, 0x14
                goto label_63428b
            case 2
                int32_t ecx_1 = arg1[0x18]
                
                if ((ecx_1 & 0x101) == 1)
                    ebx.b = 1
                    break
                
                if ((ecx_1 & 0x100) == 0 && *arg1 == arg1[0x13])
                    goto label_63428b
                
                eax_11.b = *(*arg1 - 2) != 0xa
                var_14.d = eax_11
                goto label_63428e
            case 3
                if ((arg1[0x18].b & 2) != 0)
                    ebx.b = 1
                    break
                
                int16_t* eax_12 = *arg1
                
                if (eax_12 == arg1[0x14] || *eax_12 == 0xa)
                    goto label_63428b
                
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
                    goto label_63428b
                
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
                goto label_63428b
            case 6
                int16_t* edx_1 = *(ebx + 0x1c)
                void* eax_22 = &edx_1[*(ebx + 0x18)]
                void var_1c
                int32_t eax_24 = *sub_634c80(eax_22, edx_1, &var_1c, *arg1, arg1[0x14], eax_22, 
                    arg1[0x1c], arg1[0x17])
                
                if (eax_24 == *arg1)
                    ebx.b = 1
                    break
                
                *arg1 = eax_24
                goto label_63428b
            case 7
                if (*arg1 == arg1[0x14])
                    ebx.b = 1
                    break
                
                int32_t var_48_4 = ebx
                
                if (sub_635570(arg1) == 0)
                    ebx.b = 1
                    break
                
                var_14 = 0
            case 0xa, 0xb
                int32_t esi_1 = *arg1
                int32_t var_34 = esi_1
                ebx.b = ecx == 0xb
                void var_30
                sub_4275f0(&var_30, &arg1[1])
                int32_t eax_28 = arg1[4]
                int32_t var_24_1 = eax_28
                int32_t var_8_1 = 0
                
                if (sub_634030(*(arg2 + 0x14)) != ebx.b)
                    *arg1 = esi_1
                else
                    *arg1 = var_34
                    arg1[4] = eax_28
                    sub_4274a0(&arg1[1], &var_30)
                    var_14 = 1
                
                int32_t var_8_2 = 0xffffffff
                sub_56dbf0(&var_34)
                ebx = arg2
                goto label_63428b
            case 0xc
            label_6343ac:
                ebx = 0
            label_63428b:
                eax_11 = var_14.d
            label_63428e:
                
                if (eax_11.b != 0)
                    goto label_6342a4
            case 0xd
                *(arg1[5] + (*(ebx + 0x14) << 3)) = *arg1
                int32_t i = arg1[4]
                
                while (*(ebx + 0x14) u< i)
                    i -= 1
                    int32_t* edx_3 = arg1[1] + (i u>> 5 << 2)
                    *edx_3 &= not.d(1 << ((i & 0x1f) u% 0x20))
                
                goto label_63428b
            case 0xe
                void* esi_2 = *(ebx + 0x14)
                
                if (*(arg1 + 0x65) != 0 || *(esi_2 + 0x14) != 0)
                    int32_t edx_4 = *(esi_2 + 0x14)
                    int32_t* ecx_18 = arg1[1] + (edx_4 u>> 5 << 2)
                    *ecx_18 |= 1 << ((edx_4 & 0x1f) u% 0x20)
                    *(arg1[5] + (*(esi_2 + 0x14) << 3) + 4) = *arg1
                
                goto label_63428b
            case 0xf
                int32_t esi_3 = *(ebx + 0x14)
                
                if ((*(arg1[1] + (esi_3 u>> 5 << 2)) & 1 << (esi_3.b & 0x1f)) == 0)
                    goto label_63428b
                
                int16_t* eax_45 = *arg1
                int32_t* edx_8 = arg1[5] + (esi_3 << 3)
                void* ecx_24 = *edx_8
                int32_t edx_9 = edx_8[1]
                void var_20
                
                if (ecx_24 != edx_9)
                    eax_45 = *sub_635fe0(eax_45, arg1[0x1c], &var_20, eax_45, arg1[0x14], ecx_24, 
                        edx_9, arg1[0x17])
                
                if (ecx_24 != edx_9 && eax_45 == *arg1)
                    ebx.b = 1
                    break
                
                *arg1 = eax_45
                goto label_63428b
            case 0x10
                uint32_t ebx_2 = zx.d(var_14)
                
                if (sub_635190(arg1, ebx) == 0)
                    ebx_2 = 1
                
                var_14.d = ebx_2
                goto label_6343ac
            case 0x12
                var_48_10 = 0
                var_4c_3 = (*(ebx + 8) u>> 1).b & 1
                var_50_3 = ebx
            label_6343cb:
                char ecx_28 = var_14
                
                if (sub_6353a0(arg1, var_50_3, var_4c_3, var_48_10) == 0)
                    ecx_28 = 1
                
                var_14 = ecx_28
                ebx = 0
                goto label_63428b
            case 0x13
                int32_t edx_12 = *(ebx + 0x14)
                
                if (*(edx_12 + 0x24) != 0)
                    ebx = 0
                    goto label_63428b
                
                var_48_10 = *(arg1[0x10] + (*(edx_12 + 0x20) << 3))
                var_4c_3 = (*(edx_12 + 8) u>> 1).b & 1
                var_50_3 = edx_12
                goto label_6343cb
            case 0x15
                if (((arg1[0x18] & 0x2020) != 0 && arg1[0x13] == *arg1)
                        || (arg1[0x1d].b != 0 && *arg1 != arg1[0x14]))
                    var_14 = 1
                    ebx = nullptr
                    goto label_63428b
                
                char eax_58
                
                if (arg1[0x19].b != 0)
                    eax_58 = sub_6356e0(arg1)
                
                if (arg1[0x19].b != 0 && eax_58 == 0)
                    ebx = 0
                    goto label_63428b
                
                sub_634ff0(&arg1[8], arg1)
                arg1[0x19].b = 1
                ebx = 0
                goto label_63428b
        
        if (ebx == 0)
            goto label_6342a4
        
        ebx = *(ebx + 0xc)
        arg2 = ebx
        
        if (ebx == 0)
            goto label_6342a4

int32_t result = arg1[0x1f]

if (result s> 0)
    arg1[0x1f] = result + 1

result.b = ebx.b == 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
