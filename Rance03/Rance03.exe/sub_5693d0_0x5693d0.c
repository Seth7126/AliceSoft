// 函数: sub_5693d0
// 地址: 0x5693d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t* ebx = arg2
int32_t* result = arg1

if (result != ebx)
    int32_t eax_1 = ebx[1]
    void* esi_1 = *ebx
    
    if (esi_1 == eax_1)
        int32_t ecx = result[1]
        
        for (void* i = *result; i != ecx; i += 0x1c)
            *(i + 8) = &sealengine::CEmitterRotate::`vftable'
        
        result[1] = *result
        return result
    
    int32_t* ebp_1 = *result
    int32_t eax_7 = (eax_1 - esi_1) s/ 0x1c
    int32_t eax_11 = (result[1] - ebp_1) s/ 0x1c
    
    if (eax_7 u<= eax_11)
        int32_t var_18_1 = eax_7
        sub_537d30(sub_569db0(eax_11, ebx[1], esi_1, ebp_1), result[1])
        result[1] = *result + (ebx[1] - *ebx) s/ 0x1c * 0x1c
        return result
    
    int32_t* eax_26
    
    if (eax_7 u> (result[2] - ebp_1) s/ 0x1c)
        if (ebp_1 != 0)
            sub_537d30(ebp_1, result[1])
            j__free(*result)
        
        int32_t ecx_21
        eax_26, ecx_21 = sub_567170(result, (ebx[1] - *ebx) s/ 0x1c)
        
        if (eax_26.b != 0)
            int32_t var_18_8 = eax_7
            int32_t var_1c_6 = ecx_21
            result[1] = sub_569cb0(eax_26, ebx[1], *ebx, *result)
    else
        int32_t var_18_3 = eax_7
        int32_t eax_25 = eax_11 * 7
        void* esi_2 = esi_1 + (eax_25 << 2)
        int32_t ecx_16
        eax_26, ecx_16 = sub_569db0(eax_25, esi_2, *ebx, ebp_1)
        int32_t var_18_4 = eax_7
        int32_t var_1c_4 = ecx_16
        result[1] = sub_569cb0(eax_26, ebx[1], esi_2, result[1])

return result
