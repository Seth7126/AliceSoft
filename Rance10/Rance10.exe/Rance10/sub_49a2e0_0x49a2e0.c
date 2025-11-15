// 函数: sub_49a2e0
// 地址: 0x49a2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* esi = *arg2
void* ebx = arg1
int32_t result = arg2[1]
void* var_4 = ebx
uint32_t ebp_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebp_3 = 0

if (ebp_3 != 0)
    do
        int32_t ecx = *esi
        
        if (ecx s>= 0)
            int32_t eax_1
            int32_t edx_3
            edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(ebx + 8) - *(ebx + 4))
            int32_t edx_4 = edx_3 s>> 3
            result = (edx_4 u>> 0x1f) + edx_4
            
            if (result s> ecx)
                int32_t ebx_2 = ecx * 6
                result = *(var_4 + 4)
                int32_t* ecx_1 = *(result + (ebx_2 << 3))
                
                if (ecx_1 != 0)
                    result = (*(*ecx_1 + 0xc))()
                    
                    if (result.b == 0)
                        result = (*(**(*(var_4 + 4) + (ebx_2 << 3)) + 0x10))()
                
                ebx = var_4
        
        edi += 1
        esi = &esi[1]
    while (edi != ebp_3)

return result
