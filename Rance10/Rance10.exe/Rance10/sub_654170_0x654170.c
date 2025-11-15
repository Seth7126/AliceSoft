// 函数: sub_654170
// 地址: 0x654170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[9]

if (eax == 1)
    arg1[0xa] = 1
    arg1[0xb] = 1
else if (eax == 3)
    int32_t* eax_11 = arg1[0x31]
    int32_t edi_1 = *eax_11
    int32_t ecx_1 = eax_11[0x16]
    int32_t edx_1 = eax_11[0x2c]
    
    if (edi_1 != 1)
        if (edi_1 == 0x52)
            if (ecx_1 != 0x47 || edx_1 != 0x42)
                goto label_654223
            
            arg1[0xa] = 2
            arg1[0xb] = 2
        else if (edi_1 != 0x72 || ecx_1 != 0x67 || edx_1 != 0x62)
        label_654223:
            
            if (arg1[0x40].b == 0)
                goto label_654230
            
            arg1[0xa] = 3
            arg1[0xb] = 2
        else
            arg1[0xa] = 6
            arg1[0xb] = 2
    else if (ecx_1 != 2)
        if (ecx_1 != 0x22 || edx_1 != 0x23)
            goto label_654223
        
        arg1[0xa] = 7
        arg1[0xb] = 2
    else if (edx_1 == 3 || arg1[0x40].b != 0)
        arg1[0xa] = 3
        arg1[0xb] = 2
    else
    label_654230:
        int32_t var_c_2
        
        if (arg1[0x42].b == 0)
            void* eax_17 = *arg1
            var_c_2 = 1
            *(eax_17 + 0x18) = edi_1
            *(eax_17 + 0x1c) = ecx_1
            *(eax_17 + 0x20) = edx_1
            *(*arg1 + 0x14) = 0x71
        label_6542f4:
            (*(*arg1 + 4))(arg1, var_c_2)
            arg1[0xa] = 3
            arg1[0xb] = 2
        else
            uint32_t eax_12 = zx.d(*(arg1 + 0x109))
            
            if (eax_12 == 0)
                arg1[0xa] = 2
                arg1[0xb] = 2
            else
                if (eax_12 != 1)
                    var_c_2 = 0xffffffff
                    *(*arg1 + 0x14) = 0x74
                    *(*arg1 + 0x18) = zx.d(*(arg1 + 0x109))
                    goto label_6542f4
                
                arg1[0xa] = 3
                arg1[0xb] = 2
else if (eax == 4)
    uint32_t eax_4
    
    if (arg1[0x42].b != 0)
        eax_4 = zx.d(*(arg1 + 0x109))
    
    if (arg1[0x42].b == 0 || eax_4 == 0)
        arg1[0xa] = 4
        arg1[0xb] = 4
    else
        if (eax_4 != 2)
            *(*arg1 + 0x14) = 0x74
            *(*arg1 + 0x18) = zx.d(*(arg1 + 0x109))
            (*(*arg1 + 4))(arg1, 0xffffffff)
        
        arg1[0xa] = 5
        arg1[0xb] = 4
else
    arg1[0xa] = 0
    arg1[0xb] = 0

int32_t result = arg1[0x62]
arg1[0xc] = result
arg1[0xd] = result
*(arg1 + 0x38) = 0x3ff0000000000000
arg1[0x10].w = 0
arg1[0x11] = 0
arg1[0x12].w = 0x101
*(arg1 + 0x4a) = 0
arg1[0x13] = 2
arg1[0x14].b = 1
arg1[0x15] = 0x100
arg1[0x1d] = 0
arg1[0x16].w = 0
*(arg1 + 0x5a) = 0
return result
