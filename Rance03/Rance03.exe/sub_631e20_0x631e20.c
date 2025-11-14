// 函数: sub_631e20
// 地址: 0x631e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_f8
int32_t eax_1 = __security_cookie ^ &var_f8
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 4) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_3 = sub_62a7c0(arg3, "out of place")
    sub_69a5bc(eax_1 ^ &var_f8)
    return eax_3

if (arg2 != 0 && (*(arg2 + 8) & 0x400) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_4 = sub_62a7c0(arg3, "duplicate")
    sub_69a5bc(eax_1 ^ &var_f8)
    return eax_4

char* eax_5 = sub_62fe60(eax_2, arg4 + 1, arg3, 2)

if (eax_5 == 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_6 = sub_62a7c0(arg3, "out of memory")
    sub_69a5bc(eax_1 ^ &var_f8)
    return eax_6

sub_62fc80(eax_5, eax_5, arg3, arg4)
int32_t* eax_7 = sub_62fcc0(arg3, nullptr)

if (eax_7 == 0)
    char* ebp_1 = arg4 + eax_5
    char* ecx_11 = eax_5
    *ebp_1 = eax_7.b
    
    if (*eax_5 != eax_7.b)
        do
            ecx_11 = &ecx_11[1]
        while (*ecx_11 != 0)
    
    if (ebp_1 u> &ecx_11[0xc])
        void* eax_8
        eax_8.b = ecx_11[1]
        uint32_t ebx_7 = (((((zx.d(eax_8.b) << 8) + zx.d(ecx_11[2])) << 8) + zx.d(ecx_11[3])) << 8)
            + zx.d(ecx_11[4])
        uint32_t eax_11
        eax_11.b = ecx_11[5]
        uint32_t eax_14
        eax_14.b = ecx_11[0xa]
        uint32_t var_f0_1 = (((((zx.d(eax_11.b) << 8) + zx.d(ecx_11[6])) << 8) + zx.d(ecx_11[7]))
            << 8) + zx.d(ecx_11[8])
        uint32_t edx_11
        edx_11.b = ecx_11[9]
        void* ecx_13 = &ecx_11[0xb]
        char var_f5_1 = edx_11.b
        char var_f6_1 = eax_14.b
        void* var_ec_1 = ecx_13
        
        if (edx_11.b != 0)
            if (edx_11.b == 1)
                if (eax_14.b == 3)
                    goto label_631ff4
                
                eax_7 = sub_62a7c0(arg3, "invalid parameter count")
            else if (edx_11.b != 2)
                if (edx_11.b != 3)
                    if (edx_11.b u>= 4)
                        sub_62a7c0(arg3, "unrecognized equation type")
                        eax_14.b = var_f6_1
                        ecx_13 = var_ec_1
                    
                    goto label_631ff4
                
                if (eax_14.b == 4)
                    goto label_631ff4
                
                eax_7 = sub_62a7c0(arg3, "invalid parameter count")
            else
                if (eax_14.b == 3)
                    goto label_631ff4
                
                eax_7 = sub_62a7c0(arg3, "invalid parameter count")
        else if (eax_14.b != 2)
            eax_7 = sub_62a7c0(arg3, "invalid parameter count")
        else
        label_631ff4:
            void* esi_1 = ecx_13
            
            if (*ecx_13 != 0)
                do
                    esi_1 += 1
                while (*esi_1 != 0)
            
            uint32_t edx_12 = zx.d(eax_14.b)
            int32_t eax_15 = sub_62aca0(arg3, edx_12 << 2)
            
            if (eax_15 != 0)
                int32_t eax_16 = 0
                
                if (edx_12 s<= 0)
                label_632062:
                    int32_t* eax_19 = zx.d(var_f5_1)
                    sub_634110(eax_19, arg2, arg3, eax_5, ebx_7, var_f0_1, eax_19, edx_12, 
                        var_ec_1, eax_15)
                    int32_t eax_20 = *(arg3 + 0x278)
                    
                    if (eax_20 == 0)
                        eax_7 = _free(eax_15)
                    else
                        eax_7 = eax_20(arg3, eax_15)
                else
                    while (true)
                        esi_1 += 1
                        *(eax_15 + (eax_16 << 2)) = esi_1
                        
                        if (esi_1 u> ebp_1)
                        label_63204a:
                            int32_t eax_17 = *(arg3 + 0x278)
                            int32_t eax_18
                            
                            if (eax_17 == 0)
                                eax_18 = _free(eax_15)
                            else
                                eax_18 = eax_17(arg3, eax_15)
                            
                            if ((*(arg3 + 0x78) & 0x100000) == 0)
                                sub_62a740(arg3, "invalid data")
                                noreturn
                            
                            char var_dc[0xd8]
                            sub_62a640(eax_18, &var_dc, arg3, "invalid data")
                            eax_7 = sub_62a550(arg3, &var_dc)
                            break
                        
                        while (*esi_1 != 0)
                            esi_1 += 1
                            
                            if (esi_1 u> ebp_1)
                                goto label_63204a
                        
                        eax_16 += 1
                        
                        if (eax_16 s>= edx_12)
                            goto label_632062
            else
                eax_7 = sub_62a7c0(arg3, "out of memory")
    else
        eax_7 = sub_62a7c0(arg3, "invalid")

sub_69a5bc(eax_1 ^ &var_f8)
return eax_7
