// 函数: sub_6974a0
// 地址: 0x6974a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_3 = edx_2 s>> 1
int32_t ebp = 0x7fffffff
int32_t i = 0
int32_t var_10 = 0x7fffffff
int32_t result = 0xffffffff
int32_t var_c = 0x7fffffff

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    return 0xffffffff

void* ebx = *(arg1 + 4)
int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
void* var_14 = ebx
int32_t* ecx_2 = ebx + 8
int32_t edx_5 = edx_4 s>> 1
int32_t* edx_6 = nullptr

do
    int32_t eax_9 = *(edx_6 + ebx)
    
    if (eax_9 s>= arg2)
        int32_t edi_1 = *(edx_6 + ebx + 4)
        
        if (edi_1 s>= arg3)
            int32_t ebx_1 = *(edx_6 + ebx + 8)
            
            if (ebx_1 s< arg4 || eax_9 s> var_10 || edi_1 s> var_c || ebx_1 s> ebp)
                ebx = var_14
            else
                ebp = *ecx_2
                var_c = ecx_2[-1]
                ebx = var_14
                result = i
                var_10 = *(edx_6 + var_14)
    
    i += 1
    edx_6 = &edx_6[3]
    ecx_2 = &ecx_2[3]
while (i s< (edx_5 u>> 0x1f) + edx_5)

return result
