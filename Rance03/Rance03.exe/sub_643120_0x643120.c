// 函数: sub_643120
// 地址: 0x643120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t ecx
int32_t edx
int32_t* result = sub_69cb1c(eax, edx, ecx, 1, 0x2c)
int32_t ebp = 0
int32_t* result_1 = result
int32_t ebx = 0
void* ecx_2 = *(arg1 + 4)
*result = arg2
void* eax_2 = *(ecx_2 + 0x1c)
int32_t ecx_3 = *(arg2 + 0xc)
int32_t edx_1 = *(eax_2 + 0xb20)
int32_t eax_3 = *(arg2 + 0x14)
result[1] = ecx_3
result[3] = edx_1
int32_t ecx_5 = eax_3 * 7
int32_t* eax_4 = edx_1 + (ecx_5 << 3)
result[4] = eax_4
int32_t i_4 = *eax_4
void* eax_5
void* edx_2
eax_5, edx_2 = sub_69cb1c(i_4, edx_1, ecx_5, ecx_3, 4)
void* ecx_6 = nullptr
result[5] = eax_5
arg1 = nullptr

if (ecx_3 s> 0)
    void* eax_7 = arg2 + 0x18
    void* var_1c_1 = eax_7
    
    do
        uint32_t i = *(eax_7 + (ecx_6 << 2))
        int32_t esi = 0
        
        if (i != 0)
            do
                esi += 1
                i u>>= 1
            while (i != 0)
            
            if (esi != 0)
                if (esi s> ebx)
                    ebx = esi
                
                int32_t eax_8 = sub_69cb1c(i, edx_2, ecx_6, esi, 4)
                ecx_6 = arg1
                edx_2 = eax_5
                int32_t edi_2 = 0
                *(edx_2 + (ecx_6 << 2)) = eax_8
                
                if (esi s> 0)
                    int32_t eax_9 = 1
                    edx_2 = var_1c_1
                    void* ebx_3 = arg2 + 0x118 + (ebp << 2)
                    
                    do
                        if ((*(edx_2 + (ecx_6 << 2)) & eax_9) != 0)
                            int32_t ecx_7 = *ebx_3
                            ebp += 1
                            ebx_3 += 4
                            *(*(eax_5 + (arg1 << 2)) + (edi_2 << 2)) =
                                *(eax_2 + 0xb20) + ecx_7 * 0x38
                            ecx_6 = arg1
                            edx_2 = var_1c_1
                        
                        edi_2 += 1
                        eax_9 = rol.d(eax_9, 1)
                    while (edi_2 s< esi)
        
        eax_7 = var_1c_1
        ecx_6 += 1
        arg1 = ecx_6
    while (ecx_6 s< ecx_3)
    
    result = result_1

result[6] = 1

if (i_4 s> 0)
    int32_t ecx_12 = 1
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        ecx_12 *= result[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    result = result_1
    result[6] = ecx_12

result[2] = ebx
int32_t ebx_4 = result[6]
int32_t ecx_13 = _malloc(ebx_4 << 2)
void* i_2 = nullptr
int32_t var_8_2 = ecx_13
result[7] = ecx_13
arg2 = nullptr

if (ebx_4 s> 0)
    int32_t eax_14 = divs.dp.d(sx.q(ebx_4), result[1])
    int32_t edx_9 = i_4 << 2
    int32_t var_c_1 = eax_14
    int32_t var_10_1 = edx_9
    
    do
        int32_t* ebx_5 = ecx_13 + (i_2 << 2)
        arg1 = i_2
        int32_t ebp_2 = eax_14
        *ebx_5 = _malloc(edx_9)
        int32_t ebx_6 = 0
        
        if (i_4 s> 0)
            do
                int32_t temp0_2 = divs.dp.d(sx.q(i_2), ebp_2)
                i_2 -= temp0_2 * ebp_2
                result_1[1]
                ebp_2 = divs.dp.d(sx.q(ebp_2), result_1[1])
                *(*ebx_5 + (ebx_6 << 2)) = temp0_2
                ebx_6 += 1
            while (ebx_6 s< i_4)
            
            i_2 = arg2
            result = result_1
        
        ecx_13 = var_8_2
        i_2 += 1
        eax_14 = var_c_1
        edx_9 = var_10_1
        arg2 = i_2
    while (i_2 s< result[6])

return result
