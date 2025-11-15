// 函数: sub_5b3a90
// 地址: 0x5b3a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_38
int32_t var_4 = __security_cookie ^ &var_38
char* ecx = *(arg1 + 4)
int32_t eax_1

if (&ecx[4] u<= *(arg1 + 8))
    uint32_t esi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg1 + 4) = &ecx[4]
    sub_5b4630(arg7 + 0x34, esi_7)
    int32_t ecx_3 = *arg5 - arg5[1]
    int32_t ecx_4 = neg.d(ecx_3)
    int32_t eax_7 = *arg6 - arg6[1]
    int32_t eax_8 = neg.d(eax_7)
    int32_t eax_11 = 0x4c
    
    if (arg3 s> 0)
        eax_11 = 0x58
    
    eax_1 = 0
    
    if (arg2 s> 0)
        eax_1 = 0xc
    
    if (((sbb.d(ecx_4, ecx_4, ecx_3 != 0) & 0xc) + (sbb.d(eax_8, eax_8, eax_7 != 0) & 0xc) + eax_11
            + eax_1) * esi_7 + *(arg1 + 4) u<= *(arg1 + 8))
        int32_t edi = *(arg7 + 0x38)
        void* esi_8 = *(arg7 + 0x34)
        int32_t var_30 = edi
        void* var_2c = esi_8
        
        if (esi_8 != edi)
            void* ebx_1 = esi_8 + 0x64
            void* var_34_1 = ebx_1
            
            do
                sub_5b3de0(arg1, esi_8)
                sub_5b3de0(arg1, ebx_1 - 0x58)
                
                if (arg2 s> 0)
                    sub_5b3de0(arg1, ebx_1 - 0x4c)
                
                if (arg3 s> 0)
                    sub_5b3de0(arg1, ebx_1 - 0x40)
                
                uint32_t var_1c
                sub_5b3de0(arg1, &var_1c)
                int32_t ecx_17 = *arg4
                
                if (ecx_17 != arg4[1])
                    *(ebx_1 - 0x34) = *(ecx_17 + (var_1c << 2))
                    int32_t var_18
                    *(ebx_1 - 0x30) = *(*arg4 + (var_18 << 2))
                    int32_t var_14
                    *(ebx_1 - 0x2c) = *(*arg4 + (var_14 << 2))
                
                if (*arg5 != arg5[1])
                    uint32_t var_10
                    sub_5b3de0(arg1, &var_10)
                    *(ebx_1 - 0x34) = zx.d(*(*arg5 + var_10)) << 0x18 | (*(ebx_1 - 0x34) & 0xffffff)
                    int32_t var_c
                    *(ebx_1 - 0x30) = zx.d(*(*arg5 + var_c)) << 0x18 | (*(ebx_1 - 0x30) & 0xffffff)
                    int32_t var_8
                    *(ebx_1 - 0x2c) = zx.d(*(*arg5 + var_8)) << 0x18 | (*(ebx_1 - 0x2c) & 0xffffff)
                
                if (*arg6 != arg6[1])
                    void* eax_29 = ebx_1 - 0x28
                    
                    if (ebx_1 - 0x28 u<= ebx_1 - 0x25)
                        int32_t i = 0
                        
                        do
                            char* edx_11 = *(arg1 + 4)
                            eax_29 += 1
                            i += 1
                            uint32_t ebx_8 = ((zx.d(edx_11[3]) << 8 | zx.d(edx_11[2])) << 8
                                | zx.d(edx_11[1])) << 8 | zx.d(*edx_11)
                            *(arg1 + 4) = &edx_11[4]
                            int32_t ecx_45
                            ecx_45.b = *(ebx_8 + *arg6)
                            *(eax_29 - 1) = ecx_45.b
                        while (i != (sbb.d(ebx_1 - 0x25, ebx_1 - 0x25, ebx_1 - 0x25 u< ebx_1 - 0x28)
                            & 0xfffffffd) + 3)
                        
                        esi_8 = var_2c
                        edi = var_30
                        ebx_1 = var_34_1
                
                void* eax_30 = ebx_1 - 0x24
                
                if (ebx_1 - 0x24 != ebx_1)
                    do
                        char* edx_12 = *(arg1 + 4)
                        uint32_t ebx_15 =
                            ((zx.d(edx_12[3]) << 8 | zx.d(edx_12[2])) << 8 | zx.d(edx_12[1])) << 8
                            | zx.d(*edx_12)
                        *(arg1 + 4) = &edx_12[4]
                        *eax_30 = ebx_15
                        char* edx_13 = *(arg1 + 4)
                        uint32_t ebx_22 =
                            ((zx.d(edx_13[3]) << 8 | zx.d(edx_13[2])) << 8 | zx.d(edx_13[1])) << 8
                            | zx.d(*edx_13)
                        *(arg1 + 4) = &edx_13[4]
                        *(eax_30 + 4) = ebx_22
                        char* edx_14 = *(arg1 + 4)
                        uint32_t ebx_29 =
                            ((zx.d(edx_14[3]) << 8 | zx.d(edx_14[2])) << 8 | zx.d(edx_14[1])) << 8
                            | zx.d(*edx_14)
                        *(arg1 + 4) = &edx_14[4]
                        *(eax_30 + 8) = ebx_29
                        eax_30 += 0xc
                    while (eax_30 != var_34_1)
                    
                    edi = var_30
                    ebx_1 = var_34_1
                
                char* ecx_59 = *(arg1 + 4)
                esi_8 += 0x6c
                var_2c = esi_8
                uint32_t edx_21 =
                    ((zx.d(ecx_59[3]) << 8 | zx.d(ecx_59[2])) << 8 | zx.d(ecx_59[1])) << 8
                    | zx.d(*ecx_59)
                *(arg1 + 4) = &ecx_59[4]
                *ebx_1 = edx_21
                ebx_1 += 0x6c
                var_34_1 = ebx_1
            while (esi_8 != edi)
        
        sub_5b59b0(arg7)
        char* eax_35
        eax_35.b = 1
        @__security_check_cookie@4(var_4 ^ &var_38)
        return eax_35

eax_1.b = 0
@__security_check_cookie@4(var_4 ^ &var_38)
return eax_1
