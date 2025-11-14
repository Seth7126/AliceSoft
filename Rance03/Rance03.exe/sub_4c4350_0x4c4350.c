// 函数: sub_4c4350
// 地址: 0x4c4350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6be558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_485bc0(arg1 + 4, arg3, 0)
int32_t result = sub_4c8700(arg1 - 4)

if (result.b == 0)
    int32_t eax_6 = sub_4c75f0(arg1 + 0xb4)
    int32_t eax_8
    int32_t ecx_2
    eax_8, ecx_2 = sub_4c75f0(arg1 + 0xcc)
    char var_64
    int32_t var_4c
    
    if (arg3 == 0x25)
        if (eax_6 s> 0)
            char* eax_9 = sub_4c8830(&var_4c, arg1 + 0xb4)
            int32_t var_c_1 = 0
            sub_408340(arg1 + 0xcc, sub_410ad0(eax_9, eax_9, &var_64, arg1 + 0xcc))
            int32_t var_50
            
            if (var_50 u>= 0x10)
                j__free(var_64.d)
            
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            goto label_4c446a
        
        result = sub_4c8060(arg1 - 4)
    else if (arg3 == 0x27)
        if (eax_8 s> 0)
            int32_t var_c_2 = 1
            sub_403110(arg1 + 0xb4, sub_4c8a00(&var_4c, arg1 + 0xcc), nullptr, 0xffffffff)
        label_4c446a:
            int32_t var_c_3 = 0xffffffff
            int32_t var_38
            
            if (var_38 u>= 0x10)
                j__free(var_4c)
            
            goto label_4c4588
        
        result = sub_4c8060(arg1 - 4)
    else if (arg3 != 0x26)
        if (arg3 == 0x28)
            if (eax_8 s> 0)
                sub_4c7bc0(arg1 - 4)
                goto label_4c4588
            
            result = sub_4c8060(arg1 - 4)
        else if (arg3 == 0x24)
            if (eax_6 s> 0)
                if (*(arg1 + 0xa1) == 0)
                    sub_4c8d60(arg1 + 0xb4, arg1 + 0xcc)
                else
                    sub_408340(arg1 + 0xcc, sub_40d1c0(eax_8, arg1 + 0xb4, &var_4c, arg1 + 0xcc))
                    sub_401fb0(&var_4c)
                    sub_402670(arg1 + 0xb4, 0x6da4a7)
                
                goto label_4c4588
            
            result = sub_4c8060(arg1 - 4)
        else if (arg3 == 0x23)
            if (eax_8 s> 0)
                if (*(arg1 + 0xa1) == 0)
                    sub_4c8ed0(ecx_2, arg1 + 0xb4, arg1 + 0xcc)
                else
                    sub_408340(arg1 + 0xb4, sub_40d1c0(eax_8, arg1 + 0xb4, &var_4c, arg1 + 0xcc))
                    sub_401fb0(&var_4c)
                    sub_402670(arg1 + 0xcc, 0x6da4ad)
                
                goto label_4c4588
            
            result = sub_4c8060(arg1 - 4)
        else
            int32_t eax_16
            int32_t edx_8
            
            if (arg3 == 8)
                eax_8.b = *(arg1 + 0x13c)
                
                if (eax_8.b != 0)
                    result = sub_4c8060(arg1 - 4)
                else
                    eax_16 = *(arg1 + 0xa4)
                    
                    if (eax_16 == 0xffffffff)
                        sub_4c8830(&var_64, arg1 + 0xb4)
                        int32_t var_c_4 = 2
                        sub_403110(arg1 + 0xb4, &var_64, nullptr, 0xffffffff)
                        edx_8 = eax_6
                        int32_t var_80_15 = edx_8 - sub_4c75f0(&var_64)
                    label_4c45f5:
                        int32_t var_84_6 = edx_8
                        sub_4c6cf0(arg1 - 4)
                        int32_t var_c_5 = 0xffffffff
                        sub_401fb0(&var_64)
                        goto label_4c460f
                    
                label_4c46bd:
                    int32_t var_80_21 = eax_6
                    int32_t var_84_8 = eax_16
                    sub_4c6cf0(arg1 - 4)
                label_4c460f:
                    *(arg1 + 0xa4) = 0xffffffff
                    *(arg1 + 0xa8) = 0xffffffff
                    result = sub_4c8060(arg1 - 4)
            else
                void var_34
                
                if (arg3 == 0x2e)
                    eax_8.b = *(arg1 + 0x13c)
                    
                    if (eax_8.b == 0)
                        eax_16 = *(arg1 + 0xa4)
                        
                        if (eax_16 != 0xffffffff)
                            goto label_4c46bd
                        
                        int32_t var_c_6 = 3
                        sub_408340(arg1 + 0xcc, 
                            sub_40d1c0(sub_4c8a00(&var_64, arg1 + 0xcc), &var_64, &var_34, 
                                arg1 + 0xcc))
                        sub_401fb0(&var_34)
                        edx_8 = eax_6
                        int32_t var_80_20 = sub_4c75f0(&var_64) + edx_8
                        goto label_4c45f5
                    
                    result = sub_4c8060(arg1 - 4)
                else if (arg3 == 0xd)
                    eax_8.b = *(arg1 + 0x13c)
                    
                    if (eax_8.b == 0)
                        sub_401f60(&var_34, U"\n\n\n")
                        int32_t var_c_7 = 4
                        sub_4c7220(arg1 - 4, &var_34)
                        int32_t var_c_8 = 0xffffffff
                        sub_401fb0(&var_34)
                    
                    result = sub_4c8060(arg1 - 4)
                else if (arg3 == 0x43)
                    if (*(arg1 + 0xa1) != 0)
                        sub_4c8490(arg1 - 4)
                    
                    result = sub_4c8060(arg1 - 4)
                else if (arg3 == 0x58)
                    if (*(arg1 + 0xa1) != 0 && *(arg1 + 0x13c) == 0)
                        sub_4c85c0(arg1 - 4)
                    
                    result = sub_4c8060(arg1 - 4)
                else if (arg3 == 0x56)
                    if (*(arg1 + 0xa1) != 0 && *(arg1 + 0x13c) == 0)
                        sub_4c8610(arg1 - 4)
                    
                    result = sub_4c8060(arg1 - 4)
                else if (arg3 == 0x41)
                    if (*(arg1 + 0xa1) != 0)
                        *(arg1 + 0xa4) = 0
                        sub_403110(arg1 + 0xb4, arg1 + 0xcc, nullptr, 0xffffffff)
                        sub_402670(arg1 + 0xcc, 0x6da4ba)
                        sub_4c1f00(arg1 + 0xfc, arg1 + 0xb4)
                    
                    result = sub_4c8060(arg1 - 4)
                else if (arg3 != 1)
                    result = sub_4c8060(arg1 - 4)
                else
                    int32_t eax_23 = *(arg1 + 0x90)
                    
                    if (eax_23 == 0)
                        result = 0
                    else
                        result = eax_23 + 8
                    
                    if (arg2 != result)
                        int32_t eax_24 = *(arg1 + 0x94)
                        
                        if (eax_24 == 0)
                            result = 0
                        else
                            result = eax_24 + 8
                        
                        if (arg2 != result)
                            *(arg1 + 0xac) = 0
    else if (eax_6 s<= 0)
        result = sub_4c8060(arg1 - 4)
    else
        sub_4c7640(arg1 - 4)
    label_4c4588:
        
        if (*(arg1 + 0xa0) == 0)
            goto label_4c460f
        
        result = sub_4c8060(arg1 - 4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
