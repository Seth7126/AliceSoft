// 函数: sub_5be960
// 地址: 0x5be960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t* edi = arg2
char* edx = edi[1]

if (&edx[4] u> edi[2])
    int32_t eax
    eax.b = 0
    return eax

int32_t ebx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
edi[1] = &edx[4]
uint32_t* eax_3

if (ebx_6 s> 0)
    uint32_t* var_2c_1 = arg2
    void* esi_1 = arg1 + 0xb4
    void* var_30_1 = arg1
    void* var_4_1 = esi_1
    sub_5bf8f0(*esi_1, *(arg1 + 0xb8))
    *(esi_1 + 4) = *esi_1
    sub_5dbc20(esi_1, ebx_6)
    arg2 = nullptr
    
    if (ebx_6 s> 0)
        int32_t ecx_2 = 0
        int32_t var_18_1 = 0
        
        while (true)
            char* esi_2 = edi[1]
            int32_t* edx_3 = *esi_1 + ecx_2
            
            if (&esi_2[4] u> edi[2])
            label_5beb0f:
                eax_3.b = 0
                return eax_3
            
            int32_t ecx_9 =
                ((zx.d(esi_2[3]) << 8 | zx.d(esi_2[2])) << 8 | zx.d(esi_2[1])) << 8 | zx.d(*esi_2)
            edi[1] = &esi_2[4]
            edx_3[5] = ecx_9
            char* esi_3 = edi[1]
            
            if (&esi_3[4] u> edi[2])
                goto label_5beb0f
            
            int32_t ecx_16 =
                ((zx.d(esi_3[3]) << 8 | zx.d(esi_3[2])) << 8 | zx.d(esi_3[1])) << 8 | zx.d(*esi_3)
            edi[1] = &esi_3[4]
            edx_3[4] = ecx_16
            char* ecx_17 = edi[1]
            
            if (&ecx_17[4] u> edi[2])
                goto label_5beb0f
            
            int32_t ebx_15 = ((zx.d(ecx_17[3]) << 8 | zx.d(ecx_17[2])) << 8 | zx.d(ecx_17[1])) << 8
                | zx.d(*ecx_17)
            edi[1] = &ecx_17[4]
            
            if (ebx_15 s> 0)
                int32_t ebp_1 = 0
                
                if (ebx_15 s> 0)
                    do
                        char* ecx_19 = edi[1]
                        
                        if (&ecx_19[4] u> edi[2])
                            goto label_5beb0f
                        
                        uint32_t esi_10 =
                            ((zx.d(ecx_19[3]) << 8 | zx.d(ecx_19[2])) << 8 | zx.d(ecx_19[1])) << 8
                            | zx.d(*ecx_19)
                        edi[1] = &ecx_19[4]
                        uint32_t var_c
                        
                        if (sub_468b20(edi, &var_c).b == 0)
                            goto label_5beb0f
                        
                        uint32_t var_14 = esi_10
                        eax_3 = sub_42f350(edx_3, &var_14)
                        ebp_1 += 1
                        *eax_3 = var_c
                    while (ebp_1 s< ebx_15)
            
            eax_3 = arg2 + 1
            ecx_2 = var_18_1 + 0x18
            arg2 = eax_3
            var_18_1 = ecx_2
            
            if (eax_3 s>= ebx_6)
                break
            
            esi_1 = var_4_1

eax_3.b = 1
return eax_3
