// 函数: sub_59f880
// 地址: 0x59f880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg1
int32_t result_1 = result
int32_t* esi = *arg4
int32_t edi_1 = arg4[1]
int32_t* var_10 = esi
int32_t var_4 = edi_1

if (esi != edi_1)
    struct _EXCEPTION_REGISTRATION_RECORD*** ebp_1 = arg2
    
    do
        int32_t ebx_1 = *esi
        int32_t edx_2
        
        if (ebx_1 s>= 0)
            int32_t eax
            int32_t edx_1
            edx_1:eax = muls.dp.d(0x4da637d, *(result + 8) - *(result + 4))
            edx_2 = edx_1 s>> 4
        
        if (ebx_1 s< 0 || ebx_1 s>= (edx_2 u>> 0x1f) + edx_2)
            result.b = 0
            return result
        
        int32_t ecx_3 = *(result_1 + 4)
        int32_t* eax_4 = ebx_1 * 0x34c + ecx_3
        
        if (eax_4[1] != 6 && eax_4[0xcc] != 0xffffffff)
            int32_t ebx_2 = 0
            int32_t* edx_3 = *arg4
            int32_t ebp_4 = (arg4[1] - edx_3) s>> 2
            
            if (ebp_4 s> 0)
                while (*(*edx_3 * 0x34c + ecx_3) != eax_4[0xcc])
                    ebx_2 += 1
                    edx_3 = &edx_3[1]
                    
                    if (ebx_2 s>= ebp_4)
                        break
                
                esi = var_10
                edi_1 = var_4
            
            if (ebx_2 s< ebp_4)
                eax_4[0xcc] = arg3
            
            ebp_1 = arg2
        
        sub_5a4220(ebp_1, eax_4)
        result = result_1
        esi = &esi[1]
        var_10 = esi
    while (esi != edi_1)

result.b = 1
return result
