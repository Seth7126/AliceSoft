// 函数: sub_6110e0
// 地址: 0x6110e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

do
    int16_t* eax_1 = arg1[0x74]
    uint32_t edx_1 = zx.d(*eax_1)
    arg1[0x74] = &eax_1[1]
    
    if (edx_1 == 0x5a)
        int32_t ecx = *(eax_1 + 2)
        arg1[0x75]
        arg1[0x74] = &eax_1[3]
        int32_t ebp_1 = *(eax_1 + 6)
        arg1[0x74] = &eax_1[5]
        
        if (ecx == 0 && ebp_1 == 2)
            break
        
        arg1[0x74] = &eax_1[1]
    
    uint32_t var_14_1 = edx_1
    sub_611160(arg1)
while (arg1[0x7b] == 0)

void* result
result.b = 1
return result
