// 函数: sub_436bf0
// 地址: 0x436bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_114
int32_t eax_1 = __security_cookie ^ &var_114
void* esi = arg2
uint32_t var_100[0xf][0x4]
uint32_t (* eax_2)[0x4] = _memset(&var_100, 0, 0xfc)
void* ecx = arg5
int32_t edi = 1

if (ecx s> 0x7ff)
    ecx = 0x7ff
else if (ecx s< 0xfffff800)
    ecx = 0xfffff800
else if ((ecx.b & 1) == 0)
    int32_t eax_3
    eax_3.b = ecx s> 0
    eax_2 = (eax_3 << 1) + 0xffffffff
    ecx += eax_2

int32_t var_104 = ecx << 5
int32_t ebx = 0
uint32_t result_1
uint32_t result

if (sub_448b30(eax_2, &var_114, &result_1, arg3).b == 0)
label_436d4f:
    result.b = 0
else
    while (true)
        result = result_1
        
        if (result == 0xffffffff)
            if (ebx != 0)
                sub_436630(esi, &var_104)
                result.b = 1
            else
                int32_t eax_20
                char edx_6
                edx_6:eax_20 = sx.q(var_104)
                result = esi + 0x80
                
                if (esi == result)
                    result.b = 1
                else
                    do
                        *esi = ((eax_20 + zx.d(edx_6)) s>> 8).w
                        esi += 2
                    while (esi != result)
                    
                    result.b = 1
            
            break
        
        int32_t edi_1 = edi + result
        
        if (edi_1 u>= 0x40)
            goto label_436d4f
        
        int32_t eax_4 = *((edi_1 << 2) + &data_794f48)
        int32_t ebx_2 = eax_4 & 0x80000007
        
        if (ebx_2 s< 0)
            ebx_2 = ((ebx_2 - 1) | 0xfffffff8) + 1
        
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(eax_4)
        int32_t ebp_1 = (eax_5 + (edx_1 & 7)) s>> 3 << 3
        int32_t eax_15
        int32_t edx_3
        edx_3:eax_15 = sx.q(zx.d(*(*arg1 + ebp_1 + ebx_2 + 0xc)) * var_114 * arg4 * 2)
        int32_t eax_17 = (eax_15 + (edx_3 & 0xf)) s>> 4
        
        if (eax_17 s> 0x7ff)
            eax_17 = 0x7ff
        else if (eax_17 s< 0xfffff800)
            eax_17 = 0xfffff800
        else if ((eax_17.b & 1) == 0)
            int32_t ecx_3
            ecx_3.b = eax_17 s> 0
            eax_17 = eax_17 + (ecx_3 << 1) - 1
        
        ebx = ebx_2 + ebp_1
        edi = edi_1 + 1
        (&var_104)[ebx] = (*U" ,*& ")[ebx] * eax_17
        
        if (sub_448b30(eax_17, &var_114, &result_1, arg3).b == 0)
            goto label_436d4f

@__security_check_cookie@4(eax_1 ^ &var_114)
return result
