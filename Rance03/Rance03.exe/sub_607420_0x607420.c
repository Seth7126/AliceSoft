// 函数: sub_607420
// 地址: 0x607420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_5 = (arg2 - arg3) s/ 0x18
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x2aaaaaab, arg4 - arg3)
int32_t i_7 = i_5
int32_t i_9 = (arg4 - arg3) s/ 0x18
int32_t i_4 = i_9
int32_t i_2 = i_4

if (i_5 != 0)
    int32_t i_6 = i_9
    int32_t i_3 = i_5
    int32_t i
    
    do
        int32_t i_8 = i_6
        i_6 = i_3
        int32_t eax_1
        int32_t edx_5
        edx_5:eax_1 = sx.q(i_8)
        i = mods.dp.d(edx_5:eax_1, i_3)
        result = divs.dp.d(edx_5:eax_1, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_6
    i_5 = i_7
    i_4 = i_2

if (i_4 s< i_9 && i_4 s> 0)
    int32_t* edx_7 = arg3
    int32_t ecx_5 = i_5 * 0x18
    void* ebx_1 = &edx_7[i_4 * 6]
    int32_t var_8_1 = ecx_5
    void* var_20_1 = ebx_1
    int32_t i_1
    
    do
        result = arg4
        int32_t* esi_3 = ebx_1 + ecx_5
        int32_t* edi_1 = ebx_1
        int32_t* var_c_1 = edi_1
        
        if (esi_3 == result)
            esi_3 = edx_7
        
        do
            if (edi_1 != esi_3)
                if (edi_1[5] u< 0x10)
                    if (esi_3[5] u>= 0x10)
                        void* eax_12 = edi_1[4]
                        int32_t ebx_4 = *esi_3
                        
                        if (eax_12 != 0xffffffff)
                            sub_69d850(esi_3, edi_1, eax_12 + 1)
                        
                        *edi_1 = ebx_4
                    else
                        int32_t ebx_3 = 0
                        int32_t ebp_3 = 0x10
                        int32_t* edx_8 = edi_1
                        
                        if (edi_1 u> &edi_1[4])
                            ebp_3 = 0
                        
                        if (ebp_3 != 0)
                            void* eax_8 = esi_3 - edi_1
                            void* var_4_1 = eax_8
                            char* edi_2 = eax_8
                            
                            do
                                eax_8.b = *(edi_2 + edx_8)
                                edx_8 += 1
                                char ecx_7 = *(edx_8 - 1)
                                ebx_3 += 1
                                *(edx_8 - 1) = eax_8.b
                                *(edi_2 + edx_8 - 1) = ecx_7
                            while (ebx_3 != ebp_3)
                            
                            edi_1 = var_c_1
                        
                        i_5 = i_7
                    
                    ebx_1 = var_20_1
                else if (esi_3[5] u< 0x10)
                    void* eax_4 = esi_3[4]
                    int32_t ebx_2 = *edi_1
                    
                    if (eax_4 != 0xffffffff)
                        sub_69d850(edi_1, esi_3, eax_4 + 1)
                    
                    *esi_3 = ebx_2
                    ebx_1 = var_20_1
                else
                    int32_t ecx_6 = *edi_1
                    *edi_1 = *esi_3
                    *esi_3 = ecx_6
                
                int32_t ecx_8 = edi_1[4]
                edi_1[4] = esi_3[4]
                esi_3[4] = ecx_8
                int32_t ecx_9 = edi_1[5]
                edi_1[5] = esi_3[5]
                result = arg4
                esi_3[5] = ecx_9
            
            edi_1 = esi_3
            var_c_1 = edi_1
            int32_t ecx_14 = (result - esi_3) s/ 0x18
            
            if (i_5 s>= ecx_14)
                ecx_5 = var_8_1
                esi_3 = &arg3[(i_5 - ecx_14) * 6]
            else
                ecx_5 = var_8_1
                esi_3 += ecx_5
            
            result = arg4
        while (esi_3 != ebx_1)
        
        ebx_1 -= 0x18
        i_1 = i_2 - 1
        var_20_1 = ebx_1
        i_2 = i_1
        edx_7 = arg3
    while (i_1 s> 0)

return result
