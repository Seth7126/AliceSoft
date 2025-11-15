// 函数: sub_6374a0
// 地址: 0x6374a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_10 = &var_4
int32_t esi = 0
int32_t ebp_1 = *(arg1 + 0x68)

if (ebp_1 != 0)
    do
        uint32_t edx_3 = esi u>> 5 << 2
        int32_t ebx_1 = 1 << (esi.b & 0x1f)
        
        if ((*(*(arg1 + 0x24) + edx_3) & ebx_1) != 0 && (*(*(arg1 + 4) + edx_3) & ebx_1) != 0)
            int32_t* ecx_2 = *(arg1 + 0x14) + (esi << 3)
            int32_t* edx_4 = *(arg1 + 0x34) + (esi << 3)
            
            if (*edx_4 != *ecx_2)
                bool cond:0 = ((*(*(arg1 + 0x34) + (esi << 3)) - *(arg1 + 0x4c)) & 0xfffffffe)
                    s< ((*(*(arg1 + 0x14) + (esi << 3)) - *(arg1 + 0x4c)) & 0xfffffffe)
                int32_t eax_15
                eax_15.b = cond:0
                *var_10
                return eax_15
            
            if (edx_4[1] != ecx_2[1])
                int32_t eax_10
                eax_10.b = ((*(*(arg1 + 0x34) + (esi << 3) + 4) - *(arg1 + 0x4c)) & 0xfffffffe)
                    s< ((*(*(arg1 + 0x14) + (esi << 3) + 4) - *(arg1 + 0x4c)) & 0xfffffffe)
                *var_10
                return eax_10
        
        esi += 1
    while (esi u< ebp_1)

int32_t* eax
eax.b = 0
*var_10
return eax
