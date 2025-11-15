// 函数: sub_5da400
// 地址: 0x5da400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]

for (void* i = *arg1; i != edx; i += 0xd8)
    *(i + 0xc4) = 0

int32_t ebp = 0
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, arg1[8] - arg1[7])
int32_t var_1c = 0
int32_t edx_2 = edx_1 s>> 3
int32_t result = (edx_2 u>> 0x1f) - 1 + edx_2

if (result s> 0)
    int32_t ebx_1 = 0
    int32_t var_18_1 = 0
    
    do
        void* edi_2 = arg1[7] + ebx_1
        int32_t eax_4 = data_7fd4e0
        int64_t var_10 = data_7fd4d8.q
        int32_t var_8_1 = eax_4
        
        if (*edi_2 == 0 && *(edi_2 + 0x30) == 0
                && sub_56aae0(edi_2, edi_2 + 0x30, arg1, &var_10) != 0)
            int32_t ebp_1 = *(edi_2 + 0x20)
            
            if (ebp_1 s>= 0)
                int32_t eax_6
                int32_t edx_3
                edx_3:eax_6 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
                int32_t edx_4 = edx_3 s>> 6
                
                if (ebp_1 s< (edx_4 u>> 0x1f) + edx_4)
                    *(ebp_1 * 0xd8 + *arg1 + 0xc4) = 1
            
            int32_t ebx_3 = *(edi_2 + 0x50)
            
            if (ebx_3 s>= 0)
                int32_t ebp_2 = *arg1
                int32_t eax_11
                int32_t edx_5
                edx_5:eax_11 = muls.dp.d(0x4bda12f7, arg1[1] - ebp_2)
                int32_t edx_6 = edx_5 s>> 6
                
                if (ebx_3 s< (edx_6 u>> 0x1f) + edx_6)
                    *(ebx_3 * 0xd8 + ebp_2 + 0xc4) = 1
            
            sub_5da540(arg1, *(edi_2 + 0x20), &var_10)
            ebp = var_1c
        
        ebp += 1
        int32_t eax_16
        int32_t edx_7
        edx_7:eax_16 = muls.dp.d(0x2aaaaaab, arg1[8] - arg1[7])
        ebx_1 = var_18_1 + 0x30
        var_1c = ebp
        int32_t edx_8 = edx_7 s>> 3
        var_18_1 = ebx_1
        result = (edx_8 u>> 0x1f) - 1 + edx_8
    while (ebp s< result)

return result
