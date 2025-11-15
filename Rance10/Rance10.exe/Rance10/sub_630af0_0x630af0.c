// 函数: sub_630af0
// 地址: 0x630af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg1[2]

if (edx != 0)
    int32_t* eax_1 = arg1[6]
    int16_t* esi_1 = eax_1[1]
    
    if (*eax_1 != esi_1)
        goto label_630b2f
    
    if (esi_1 == arg1[1])
        arg1[2] = 0
    else
        int32_t eax_3 = arg1[3] | 0x60
        eax_1 = sub_632460(eax_3, edx, &arg1[4], esi_1, arg1[1], eax_3, *arg1)
        
        if (eax_1.b == 0)
            esi_1 = &esi_1[1]
        label_630b2f:
            int32_t var_14_2 = *arg1
            arg1[3] |= 0x100
            
            if (sub_632460(eax_1, arg1[2], &arg1[4], esi_1, arg1[1], arg1[3], var_14_2) == 0)
                arg1[2] = 0

return arg1
