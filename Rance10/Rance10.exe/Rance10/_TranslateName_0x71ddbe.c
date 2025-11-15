// 函数: _TranslateName
// 地址: 0x71ddbe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2
int32_t ebx = 0
int32_t edi
int32_t var_10 = edi
uint32_t result

if (esi s< 0)
label_71de00:
    result.b = 0
else
    while (true)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(ebx + esi)
        int32_t edi_2 = (eax_1 - edx_1) s>> 1
        result = __wcsicmp(*arg3, *(edi_2 * 0xc + arg1))
        
        if (result == 0)
            *arg3 = edi_2 * 0xc + arg1 + 4
            result.b = 1
            break
        
        if (result s>= 0)
            ebx = edi_2 + 1
        else
            esi = edi_2 - 1
        
        if (ebx s> esi)
            goto label_71de00

return result
