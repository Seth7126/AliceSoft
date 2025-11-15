// 函数: sub_65ab20
// 地址: 0x65ab20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1
int32_t i = 0
void* var_4 = ebx
void* ebp = *(ebx + 0x19c)
int32_t ecx = *(ebx + 0x124)
void* result = *(ebx + 0xc4)
void* var_14 = ebp
int32_t i_1 = 0

if (*(ebx + 0x24) s> 0)
    int32_t* ecx_2 = result + 0xc
    void* eax = ebp + 8
    int32_t* var_18_1 = ecx_2
    
    do
        int32_t* ebp_1 = *(*(ebp + 0x38) + (i << 2))
        int32_t j_4 = divs.dp.d(sx.q(ecx_2[7] * *ecx_2), *(ebx + 0x124))
        int32_t j_3 = (ecx + 2) * j_4
        int32_t* var_20_1 = ebp_1
        result = *(eax + (i << 2))
        void* result_1 = result
        void* ebx_1 = *(*(var_14 + 0x3c) + (i << 2))
        
        if (j_3 s> 0)
            void* ecx_6 = ebx_1
            int32_t* edi_1 = result - ebx_1
            int32_t j
            
            do
                result = *(edi_1 + ecx_6)
                ecx_6 += 4
                *(ecx_6 - 4) = result
                *(ecx_6 + ebp_1 - ebx_1 - 4) = result
                j = j_3
                j_3 -= 1
            while (j != 1)
            ebp_1 = var_20_1
        
        int32_t j_5 = j_4 * 2
        
        if (j_5 s> 0)
            void* ecx_7 = ebx_1 + ((j_4 * ecx) << 2)
            void* edx_5 = result_1 + (((ecx - 2) * j_4) << 2)
            int32_t j_1
            
            do
                edx_5 += 4
                *(ebx_1 - result_1 + edx_5 - 4) = *(ecx_7 + result_1 - ebx_1)
                ecx_7 += 4
                result = *(edx_5 - 4)
                *(ecx_7 - 4) = result
                j_1 = j_5
                j_5 -= 1
            while (j_1 != 1)
            ebp_1 = var_20_1
        
        if (j_4 s> 0)
            result = ebp_1 - (j_4 << 2)
            int32_t j_2
            
            do
                result += 4
                *(result - 4) = *ebp_1
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        ebx = var_4
        i = i_1 + 1
        ebp = var_14
        ecx_2 = &var_18_1[0x16]
        i_1 = i
        var_18_1 = ecx_2
    while (i s< *(ebx + 0x24))

return result
