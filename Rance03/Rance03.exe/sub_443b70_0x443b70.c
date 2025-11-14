// 函数: sub_443b70
// 地址: 0x443b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result_1
int32_t eax_1 = __security_cookie ^ &result_1
int32_t var_104 = 0
char var_100[0xfc]
_memset(&var_100, 0, 0xfc)
int32_t var_10c = 0
int32_t esi = 1
int32_t var_110
uint32_t result

if (sub_446c70(sub_443610(&var_104, &var_10c, 0, 0, arg5), &var_110, &result_1, arg3).b == 0)
label_443cba:
    result.b = 0
else
    int32_t edi_2 = var_10c
    
    while (true)
        result = result_1
        
        if (result == 0xffffffff)
            if (edi_2 != 0)
                sub_443680(arg2, &var_104)
                result.b = 1
            else
                sub_441ee0(arg2, (var_104 s>> 8).w)
                result.b = 1
            
            break
        
        int32_t esi_1 = esi + result
        
        if (esi_1 u>= 0x40)
            goto label_443cba
        
        int32_t eax_3 = *((esi_1 << 2) + &data_7050d8)
        int32_t edi_4 = eax_3 & 0x80000007
        
        if (edi_4 s< 0)
            edi_4 = ((edi_4 - 1) | 0xfffffff8) + 1
        
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(eax_3)
        int32_t ebx_2 = ((edx_1 & 7) + eax_4) s>> 3
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(zx.d(*(*(arg1 + 4) + (ebx_2 << 3) + edi_4 + 0x10)) * var_110 * arg4 * 2)
        int32_t eax_12 = (eax_10 + (edx_3 & 0xf)) s>> 4
        
        if (eax_12 s> 0x7ff)
            eax_12 = 0x7ff
        else if (eax_12 s< 0xfffff800)
            eax_12 = 0xfffff800
        else if ((eax_12.b & 1) == 0)
            int32_t ecx_3
            ecx_3.b = eax_12 s> 0
            eax_12 -= (ecx_3 << 1) + 0xffffffff
        
        edi_2 = edi_4 + (ebx_2 << 3)
        esi = esi_1 + 1
        (&var_104)[edi_2] = (*U" ,*& ")[edi_2] * eax_12
        
        if (sub_446c70(eax_12, &var_110, &result_1, arg3).b == 0)
            goto label_443cba

sub_69a5bc(eax_1 ^ &result_1)
return result
