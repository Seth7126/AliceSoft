// 函数: sub_66b8b0
// 地址: 0x66b8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == arg2)
    return 

int128_t* esi_1 = &arg1[0xa]

if (esi_1 == arg2)
    return 

int32_t var_2c
int32_t ebp_1 = var_2c

do
    int128_t xmm0_1 = *esi_1
    int128_t* ecx = esi_1
    int128_t xmm1_1 = esi_1[1]
    int64_t xmm2_1 = esi_1[2].q
    int32_t edx = xmm0_1
    var_2c.q = xmm2_1
    
    if (edx s>= *arg1)
        int128_t* eax = esi_1
        
        while (true)
            eax -= 0x28
            
            if (edx s>= *eax)
                break
            
            *ecx = *eax
            ecx[1] = eax[1]
            ecx[2].q = eax[2].q
            ecx = eax
        
        *ecx = xmm0_1
        ecx[1] = xmm1_1
        ecx[2].q = xmm2_1
    else
        int32_t var_40_1 = ebp_1
        sub_66f970(esi_1 + 0x28, esi_1, arg1, esi_1 + 0x28)
        *arg1 = xmm0_1
        *(arg1 + 0x10) = xmm1_1
        *(arg1 + 0x20) = var_2c.q
    
    esi_1 += 0x28
while (esi_1 != arg2)
