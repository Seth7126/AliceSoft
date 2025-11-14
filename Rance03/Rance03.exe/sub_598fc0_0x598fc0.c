// 函数: sub_598fc0
// 地址: 0x598fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (void* i = *(arg1 + 8); i != *(arg1 + 0xc); i += 0xac)
    *(i + 0x98) = 0

int32_t ecx_1 = *(arg1 + 0x2c) - *(arg1 + 0x28)
int32_t edi = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, ecx_1)
int32_t var_14 = 0
int32_t edx_2 = (edx + ecx_1) s>> 5
int32_t result = (edx_2 u>> 0x1f) - 1 + edx_2

if (result s> 0)
    int32_t ebx_1 = 0
    int32_t var_10_1 = 0
    
    do
        void* ebx_2 = ebx_1 + *(arg1 + 0x28)
        int32_t var_c = 0
        int32_t var_8_1 = 0
        int32_t var_4_1 = 0
        
        if (sub_52b680(ebx_2, ebx_2 + 0x38, arg1 + 4, &var_c) != 0)
            int32_t edi_1 = *(ebx_2 + 0x28)
            
            if (edi_1 s>= 0)
                int32_t eax_6
                int32_t edx_3
                edx_3:eax_6 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
                int32_t edx_4 = edx_3 s>> 5
                
                if (edi_1 s< (edx_4 u>> 0x1f) + edx_4)
                    *(edi_1 * 0xac + *(arg1 + 8) + 0x98) = 1
            
            int32_t edi_2 = *(ebx_2 + 0x60)
            
            if (edi_2 s>= 0)
                int32_t eax_11
                int32_t edx_5
                edx_5:eax_11 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
                int32_t edx_6 = edx_5 s>> 5
                
                if (edi_2 s< (edx_6 u>> 0x1f) + edx_6)
                    *(edi_2 * 0xac + *(arg1 + 8) + 0x98) = 1
            
            sub_599110(arg1, *(ebx_2 + 0x28), &var_c)
            edi = var_14
        
        int32_t ecx_11 = *(arg1 + 0x2c) - *(arg1 + 0x28)
        edi += 1
        int32_t eax_16
        int32_t edx_7
        edx_7:eax_16 = muls.dp.d(0x92492493, ecx_11)
        ebx_1 = var_10_1 + 0x38
        var_14 = edi
        var_10_1 = ebx_1
        int32_t edx_9 = (edx_7 + ecx_11) s>> 5
        result = (edx_9 u>> 0x1f) - 1 + edx_9
    while (edi s< result)

return result
