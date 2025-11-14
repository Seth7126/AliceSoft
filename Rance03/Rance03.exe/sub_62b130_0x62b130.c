// 函数: sub_62b130
// 地址: 0x62b130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_14
uint32_t eax_1 = __security_cookie ^ &var_14
uint32_t var_4 = eax_1

if (arg1 != 0)
    if ((*(arg1 + 0x78) & 0x40) == 0)
        sub_633c30(arg1)
    
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
                        goto label_62b1e6
                case 1
                    if ((*(arg1 + 0x118) & 7) != 0 || *(arg1 + 0x100) u< 5)
                        uint32_t eax_7 = sub_633b50(arg1)
                        sub_69a5bc(var_4 ^ &var_14)
                        return eax_7
                case 2
                    if (((*(arg1 + 0x118)).b & 7) != 4)
                        uint32_t eax_9 = sub_633b50(arg1)
                        sub_69a5bc(var_4 ^ &var_14)
                        return eax_9
                case 3
                    if ((*(arg1 + 0x118) & 3) != 0 || *(arg1 + 0x100) u< 3)
                        uint32_t eax_10 = sub_633b50(arg1)
                        sub_69a5bc(var_4 ^ &var_14)
                        return eax_10
                case 4
                    if (((*(arg1 + 0x118)).b & 3) != 2)
                        uint32_t eax_12 = sub_633b50(arg1)
                        sub_69a5bc(var_4 ^ &var_14)
                        return eax_12
                case 5
                    if ((*(arg1 + 0x118) & 1) != 0 || *(arg1 + 0x100) u< 2)
                        uint32_t eax_13 = sub_633b50(arg1)
                        sub_69a5bc(var_4 ^ &var_14)
                        return eax_13
        else if ((*(arg1 + 0x118) & 1) == 0)
        label_62b1e6:
            uint32_t eax_6 = sub_633b50(arg1)
            sub_69a5bc(var_4 ^ &var_14)
            return eax_6
    
    if ((*(arg1 + 0x74) & 4) == 0)
        sub_62a520(arg1, "Invalid attempt to read row data")
        noreturn
    
    sub_633900(ecx_2 + 1, *(arg1 + 0x124), arg1, ecx_2 + 1)
    char* ecx_24 = *(arg1 + 0x124)
    char eax_15 = *ecx_24
    
    if (eax_15 != 0)
        if (eax_15 u>= 5)
            sub_62a520(arg1, "bad adaptive filter value")
            noreturn
        
        sub_633880(&ecx_24[1], &var_10, arg1, &ecx_24[1], *(arg1 + 0x120) + 1, zx.d(eax_15))
    
    int32_t* ebx_1 = *(arg1 + 0x124)
    sub_69d850(*(arg1 + 0x120), ebx_1, ecx_2 + 1)
    
    if ((*(arg1 + 0x268) & 4) != 0 && *(arg1 + 0x26c) == 0x40)
        sub_62f9e0(&var_10, ebx_1 + 1)
    
    if (*(arg1 + 0x7c) != 0)
        sub_62caa0(arg1, &var_10)
    
    int32_t* eax_22
    eax_22.b = *(arg1 + 0x15f)
    
    if (eax_22.b == 0)
        eax_22.b = eax_4
        *(arg1 + 0x15f) = eax_22.b
        
        if (eax_22.b u> *(arg1 + 0x15e))
            sub_62a520(arg1, "sequential row overflow")
            noreturn
    else if (eax_22.b != eax_4)
        sub_62a520(arg1, "internal sequential row size calculation error")
        noreturn
    
    int32_t ecx_28
    
    if (*(arg1 + 0x154) != 0)
        ecx_28 = *(arg1 + 0x7c)
    
    if (*(arg1 + 0x154) != 0 && (ecx_28.b & 2) != 0)
        eax_22.b = *(arg1 + 0x155)
        
        if (eax_22.b u< 6)
            uint32_t eax_23 = zx.d(eax_22.b)
            eax_22 = sub_633190(eax_23, *(arg1 + 0x124) + 1, &var_10, eax_23, ecx_28)
        
        if (arg2 != 0)
            sub_632cd0(eax_22, arg2, arg1, 0)
    else if (arg2 != 0)
        sub_632cd0(eax_22, arg2, arg1, 0xffffffff)
    
    eax_1 = sub_633b50(arg1)
    int32_t ecx_32 = *(arg1 + 0x1c4)
    
    if (ecx_32 != 0)
        eax_1 = ecx_32(arg1, *(arg1 + 0x118), zx.d(*(arg1 + 0x155)))

sub_69a5bc(var_4 ^ &var_14)
return eax_1
