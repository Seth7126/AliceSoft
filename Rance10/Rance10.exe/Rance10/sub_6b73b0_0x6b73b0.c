// 函数: sub_6b73b0
// 地址: 0x6b73b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
int32_t* edi = *(ebp + 0x510)
int32_t* var_28 = edi
void* ebx = &arg1[1]
void* var_c = ebx
int32_t eax_3 = *(*(*(arg1[0x10] + 4) + 0x1c) + 0xb20)

if (sub_6b2ec0(ebx, 1) != 1)
    return 0

void** result_1 = sub_6b3050(arg1, *(ebp + 0x504) << 2)
int32_t ecx_2 = *(ebp + 0x50c)
void** result = result_1
arg1 = result
int32_t edx_3 = 0
uint32_t i = ecx_2 - 1

if (ecx_2 != 1)
    do
        edx_3 += 1
        i u>>= 1
    while (i != 0)

*result = sub_6b2ec0(ebx, edx_3)
int32_t edx_4 = 0
int32_t eax_6 = *(ebp + 0x50c)
uint32_t i_1 = eax_6 - 1

if (eax_6 != 1)
    do
        edx_4 += 1
        i_1 u>>= 1
    while (i_1 != 0)

int32_t i_2 = 0
result[1] = sub_6b2ec0(ebx, edx_4)
int32_t i_4 = 0
int32_t var_20_1 = 2

if (*edi s> 0)
    void* eax_8 = &edi[1]
    void* var_10_1 = eax_8
    
    do
        int32_t esi_1 = *eax_8
        int32_t ebp_1 = 0
        int32_t eax_9 = edi[esi_1 + 0x20]
        int32_t ecx_5 = edi[esi_1 + 0x30]
        int32_t eax_10 = 1 << ecx_5.b
        int32_t var_14_1 = ecx_5
        
        if (ecx_5 != 0)
            int32_t ecx_7 = edi[esi_1 + 0x40] * 7
            void* edi_1 = eax_3 + (ecx_7 << 3)
            
            if (*(eax_3 + (ecx_7 << 3) + 8) s<= 0)
                return 0
            
            int32_t eax_13 = sub_6b4270(edi_1, ebx)
            
            if (eax_13 s< 0)
                return 0
            
            ebp_1 = *(*(edi_1 + 0x18) + (eax_13 << 2))
            
            if (ebp_1 == 0xffffffff)
                return 0
            
            edi = var_28
            ecx_5 = var_14_1
            i_2 = i_4
        
        int32_t ebx_1 = 0
        int32_t eax_20
        
        if (eax_9 s<= 0)
            eax_20 = eax_9
        else
            int32_t edx_6 = eax_10 - 1
            int32_t var_4_1 = edx_6
            int32_t* esi_3 = &arg1[var_20_1]
            
            do
                void* edx_7 = edx_6 & ebp_1
                ebp_1 s>>= ecx_5.b
                int32_t edx_9 = edi[edx_7 + (esi_1 << 3) + 0x50]
                
                if (edx_9 s< 0)
                    *esi_3 = 0
                else
                    int32_t eax_17 = edx_9 * 7
                    void* edi_2 = eax_3 + (eax_17 << 3)
                    int32_t eax_18
                    
                    if (*(eax_3 + (eax_17 << 3) + 8) s> 0)
                        eax_18 = sub_6b4270(edi_2, var_c)
                    
                    int32_t eax_19
                    
                    if (*(eax_3 + (eax_17 << 3) + 8) s<= 0 || eax_18 s< 0)
                        eax_19 = 0xffffffff
                    else
                        eax_19 = *(*(edi_2 + 0x18) + (eax_18 << 2))
                    
                    *esi_3 = eax_19
                    
                    if (eax_19 == 0xffffffff)
                        return 0
                    
                    edi = var_28
                    ecx_5 = var_14_1
                
                eax_20 = eax_9
                ebx_1 += 1
                edx_6 = var_4_1
                esi_3 = &esi_3[1]
            while (ebx_1 s< eax_20)
            
            i_2 = i_4
        
        var_20_1 += eax_20
        i_2 += 1
        ebx = var_c
        eax_8 = var_10_1 + 4
        i_4 = i_2
        var_10_1 = eax_8
    while (i_2 s< *edi)
    
    result = arg1
    ebp = arg2

int32_t i_5 = 2

if (*(ebp + 0x504) s> 2)
    void* ecx_13 = ebp + 0x30c
    void* var_20_2 = ecx_13
    void* var_1c_1 = &edi[0xd3]
    int32_t i_3
    
    do
        int32_t eax_23 = *(ecx_13 + 0xfc)
        int32_t edi_3 = edi[eax_23 + 0xd1]
        int32_t esi_4 = *ecx_13
        int32_t ebp_3 = result[eax_23] & 0x7fff
        int32_t ebx_4 = (arg1[esi_4] & 0x7fff) - ebp_3
        int32_t eax_26
        int32_t edx_11
        edx_11:eax_26 = sx.q(ebx_4)
        int32_t temp0_1 = divs.dp.d(sx.q(((eax_26 ^ edx_11) - edx_11) * (*var_1c_1 - edi_3)), 
            var_28[esi_4 + 0xd1] - edi_3)
        int32_t ebp_4
        
        if (ebx_4 s>= 0)
            ebp_4 = ebp_3 + temp0_1
        else
            ebp_4 = ebp_3 - temp0_1
        
        result = arg1
        int32_t edx_15 = *(arg2 + 0x50c) - ebp_4
        int32_t eax_32 = result[i_5]
        void* ecx_22
        
        if (eax_32 == 0)
            ecx_22 = var_20_2
            result[i_5] = ebp_4 | 0x8000
        else
            int32_t ecx_20 = ebp_4
            
            if (edx_15 s< ebp_4)
                ecx_20 = edx_15
            
            int32_t eax_33
            
            if (eax_32 s< ecx_20 * 2)
                if ((eax_32.b & 1) == 0)
                    eax_33 = eax_32 s>> 1
                else
                    eax_33 = neg.d((eax_32 + 1) s>> 1)
            else if (edx_15 s<= ebp_4)
                eax_33 = edx_15 - eax_32 - 1
            else
                eax_33 = eax_32 - ebp_4
            
            ecx_22 = var_20_2
            result[i_5] = (eax_33 + ebp_4) & 0x7fff
            int32_t eax_38 = *(ecx_22 + 0xfc)
            result[eax_38] &= 0x7fff
            int32_t eax_39 = *ecx_22
            result[eax_39] &= 0x7fff
        
        var_1c_1 += 4
        i_3 = i_5 + 1
        ecx_13 = ecx_22 + 4
        i_5 = i_3
        edi = var_28
        var_20_2 = ecx_13
    while (i_3 s< *(arg2 + 0x504))

return result
