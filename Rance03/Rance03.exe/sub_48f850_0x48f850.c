// 函数: sub_48f850
// 地址: 0x48f850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
int32_t ecx = 0
void* var_8 = ebx
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(ebx + 0x24) - *(ebx + 0x20))
int32_t edx_3 = edx_2 s>> 2
int32_t var_c = 0
int32_t result = (edx_3 u>> 0x1f) + edx_3
int32_t result_1 = result

if (result s> 0)
    int32_t* edi_1 = arg2
    void* edx_4 = nullptr
    arg2 = nullptr
    
    do
        int32_t ebp_1 = edi_1[4]
        result = *(ebx + 0x20) + edx_4
        int32_t* esi_1
        
        if (edi_1[5] u< 0x10)
            esi_1 = edi_1
        else
            esi_1 = *edi_1
        
        int32_t ebx_1 = *(result + 0x10)
        
        if (*(result + 0x14) u>= 0x10)
            result = *result
        
        int32_t edx_5 = ebp_1
        
        if (ebx_1 u< ebp_1)
            edx_5 = ebx_1
        
        if (edx_5 == 0)
            goto label_48f914
        
        int32_t i_1 = edx_5 - 4
        
        if (edx_5 u>= 4)
            int32_t i
            
            do
                if (*result != *esi_1)
                    goto label_48f8d6
                
                result += 4
                esi_1 = &esi_1[1]
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 == 0xfffffffc)
            result = 0
        else
        label_48f8d6:
            ecx.b = *result
            char temp2_1 = *esi_1
            
            if (ecx.b != temp2_1)
                result = sbb.d(result, result, ecx.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                result = 0
            else
                ecx.b = *(result + 1)
                char temp4_1 = *(esi_1 + 1)
                
                if (ecx.b != temp4_1)
                    result = sbb.d(result, result, ecx.b u< temp4_1) | 1
                else if (i_1 == 0xfffffffe)
                    result = 0
                else
                    ecx.b = *(result + 2)
                    char temp5_1 = *(esi_1 + 2)
                    
                    if (ecx.b != temp5_1)
                        result = sbb.d(result, result, ecx.b u< temp5_1) | 1
                    else if (i_1 == 0xffffffff)
                        result = 0
                    else
                        result.b = *(result + 3)
                        char temp6_1 = *(esi_1 + 3)
                        
                        if (result.b == temp6_1)
                            result = 0
                        else
                            result = sbb.d(result, result, result.b u< temp6_1) | 1
        
        if (result != 0)
            ecx = var_c
            ebx = var_8
        else
            ecx = var_c
        label_48f914:
            
            if (ebx_1 u< ebp_1)
                ebx = var_8
            else
                result.b = ebx_1 != ebp_1
                
                if (result != 0)
                    ecx = var_c
                    ebx = var_8
                else
                    ebx = var_8
                    struct partsengine::CSpriteEngineWrapper::VTable* eax_5 =
                        sub_4937f0(*(ebx + 0x10), edi_1)
                    
                    if (eax_5 == 0)
                        eax_5 = sub_487610(*(ebx + 0xc), edi_1)
                    
                    result = sub_5066b0(*(*(ebx + 0x14) + (var_c << 2)), eax_5)
                    ecx = var_c
        
        ecx += 1
        edx_4 = &arg2[6]
        var_c = ecx
        arg2 = edx_4
    while (ecx s< result_1)

return result
