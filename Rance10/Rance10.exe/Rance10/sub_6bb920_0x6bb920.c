// 函数: sub_6bb920
// 地址: 0x6bb920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg4 << 2
__alloca_probe_16(esi)
int32_t __saved_edi
int32_t* ebx = &__saved_edi
int32_t* var_c = &__saved_edi
int32_t* result = __alloca_probe_16(esi)
int32_t ecx = 0
int32_t edi = 0
int32_t esi_1 = 0
int32_t var_1c = 0

if (arg4 s> 0)
    while (true)
        if (ecx s>= 2)
            int32_t xmm1_1 = *(arg3 + (esi_1 << 2))
            void var_38
            
            if (not(*(&var_38 + (ecx << 2)) f> xmm1_1))
                int32_t* eax_5 = var_c
                int32_t* var_10_2 = &__saved_edi - eax_5
                void* ebx_2 = &eax_5[-2 + ecx]
                
                while (true)
                    if (esi_1 s>= eax_5[ecx - 1] + arg2 || ecx s<= 1
                            || *(var_10_2 + ebx_2) f< *(&var_38 + (ecx << 2))
                            || esi_1 s>= *ebx_2 + arg2)
                        ebx = var_c
                        break
                    
                    void var_3c
                    int32_t xmm0_3 = *(&var_3c + (ecx << 2))
                    ecx -= 1
                    eax_5 = var_c
                    ebx_2 -= 4
                    
                    if (xmm0_3 f<= xmm1_1)
                        continue
                    
                    ebx = eax_5
                    break
        
        ebx[ecx] = esi_1
        result = *(arg3 + (esi_1 << 2))
        esi_1 += 1
        (&__saved_edi)[ecx] = result
        ecx += 1
        
        if (esi_1 s>= arg4)
            break
    
    var_1c = ecx
    edi = 0

int32_t esi_2 = 0

if (ecx s> 0)
    result = &ebx[1]
    void* var_10_4 = &__saved_edi - ebx
    int32_t* result_1 = result
    
    do
        int32_t ebx_5
        
        if (esi_2 s>= ecx - 1 || *(result + var_10_4) f<= (&__saved_edi)[esi_2])
            ebx_5 = arg2 + 1 + result[-1]
            result = result_1
        else
            ebx_5 = *result
        
        if (ebx_5 s> arg4)
            ebx_5 = arg4
        
        if (edi s< ebx_5)
            if (ebx_5 - edi s>= 4)
                void* ebx_8 = arg3 + (edi << 2) + 8
                int32_t var_24_1 = ((ebx_5 - edi - 4) u>> 2) + 1
                int32_t i_1 = ((ebx_5 - edi - 4) u>> 2) + 1
                edi += (((ebx_5 - edi - 4) u>> 2) + 1) << 2
                int32_t i
                
                do
                    ebx_8 += 0x10
                    *(ebx_8 - 0x18) = (&__saved_edi)[esi_2]
                    *(ebx_8 - 0x14) = (&__saved_edi)[esi_2]
                    *(ebx_8 - 0x10) = (&__saved_edi)[esi_2]
                    *(ebx_8 - 0xc) = (&__saved_edi)[esi_2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                ecx = var_1c
            
            if (edi s< ebx_5)
                do
                    *(arg3 + (edi << 2)) = (&__saved_edi)[esi_2]
                    edi += 1
                while (edi s< ebx_5)
                
                ecx = var_1c
            
            result = result_1
        
        esi_2 += 1
        result = &result[1]
        result_1 = result
    while (esi_2 s< ecx)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
