// 函数: sub_50bb40
// 地址: 0x50bb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(&arg1[3], arg3, arg2)
int32_t result = sub_50f440(arg1)

if (result.b != 0)
    goto label_50bbd0

result = sub_50e5e0(&arg1[0x33])
int32_t ecx_2 = arg3[1]
int32_t result_1 = result

if (ecx_2 != 1)
    if (ecx_2 == 0x10)
    label_50bba6:
        
        if (arg1[0x2f] == result_1)
            arg1[0x2f] = 0xffffffff
            arg1[0x30] = 0xffffffff
    else if (ecx_2 == 0x11)
        *(arg1 + 0xb9) = 0
    
label_50bbd0:
    
    if (arg3[1] == 0x10)
        arg1[0x2e].b = 0
else
    int32_t edx_1 = arg1[0x2b]
    int32_t edx_2 = neg.d(edx_1)
    
    if (arg2 != (sbb.d(edx_2, edx_2, edx_1 != 0) & (edx_1 + 0xc)))
        int32_t ecx_4 = arg1[0x2c]
        result = ecx_4 + 0xc
        int32_t ecx_5 = neg.d(ecx_4)
        
        if (arg2 != (sbb.d(ecx_5, ecx_5, ecx_4 != 0) & result))
            goto label_50bba6

return result
