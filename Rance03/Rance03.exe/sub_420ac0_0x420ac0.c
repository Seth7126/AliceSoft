// 函数: sub_420ac0
// 地址: 0x420ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d5c4
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, data_75d5c8 - edi)
int32_t result_1 = 0
int32_t edx_3 = edx_2 s>> 2
int32_t result = 0
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3

if (eax_3 s> 0)
    void* edx_4 = arg1
    int32_t eax_4 = *(edx_4 + 0x10)
    int32_t var_4_1 = eax_4
    
    while (true)
        int32_t ebp_1 = *(edi + 0x10)
        void* esi_1
        
        if (*(edi + 0x14) u< 0x10)
            esi_1 = edi
        else
            esi_1 = *edi
        
        int32_t ebx_1 = eax_4
        
        if (eax_4 u< eax_4)
            ebx_1 = eax_4
        
        if (*(edx_4 + 0x14) u>= 0x10)
            edx_4 = *edx_4
        
        int32_t eax_5 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_5 = ebx_1
        
        if (eax_5 == 0)
            goto label_420b89
        
        int32_t i_1 = eax_5 - 4
        
        if (eax_5 u>= 4)
            int32_t i
            
            do
                if (*edx_4 != *esi_1)
                    goto label_420b4b
                
                edx_4 += 4
                esi_1 += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_7
        
        if (i_1 == 0xfffffffc)
            eax_7 = 0
        else
        label_420b4b:
            result_1.b = *edx_4
            char temp1_1 = *esi_1
            
            if (result_1.b != temp1_1)
                eax_7 = sbb.d(i_1, i_1, result_1.b u< temp1_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_7 = 0
            else
                result_1.b = *(edx_4 + 1)
                char temp3_1 = *(esi_1 + 1)
                
                if (result_1.b != temp3_1)
                    eax_7 = sbb.d(i_1, i_1, result_1.b u< temp3_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_7 = 0
                else
                    result_1.b = *(edx_4 + 2)
                    char temp4_1 = *(esi_1 + 2)
                    
                    if (result_1.b != temp4_1)
                        eax_7 = sbb.d(i_1, i_1, result_1.b u< temp4_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_7 = 0
                    else
                        i_1.b = *(edx_4 + 3)
                        char temp5_1 = *(esi_1 + 3)
                        
                        if (i_1.b == temp5_1)
                            eax_7 = 0
                        else
                            eax_7 = sbb.d(i_1, i_1, i_1.b u< temp5_1) | 1
        
        if (eax_7 != 0)
            result_1 = result
        else
            result_1 = result
        label_420b89:
            
            if (ebx_1 u>= ebp_1)
                int32_t eax_8
                eax_8.b = ebx_1 != ebp_1
                
                if (eax_8 == 0)
                    return result
                
                result_1 = result
        
        result_1 += 1
        edi += 0x18
        result = result_1
        
        if (result_1 s>= eax_3)
            break
        
        eax_4 = var_4_1
        edx_4 = arg1

return 0xffffffff
