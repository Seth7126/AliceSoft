// 函数: sub_5da190
// 地址: 0x5da190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t esi_2 = (edx_3 u>> 0x1f) + edx_3
int32_t result = (arg2[1] - *arg2) s/ 0x1c

if (esi_2 == result)
    int32_t ebp_1 = 0
    
    if (esi_2 s> 0)
        int32_t ebx_1 = 0
        int32_t esi_3 = 0
        
        do
            void* eax_6 = *arg1 + esi_3
            
            if (*(eax_6 + 0x7c) == 0)
                int128_t* ecx_3 = *arg2
                *(eax_6 + 8) = *(ecx_3 + ebx_1)
                *(eax_6 + 0x18) = *(ecx_3 + ebx_1 + 0x10)
                *(eax_6 + 0x20) = *(ecx_3 + ebx_1 + 0x18)
            
            ebp_1 += 1
            int32_t eax_7
            int32_t edx_7
            edx_7:eax_7 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
            esi_3 += 0xd8
            ebx_1 += 0x1c
            int32_t edx_8 = edx_7 s>> 6
            result = (edx_8 u>> 0x1f) + edx_8
        while (ebp_1 s< result)

return result
