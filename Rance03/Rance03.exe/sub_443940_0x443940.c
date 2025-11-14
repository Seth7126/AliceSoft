// 函数: sub_443940
// 地址: 0x443940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_118
int32_t eax_1 = __security_cookie ^ &var_118
int32_t var_104 = 0
char var_100[0xfc]
char* eax_3 = _memset(&var_100, 0, 0xfc)
int32_t var_108 = 0
uint32_t result_1
uint32_t result = sub_446db0(eax_3, &var_118, &result_1, arg3)

if (result.b == 0)
    sub_69a5bc(eax_1 ^ &var_118)
    return result

uint32_t result_2 = result_1

if (result_2 u>= 0x40)
    result.b = 0
else
    int32_t eax_4 = *((result_2 << 2) + &data_7050d8)
    int32_t edi_2 = eax_4 & 0x80000007
    
    if (edi_2 s< 0)
        edi_2 = ((edi_2 - 1) | 0xfffffff8) + 1
    
    int32_t ecx_3 = var_118
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(eax_4)
    int32_t esi_2 = ((edx_1 & 7) + eax_5) s>> 3
    int32_t edx_3
    edx_3.b = ecx_3 s> 0
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = sx.q(((edx_3 << 1) + 0xffffffff + (ecx_3 << 1))
        * zx.d(*(*(arg1 + 4) + (esi_2 << 3) + edi_2 + 0x50)) * arg4)
    int32_t esi_3 = result_2 + 1
    
    if (sub_446c70(sub_443610(&var_104, &var_108, edi_2, esi_2, (eax_9 + (edx_5 & 0xf)) s>> 4), 
        &var_118, &result_1, arg3).b == 0)
    label_443b1e:
        result.b = 0
    else
        int32_t edi_5 = var_108
        
        while (true)
            result = result_1
            
            if (result == 0xffffffff)
                if (edi_5 != 0)
                    sub_443680(arg2, &var_104)
                    result.b = 1
                else
                    sub_441ee0(arg2, (var_104 s>> 8).w)
                    result.b = 1
                
                break
            
            int32_t esi_4 = esi_3 + result
            
            if (esi_4 u>= 0x40)
                goto label_443b1e
            
            int32_t eax_13 = *((esi_4 << 2) + &data_7050d8)
            int32_t edi_7 = eax_13 & 0x80000007
            
            if (edi_7 s< 0)
                edi_7 = ((edi_7 - 1) | 0xfffffff8) + 1
            
            int32_t ecx_9 = var_118
            int32_t eax_14
            int32_t edx_8
            edx_8:eax_14 = sx.q(eax_13)
            int32_t ebx_1 = ((edx_8 & 7) + eax_14) s>> 3
            int32_t edx_10
            edx_10.b = ecx_9 s> 0
            int32_t eax_18
            int32_t edx_12
            edx_12:eax_18 = sx.q(((edx_10 << 1) + 0xffffffff + (ecx_9 << 1))
                * zx.d(*(*(arg1 + 4) + (ebx_1 << 3) + edi_7 + 0x50)) * arg4)
            int32_t eax_20 = (eax_18 + (edx_12 & 0xf)) s>> 4
            
            if (eax_20 s> 0x7ff)
                eax_20 = 0x7ff
            else if (eax_20 s< 0xfffff800)
                eax_20 = 0xfffff800
            else if ((eax_20.b & 1) == 0)
                int32_t ecx_14
                ecx_14.b = eax_20 s> 0
                eax_20 -= (ecx_14 << 1) + 0xffffffff
            
            edi_5 = edi_7 + (ebx_1 << 3)
            esi_3 = esi_4 + 1
            (&var_104)[edi_5] = (*U" ,*& ")[edi_5] * eax_20
            
            if (sub_446c70(eax_20, &var_118, &result_1, arg3).b == 0)
                goto label_443b1e

sub_69a5bc(eax_1 ^ &var_118)
return result
