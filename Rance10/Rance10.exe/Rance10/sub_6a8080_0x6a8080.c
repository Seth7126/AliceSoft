// 函数: sub_6a8080
// 地址: 0x6a8080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* (* var_14)(uint32_t arg1, uint32_t arg2, void* arg3)
uint32_t eax_1 = __security_cookie ^ &var_14
uint32_t var_4 = eax_1

if (arg1 != 0)
    if ((*(arg1 + 0x78) & 0x40) == 0)
        sub_6b1580(arg1)
    
    int32_t edx = *(arg1 + 0x114)
    char var_8_1 = *(arg1 + 0x157)
    char var_7_1 = *(arg1 + 0x158)
    char var_6_1 = *(arg1 + 0x15b)
    char eax_4 = *(arg1 + 0x15a)
    int32_t var_10 = edx
    uint32_t ecx = zx.d(eax_4)
    uint32_t ecx_2
    
    if (eax_4 u< 8)
        ecx_2 = (ecx * edx + 7) u>> 3
    else
        ecx_2 = (ecx u>> 3) * edx
    
    if (*(arg1 + 0x154) != 0 && (*(arg1 + 0x7c) & 2) != 0)
        uint32_t eax_5 = zx.d(*(arg1 + 0x155))
        
        if (eax_5 u<= 5)
            switch (eax_5)
                case 0
                    if ((*(arg1 + 0x118) & 7) != 0)
                        goto label_6a8135
                case 1
                    if ((*(arg1 + 0x118) & 7) != 0 || *(arg1 + 0x100) u< 5)
                        uint32_t eax_7 = sub_6b14a0(arg1)
                        @__security_check_cookie@4(var_4 ^ &var_14)
                        return eax_7
                case 2
                    if (((*(arg1 + 0x118)).b & 7) != 4)
                        uint32_t eax_9 = sub_6b14a0(arg1)
                        @__security_check_cookie@4(var_4 ^ &var_14)
                        return eax_9
                case 3
                    if ((*(arg1 + 0x118) & 3) != 0 || *(arg1 + 0x100) u< 3)
                        uint32_t eax_10 = sub_6b14a0(arg1)
                        @__security_check_cookie@4(var_4 ^ &var_14)
                        return eax_10
                case 4
                    if (((*(arg1 + 0x118)).b & 3) != 2)
                        uint32_t eax_12 = sub_6b14a0(arg1)
                        @__security_check_cookie@4(var_4 ^ &var_14)
                        return eax_12
                case 5
                    if ((*(arg1 + 0x118) & 1) != 0 || *(arg1 + 0x100) u< 2)
                        uint32_t eax_13 = sub_6b14a0(arg1)
                        @__security_check_cookie@4(var_4 ^ &var_14)
                        return eax_13
        else if ((*(arg1 + 0x118) & 1) == 0)
        label_6a8135:
            uint32_t eax_6 = sub_6b14a0(arg1)
            @__security_check_cookie@4(var_4 ^ &var_14)
            return eax_6
    
    if ((*(arg1 + 0x74) & 4) == 0)
        sub_6a7500(arg1, "Invalid attempt to read row data")
        noreturn
    
    sub_6b11d0(ecx_2 + 1, *(arg1 + 0x124), arg1, ecx_2 + 1)
    char* ecx_24 = *(arg1 + 0x124)
    char eax_15 = *ecx_24
    
    if (eax_15 != 0)
        if (eax_15 u>= 5)
            sub_6a7500(arg1, "bad adaptive filter value")
            noreturn
        
        uint32_t ebx_1 = zx.d(eax_15)
        int32_t edx_3 = *(arg1 + 0x120) + 1
        
        if (ebx_1 - 1 u<= 3)
            if (*(arg1 + 0x2cc) == 0)
                void* (* eax_17)(void* arg1, char* arg2, char* arg3) = sub_6b10f0
                int32_t ecx_26 = zx.d(*(arg1 + 0x15a)) + 7
                var_14 = sub_6b1030
                *(arg1 + 0x2cc) = sub_6b0f10
                *(arg1 + 0x2d0) = sub_6b0f50
                
                if (ecx_26 u>> 3 == 1)
                    eax_17 = var_14
                
                *(arg1 + 0x2d4) = sub_6b0fd0
                *(arg1 + 0x2d8) = eax_17
            
            (*(arg1 + (ebx_1 << 2) + 0x2c8))(&var_10, &ecx_24[1], edx_3)
    
    char* ebx_2 = *(arg1 + 0x124)
    sub_700660(*(arg1 + 0x120), ebx_2, ecx_2 + 1)
    
    if ((*(arg1 + 0x268) & 4) != 0 && *(arg1 + 0x26c) == 0x40)
        sub_6acba0(&var_10, &ebx_2[1])
    
    if (*(arg1 + 0x7c) != 0)
        sub_6a9b20(arg1, &var_10)
    
    char* eax_20
    eax_20.b = *(arg1 + 0x15f)
    
    if (eax_20.b == 0)
        eax_20.b = eax_4
        *(arg1 + 0x15f) = eax_20.b
        
        if (eax_20.b u> *(arg1 + 0x15e))
            sub_6a7500(arg1, "sequential row overflow")
            noreturn
    else if (eax_20.b != eax_4)
        sub_6a7500(arg1, "internal sequential row size calculation error")
        noreturn
    
    int32_t ecx_30
    
    if (*(arg1 + 0x154) != 0)
        ecx_30 = *(arg1 + 0x7c)
    
    if (*(arg1 + 0x154) != 0 && (ecx_30.b & 2) != 0)
        eax_20.b = *(arg1 + 0x155)
        
        if (eax_20.b u< 6)
            uint32_t eax_21 = zx.d(eax_20.b)
            eax_20 = sub_6b0af0(eax_21, *(arg1 + 0x124) + 1, &var_10, eax_21, ecx_30)
        
        if (arg2 != 0)
            sub_6b0650(eax_20, arg2, arg1, 0)
    else if (arg2 != 0)
        sub_6b0650(eax_20, arg2, arg1, 0xffffffff)
    
    eax_1 = sub_6b14a0(arg1)
    int32_t ecx_34 = *(arg1 + 0x1c4)
    
    if (ecx_34 != 0)
        eax_1 = ecx_34(arg1, *(arg1 + 0x118), zx.d(*(arg1 + 0x155)))

@__security_check_cookie@4(var_4 ^ &var_14)
return eax_1
