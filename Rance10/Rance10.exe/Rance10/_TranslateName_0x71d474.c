// 函数: _TranslateName
// 地址: 0x71d474
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi = arg2
int32_t edi
int32_t var_10 = edi
uint32_t i = 1
int32_t edi_1 = 0

if (esi s>= 0)
    while (i != 0)
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(edi_1 + esi)
        int32_t ebx_2 = (eax_2 - edx) s>> 1
        int32_t* ecx_1 = ebx_2 * 0xc
        i = __wcsicmp(*arg3, *(ecx_1 + arg1))
        
        if (i == 0)
            *arg3 = ecx_1 + arg1 + 4
        else if (i s>= 0)
            edi_1 = ebx_2 + 1
        else
            esi = ebx_2 - 1
        
        if (edi_1 s> esi)
            break

int32_t result
result.b = i == 0
return result
