// 函数: sub_6cd220
// 地址: 0x6cd220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 1
int32_t ebx = 0x7fffffff
int32_t result = 0xffffffff
int32_t i = 0
int32_t var_c = 0x7fffffff
int32_t ebp = 0x7fffffff

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    return 0xffffffff

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t* ecx_2 = *(arg1 + 4) + 8
int32_t edx_5 = edx_4 s>> 1

do
    int32_t eax_9 = ecx_2[-2]
    
    if (eax_9 s>= arg2)
        int32_t edx_6 = ecx_2[-1]
        
        if (edx_6 s>= arg3)
            int32_t esi_1 = *ecx_2
            
            if (esi_1 s>= arg4 && eax_9 s<= ebx && edx_6 s<= ebp && esi_1 s<= var_c)
                result = i
                ebx = eax_9
                ebp = edx_6
                var_c = esi_1
    
    i += 1
    ecx_2 = &ecx_2[3]
while (i s< (edx_5 u>> 0x1f) + edx_5)

return result
