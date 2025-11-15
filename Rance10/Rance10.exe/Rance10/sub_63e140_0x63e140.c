// 函数: sub_63e140
// 地址: 0x63e140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x44)
int32_t i_3 = edi s/ 0xc
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = sx.q(edi)
int32_t ebx_1 = ((edx_2 & 0xf) + eax_2) s>> 4
int32_t eax_4 = *(arg1 + 0x40) - ebx_1 * 2
int32_t i_2 = 1

if (i_3 s> 1)
    i_2 = i_3

int32_t eax_6
int32_t edx_4
edx_4:eax_6 = sx.q(edi - i_2)
int32_t esi_2 = (*(*(arg1 + 0xc) + 8))(ebx_1, (eax_6 - edx_4) s>> 1)
int32_t result = (*(*(arg1 + 0xc) + 0x1c))() - eax_4
int32_t i_1 = i_2
int32_t result_1 = result

if (i_1 s> 0)
    int32_t i
    
    do
        if (eax_4 s> 0)
            int32_t edi_3 = __builtin_memset(esi_2, 0xffffffff, eax_4 u>> 2 << 2)
            esi_2 += eax_4
            __builtin_memset(edi_3, 0xff, eax_4 & 3)
            result = result_1
        
        esi_2 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
