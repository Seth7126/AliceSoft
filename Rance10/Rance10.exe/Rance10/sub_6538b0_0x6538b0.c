// 函数: sub_6538b0
// 地址: 0x6538b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* ebp = arg3
int32_t j_1 = *(arg2 + 0x24) * *(arg2 + 0x1c)
int32_t j_2 = j_1
int32_t eax_1 = j_1 * 2
int32_t* result = sub_6535f0(eax_1, *(arg1 + 0x104), ebp, *(arg1 + 0x1c), eax_1)
void* i = nullptr
arg2 = nullptr

if (*(arg1 + 0x104) s> 0)
    result = arg4 - ebp
    arg4 = result
    
    do
        void* esi_1 = *(result + ebp)
        int32_t edi_1 = 0
        void* eax_3 = *ebp
        
        if (j_1 != 0)
            int32_t j
            
            do
                uint32_t ecx_2 = zx.d(*(eax_3 + 1))
                esi_1 += 1
                uint32_t edx_1 = zx.d(*eax_3)
                eax_3 += 2
                int32_t ecx_3 = ecx_2 + edi_1
                edi_1 ^= 1
                *(esi_1 - 1) = ((edx_1 + ecx_3) s>> 1).b
                j = j_1
                j_1 -= 1
            while (j != 1)
            i = arg2
            j_1 = j_2
        
        i += 1
        ebp = &ebp[1]
        arg2 = i
        result = arg4
    while (i s< *(arg1 + 0x104))

return result
