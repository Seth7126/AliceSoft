// 函数: sub_6b7dc0
// 地址: 0x6b7dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2[3]
void* ebp = *arg2
char* var_2c = arg2[2]
uint32_t eax_1 = zx.d(*(ebp + 4))
uint32_t ecx = zx.d(*(ebp + 5))
int32_t edi = 0
int32_t var_28 = ecx & 2
int32_t eax_6
int32_t edx
eax_6, edx = sub_6b78e0(arg2)
uint32_t edx_7 = ((zx.d(*(ebp + 0x11)) << 8 | zx.d(*(ebp + 0x10))) << 8 | zx.d(*(ebp + 0xf))) << 8
    | zx.d(*(ebp + 0xe))
uint32_t ebp_1 = zx.d(*(ebp + 0x1a))
uint32_t ecx_11 = ((zx.d(*(ebp + 0x15)) << 8 | zx.d(*(ebp + 0x14))) << 8 | zx.d(*(ebp + 0x13))) << 8
    | zx.d(*(ebp + 0x12))

if (arg1 != 0)
    char* ecx_12 = *arg1
    
    if (ecx_12 != 0)
        void* eax_11 = arg1[3]
        int32_t edx_8 = arg1[9]
        int32_t var_30_1 = edx_8
        
        if (eax_11 != 0)
            int32_t temp0_1 = arg1[2]
            arg1[2] -= eax_11
            
            if (temp0_1 != eax_11)
                sub_6feca0(ecx_12, eax_11 + ecx_12, arg1[2])
                edx_8 = var_30_1
            
            arg1[3] = 0
        
        if (edx_8 != 0)
            int32_t eax_13 = arg1[7]
            
            if (eax_13 != edx_8)
                char* ecx_13 = arg1[4]
                sub_6feca0(ecx_13, &ecx_13[edx_8 << 2], (eax_13 - edx_8) << 2)
                char* ecx_14 = arg1[5]
                sub_6feca0(ecx_14, &ecx_14[var_30_1 << 3], (arg1[7] - var_30_1) << 3)
                edx_8 = var_30_1
            
            arg1[7] -= edx_8
            arg1[8] -= edx_8
            arg1[9] = 0
        
        if (edx_7 == arg1[0x54] && eax_1 u<= 0 && sub_6b7ac0(arg1, ebp_1 + 1) == 0)
            int32_t eax_23 = arg1[0x55]
            
            if (ecx_11 != eax_23)
                int32_t edx_11 = arg1[8]
                int32_t ebp_2 = arg1[7]
                
                if (edx_11 s< ebp_2)
                    int32_t ecx_16 = arg1[2]
                    int32_t i_1 = ebp_2 - edx_11
                    char* edx_12 = arg1[4] + (edx_11 << 2)
                    int32_t i
                    
                    do
                        uint32_t eax_25 = zx.d(*edx_12)
                        edx_12 = &edx_12[4]
                        ecx_16 -= eax_25
                        arg1[2] = ecx_16
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    eax_23 = arg1[0x55]
                
                arg1[7] = edx_11
                
                if (eax_23 != 0xffffffff)
                    *(arg1[4] + (edx_11 << 2)) = 0x400
                    arg1[7] += 1
                    arg1[8] += 1
            
            if ((ecx & 1) != 0)
                int32_t ecx_17 = arg1[7]
                
                if (ecx_17 s< 1 || *(arg1[4] + (ecx_17 << 2) - 4) == 0x400)
                    var_28 = 0
                    
                    if (ebp_1 != 0)
                        char* ecx_18 = var_2c
                        
                        do
                            uint32_t eax_28 = zx.d(*(ebp + edi + 0x1b))
                            edi += 1
                            ecx_18 = &ecx_18[eax_28]
                            ebx -= eax_28
                            var_2c = ecx_18
                            
                            if (eax_28 u< 0xff)
                                break
                        while (edi s< ebp_1)
            
            if (ebx == 0)
                goto label_6b7fdb
            
            if (sub_6b7a60(arg1, ebx) == 0)
                sub_700660(arg1[2] + *arg1, var_2c, ebx)
                arg1[2] += ebx
            label_6b7fdb:
                int32_t ebx_1 = 0xffffffff
                
                if (edi s< ebp_1)
                    do
                        uint32_t edx_15 = zx.d(*(ebp + edi + 0x1b))
                        *(arg1[4] + (arg1[7] << 2)) = edx_15
                        int32_t ecx_21 = arg1[5]
                        int32_t eax_34 = arg1[7]
                        *(ecx_21 + (eax_34 << 3)) = 0xffffffff
                        *(ecx_21 + (eax_34 << 3) + 4) = 0xffffffff
                        
                        if (var_28 != 0)
                            int32_t eax_35 = arg1[4]
                            int32_t ecx_22 = arg1[7]
                            *(eax_35 + (ecx_22 << 2)) |= 0x100
                            var_28 = 0
                        
                        if (edx_15 u< 0xff)
                            ebx_1 = arg1[7]
                        
                        arg1[7] += 1
                        edi += 1
                        
                        if (edx_15 u< 0xff)
                            arg1[8] = arg1[7]
                    while (edi s< ebp_1)
                    
                    if (ebx_1 != 0xffffffff)
                        int32_t eax_37 = arg1[5]
                        *(eax_37 + (ebx_1 << 3)) = eax_6
                        *(eax_37 + (ebx_1 << 3) + 4) = edx
                
                if ((ecx & 4) != 0)
                    int32_t ecx_25 = arg1[7]
                    arg1[0x52] = 1
                    
                    if (ecx_25 s> 0)
                        int32_t eax_38 = arg1[4]
                        *(eax_38 + (ecx_25 << 2) - 4) |= 0x200
                
                arg1[0x55] = ecx_11 + 1
                return 0

return 0xffffffff
