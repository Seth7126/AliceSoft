// 函数: sub_465bf0
// 地址: 0x465bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

while (true)
    int32_t* edi_2
    
    if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
        edi_2 = nullptr
    else
        void* eax_6 = **(arg2 + 0x24)
        *(arg2 + 0x24) = eax_6
        
        if (*(arg2 + 0x20) == 0 || eax_6 == *(arg2 + 0x1c))
            edi_2 = nullptr
        else
            edi_2 = eax_6 + 8
    
    char var_2c
    char* var_18
    void* var_5c
    int32_t* eax_61
    int32_t* esi_2
    
    if (edi_2 == 0)
        var_18 = 0xf
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x75e70c, 0x34)
        int32_t var_8_16 = 0
        esi_2 = *(arg1 + 4)
        eax_61 = sub_4175e0(arg1, &var_2c, &var_5c, U"\n")
        var_8_16.b = 1
    label_466258:
        sub_4055a0(esi_2, eax_61, 0, 0xffffffff)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            int32_t var_80_16 = 1
            sub_403160(var_5c, var_48 + 1, 1)
    else if (edi_2[0xc] != 2)
        var_18 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x75e6ec, 0x1c)
        int32_t var_8_15 = 2
        sub_45ebd0(*(arg1 + 4), &var_2c, edi_2)
    else
        char var_61_1 = 0
        int32_t* ecx
        
        if (edi_2[5] u< 0x10)
            ecx = edi_2
        else
            ecx = *edi_2
        
        int32_t ebx_1 = edi_2[4]
        int32_t eax_7 = 3
        
        if (ebx_1 u< 3)
            eax_7 = ebx_1
        
        int32_t eax_8 = sub_406ac0(eax_7, 0x75e76c, ecx, eax_7)
        
        if (eax_8 != 0)
            goto label_465cd9
        
        int32_t var_68_1
        
        if (ebx_1 u< 3)
            var_68_1 = eax_8
            goto label_465ce0
        
        if (ebx_1 u> 3)
            goto label_465cd9
        
        if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
            edi_2 = nullptr
        else
            void* eax_11 = **(arg2 + 0x24)
            *(arg2 + 0x24) = eax_11
            
            if (*(arg2 + 0x20) == 0 || eax_11 == *(arg2 + 0x1c))
                edi_2 = nullptr
            else
                edi_2 = eax_11 + 8
        
        void* var_44
        
        if (edi_2 == 0)
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_403490(&var_2c, 0x75e744, 0x27)
            int32_t var_8_2 = 3
            var_8_2.b = 4
            sub_4055a0(*(arg1 + 4), sub_4175e0(arg1, &var_2c, &var_44, U"\n"), 0, 0xffffffff)
            int32_t var_30
            
            if (var_30 u>= 0x10)
                int32_t var_80_8 = 1
                sub_403160(var_44, var_30 + 1, 1)
        else
            var_61_1 = 1
        label_465cd9:
            var_68_1 = 0
        label_465ce0:
            int32_t* ecx_1
            
            if (edi_2[5] u< 0x10)
                ecx_1 = edi_2
            else
                ecx_1 = *edi_2
            
            int32_t ebx_2 = edi_2[4]
            int32_t eax_12 = 3
            
            if (ebx_2 u< 3)
                eax_12 = ebx_2
            
            int32_t var_68_2
            
            if (sub_406ac0(eax_12, 0x75e8dc, ecx_1, eax_12) != 0 || ebx_2 u< 3 || ebx_2 u> 3)
                int32_t* ecx_2
                
                if (edi_2[5] u< 0x10)
                    ecx_2 = edi_2
                else
                    ecx_2 = *edi_2
                
                int32_t eax_14 = 5
                
                if (ebx_2 u< 5)
                    eax_14 = ebx_2
                
                if (sub_406ac0(eax_14, "float", ecx_2, eax_14) != 0 || ebx_2 u< 5 || ebx_2 u> 5)
                    int32_t eax_17 = var_68_1
                    
                    if (sub_407560(edi_2, "string") != 0)
                        eax_17 = 3
                    
                    var_68_2 = eax_17
                else
                    var_68_2 = 2
            else
                var_68_2 = 1
            
            if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                edi_2 = nullptr
            else
                void* eax_20 = **(arg2 + 0x24)
                *(arg2 + 0x24) = eax_20
                
                if (*(arg2 + 0x20) == 0 || eax_20 == *(arg2 + 0x1c))
                    edi_2 = nullptr
                else
                    edi_2 = eax_20 + 8
            
            if (edi_2 == 0)
                var_18 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x75e8e0, 0x26)
                int32_t var_8_14 = 5
                esi_2 = *(arg1 + 4)
                eax_61 = sub_4175e0(arg1, &var_2c, &var_5c, U"\n")
                var_8_14.b = 6
                goto label_466258
            
            int32_t eax_21 = edi_2[0xc]
            
            if (eax_21 == 0x13 || eax_21 == 0x12)
                char eax_22 = sub_46b530(arg3, edi_2)
                
                if (eax_22 == 0)
                    if (var_61_1 == eax_22)
                    label_465dd8:
                        struct exfile::CFormatData::VTable** eax_24 = sub_46b3a0(arg3, edi_2)
                        *(eax_24 + 5) = var_61_1
                        
                        if (*(arg2 + 0x20) == 0)
                            edi_2 = nullptr
                        else
                            int32_t ecx_7 = *(arg2 + 0x1c)
                            
                            if (*(arg2 + 0x24) == ecx_7)
                                edi_2 = nullptr
                            else
                                void* eax_26 = **(arg2 + 0x24)
                                *(arg2 + 0x24) = eax_26
                                
                                if (*(arg2 + 0x20) == 0 || eax_26 == ecx_7)
                                    edi_2 = nullptr
                                else
                                    edi_2 = eax_26 + 8
                        
                        if (edi_2 == 0)
                            sub_403360(&var_44, 0x75e868)
                            int32_t var_8_12 = 0xa
                            sub_45eb40(*(arg1 + 4), &var_44)
                            sub_403320(&var_44)
                            break
                        
                        int32_t eax_27 = edi_2[0xc]
                        
                        if (eax_27 == 0xc)
                            eax_24[1].b = 1
                            
                            if (var_61_1 != 0)
                                sub_403360(&var_44, 0x75e9ec)
                                int32_t var_8_8 = 0xb
                            else
                                int32_t eax_31
                                
                                if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                                    eax_31 = 0
                                else
                                    int32_t eax_30 = **(arg2 + 0x24)
                                    *(arg2 + 0x24) = eax_30
                                    
                                    if (*(arg2 + 0x20) == 0 || eax_30 == *(arg2 + 0x1c))
                                        eax_31 = 0
                                    else
                                        eax_31 = eax_30 + 8
                                
                                if (eax_31 == 0)
                                    sub_403360(&var_44, 0x75e9d8)
                                    int32_t var_8_7 = 0xc
                                    sub_45eb40(*(arg1 + 4), &var_44)
                                    sub_403320(&var_44)
                                    break
                                
                                if (sub_468150(arg1, eax_24, arg2, var_68_2).b == 0)
                                    break
                                
                                result.b = *(eax_24 + 5)
                                
                                if (result.b != 0)
                                    int32_t edi_6 = 0
                                    int32_t ebx_7 = (*(arg3 + 8) - *(arg3 + 4)) s>> 2
                                    
                                    if (ebx_7 s> 0)
                                        do
                                            void* eax_33
                                            eax_33.b = *(sub_46b760(arg3, edi_6) + 5)
                                            
                                            if (eax_33.b != 0)
                                                sub_403360(&var_44, 0x75ea54)
                                                int32_t var_8_5 = 0xd
                                                sub_45eb40(*(arg1 + 4), &var_44)
                                                sub_403320(&var_44)
                                                goto label_46628b
                                            
                                            edi_6 += 1
                                        while (edi_6 s< ebx_7)
                                
                                if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                                    edi_2 = nullptr
                                else
                                    void* eax_36 = **(arg2 + 0x24)
                                    *(arg2 + 0x24) = eax_36
                                    
                                    if (*(arg2 + 0x20) == 0 || eax_36 == *(arg2 + 0x1c))
                                        edi_2 = nullptr
                                    else
                                        edi_2 = eax_36 + 8
                                
                                if (edi_2 == 0)
                                    sub_403360(&var_44, 0x75ea14)
                                    int32_t var_8_6 = 0xe
                                    sub_45eb40(*(arg1 + 4), &var_44)
                                    sub_403320(&var_44)
                                    break
                                
                                int32_t eax_37 = edi_2[0xc]
                                
                                if (eax_37 == 7)
                                    goto label_465f23
                                
                                if (eax_37 == 5)
                                    continue
                                else
                                    sub_403360(&var_44, 0x75e930)
                                    int32_t var_8_1 = 0xf
                        else if (eax_27 == 5 || eax_27 == 7)
                            eax_24[2] = var_68_2
                            
                            if (edi_2[0xc] != 7)
                                continue
                            else
                            label_465f23:
                                int32_t ecx_11 = 0
                                
                                if ((*(arg3 + 8) - *(arg3 + 4)) s>> 2 s<= 0)
                                label_466106:
                                    sub_403360(&var_5c, 0x75e970)
                                    int32_t var_8_10 = 0x12
                                    sub_45ebd0(*(arg1 + 4), &var_5c, edi_2)
                                    sub_403320(&var_5c)
                                    break
                                
                                while (true)
                                    if (ecx_11 s< 0)
                                        result = nullptr
                                    else if ((*(arg3 + 8) - *(arg3 + 4)) s>> 2 s> ecx_11)
                                        result = *(*(arg3 + 4) + (ecx_11 << 2))
                                    else
                                        result = nullptr
                                    
                                    if (result == 0)
                                        sub_403360(&var_44, 0x75e9b8)
                                        int32_t var_8_11 = 0x11
                                        break
                                    
                                    result.b = result[4]
                                    
                                    if (result.b == 0)
                                        result.b = 1
                                        goto label_466290
                                    
                                    ecx_11 += 1
                                    
                                    if (ecx_11 s>= (*(arg3 + 8) - *(arg3 + 4)) s>> 2)
                                        goto label_466106
                        else
                            sub_403360(&var_44, 0x75e910)
                            int32_t var_8_9 = 0x10
                    else
                        if (sub_46b620(arg3) == 0)
                            goto label_465dd8
                        
                        sub_403360(&var_44, 0x75e89c)
                        int32_t var_8_4 = 9
                    
                    sub_45ebd0(*(arg1 + 4), &var_44, edi_2)
                    sub_403320(&var_44)
                    break
                
                sub_403360(&var_2c, 0x75e818)
                int32_t var_8_13 = 8
            else
                sub_403360(&var_2c, 0x75e844)
                int32_t var_8_3 = 7
            
            sub_45ebd0(*(arg1 + 4), &var_2c, edi_2)
    
    if (var_18 u< 0x10)
        break
    
    sub_403160(var_2c.d, &var_18[1], 1)
    break

label_46628b:
result.b = 0
label_466290:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
