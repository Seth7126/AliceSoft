// 函数: sub_5ca780
// 地址: 0x5ca780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = arg1
int32_t* var_14 = edx
void* edi

if (arg2[3] != 0)
    edi = arg2[2]
else
    edi = nullptr

uint32_t i

if (arg3 != 0)
    int32_t* ecx_3 = arg2
    int32_t ebx_2 = 1
    
    if (sub_5d4330(ecx_3) s> 1)
        uint32_t eax_5
        
        do
            int32_t xmm0_3 = *(edi + (ebx_2 << 2))
            int32_t esi_1 = ebx_2 - 1
            
            if (ebx_2 s>= 1)
                int32_t var_c = xmm0_3
                int32_t temp1_1
                
                do
                    int32_t var_10
                    int32_t* var_28_1 = &var_10
                    int32_t* var_2c_1 = ecx_3
                    int32_t var_8_1 = *(edi + (esi_1 << 2))
                    ecx_3 = edx
                    int32_t eax_3
                    int32_t edx_1
                    eax_3, edx_1 = sub_5cac70(ecx_3, arg3, &var_c, var_2c_1)
                    
                    if (eax_3.b == 0)
                        sub_5c24e0(eax_3, edx_1, ecx_3, var_14, 0x6e8b40)
                        int32_t* eax_6
                        eax_6.b = 0
                        return eax_6
                    
                    edx = var_14
                    
                    if (var_10 s<= 0)
                        break
                    
                    *(edi + (esi_1 << 2) + 4) = *(edi + (esi_1 << 2))
                    temp1_1 = esi_1
                    esi_1 -= 1
                while (temp1_1 - 1 s>= 0)
            
            ecx_3 = arg2
            ebx_2 += 1
            *(edi + (esi_1 << 2) + 4) = xmm0_3
            eax_5 = sub_5d4330(ecx_3)
        while (ebx_2 s< eax_5)
        
        eax_5.b = 1
        return eax_5
else if (sub_5d4330(arg2) s> 1)
    int32_t j_1 = 0
    int32_t* ebx_1 = edi + 4
    
    do
        int32_t xmm0_1 = *ebx_1
        int32_t j = j_1
        
        if (j_1 s>= 0)
            if (j_1 + 1 s>= 4)
                void* eax_2 = &ebx_1[-2]
                
                do
                    int32_t xmm1_1 = *(eax_2 + 4)
                    
                    if (xmm1_1 f<= xmm0_1)
                        goto label_5ca833
                    
                    *(eax_2 + 8) = xmm1_1
                    int32_t xmm1_2 = *eax_2
                    
                    if (xmm1_2 f<= xmm0_1)
                        j -= 1
                        goto label_5ca833
                    
                    *(eax_2 + 4) = xmm1_2
                    int32_t xmm1_3 = *(eax_2 - 4)
                    
                    if (xmm1_3 f<= xmm0_1)
                        j -= 2
                        goto label_5ca833
                    
                    *eax_2 = xmm1_3
                    int32_t xmm1_4 = *(eax_2 - 8)
                    
                    if (xmm1_4 f<= xmm0_1)
                        j -= 3
                        goto label_5ca833
                    
                    *(eax_2 - 4) = xmm1_4
                    j -= 4
                    eax_2 -= 0x10
                while (j s>= 3)
            
            if (j s>= 0)
                int32_t j_2
                
                do
                    int32_t xmm1_5 = *(edi + (j << 2))
                    
                    if (xmm1_5 f<= xmm0_1)
                        break
                    
                    *(edi + (j << 2) + 4) = xmm1_5
                    j_2 = j
                    j -= 1
                while (j_2 - 1 s>= 0)
        
    label_5ca833:
        *(edi + (j << 2) + 4) = xmm0_1
        ebx_1 = &ebx_1[1]
        j_1 += 1
        i = sub_5d4330(arg2)
    while (j_1 + 1 s< i)

i.b = 1
return i
