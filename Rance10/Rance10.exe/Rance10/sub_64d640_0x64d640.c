// 函数: sub_64d640
// 地址: 0x64d640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_114
int32_t eax_1 = __security_cookie ^ &var_114
int32_t ebx = arg4
int32_t ecx_1 = *(*(arg1 + 0x194) + (*(arg2 + 4) << 2) + 0x2c)
var_114 = *(arg2 + 0x54)
int32_t result = arg3 + (arg5 << 2)
int32_t var_10c = ecx_1
int32_t result_1 = result

if (arg7 u> 0)
    int32_t ebp_1 = arg6
    int32_t i
    
    do
        int32_t var_104[0x40]
        ecx_1(&var_104, result, ebp_1)
        int32_t ebp_2 = var_114
        
        for (int32_t j = 0; j s< 0x40; j += 1)
            int32_t esi_1 = *(ebp_2 + (j << 2))
            int32_t eax_5 = var_104[j]
            int32_t ecx_3 = esi_1 s>> 1
            int16_t eax_9
            
            if (eax_5 s>= 0)
                int32_t eax_10 = eax_5 + ecx_3
                
                if (eax_10 s< esi_1)
                    eax_9 = 0
                else
                    eax_9 = (divs.dp.d(sx.q(eax_10), esi_1)).w
            else
                int32_t ecx_4 = ecx_3 - eax_5
                
                if (ecx_4 s< esi_1)
                    eax_9 = 0
                else
                    eax_9 = (neg.d(divs.dp.d(sx.q(ecx_4), esi_1))).w
            
            *(ebx + (j << 1)) = eax_9
        
        ebx -= 0xffffff80
        ecx_1 = var_10c
        ebp_1 = arg6 + *(arg2 + 0x24)
        i = arg7
        arg7 -= 1
        result = result_1
        arg6 = ebp_1
    while (i != 1)

@__security_check_cookie@4(eax_1 ^ &var_114)
return result
