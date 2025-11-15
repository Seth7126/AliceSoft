// 函数: sub_6ac630
// 地址: 0x6ac630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
arg1.b = ebx[2].b
int32_t edi = arg2
int32_t i_8 = *ebx
int32_t var_14 = edi
int32_t* var_10 = ebx
int32_t i_13 = i_8
uint32_t eax_11

if (arg1.b == 0)
    int32_t edx = arg4
    uint32_t ecx
    
    if (edx == 0)
        ecx = 0
    else
        ecx = zx.d(*(edx + 8))
    
    arg1.b = *(ebx + 9)
    uint32_t var_c_1 = ecx
    
    if (arg1.b u< 8)
        uint32_t eax = zx.d(arg1.b)
        
        if (eax == 1)
            int32_t esi_9 = ((i_8 - 1) u>> 3) + edi
            arg1 = (i_8 - 1) & 7
            char* edi_7 = edi - 1 + i_8
            int32_t edx_9 = 7 - arg1
            var_c_1 = (ecx & 1) * 0xff
            
            if (i_8 != 0)
                int32_t i_7 = i_8
                int32_t i
                
                do
                    arg1.b = *esi_9
                    uint32_t ecx_9
                    ecx_9.b = edx_9.b
                    arg1.b u>>= ecx_9.b
                    arg1.b &= 1
                    char temp3_1 = arg1.b
                    arg1.b = neg.b(arg1.b)
                    arg1.b = sbb.b(arg1.b, arg1.b, temp3_1 != 0)
                    *edi_7 = arg1.b
                    
                    if (edx_9 != 7)
                        edx_9 += 1
                    else
                        edx_9 = 0
                        esi_9 -= 1
                    
                    edi_7 -= 1
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                goto label_6ac6ec
            
            edx = arg4
            edi = var_14
        else if (eax == 2)
            int32_t esi_6 = ((i_8 - 1) u>> 2) + edi
            arg1 = (i_8 - 1) & 3
            void* edi_5 = edi - 1 + i_8
            int32_t ebx_3 = (3 - arg1) * 2
            var_c_1 = (ecx & 3) * 0x55
            
            if (i_8 == 0)
                ebx = var_10
                edi = var_14
            else
                int32_t i_1
                
                do
                    uint32_t ecx_7
                    ecx_7.b = ebx_3.b
                    char edx_8 = (zx.d(*esi_6) u>> ecx_7.b).b & 3
                    arg1.b = edx_8
                    arg1.b <<= 2
                    arg1.b |= edx_8
                    arg1.b <<= 2
                    arg1.b |= edx_8
                    arg1.b <<= 2
                    arg1.b |= edx_8
                    *edi_5 = arg1.b
                    
                    if (ebx_3 != 6)
                        ebx_3 += 2
                    else
                        ebx_3 = 0
                        esi_6 -= 1
                    
                    edi_5 -= 1
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
            label_6ac6e8:
                i_8 = i_13
            label_6ac6ec:
                ebx = var_10
                edx = arg4
                edi = var_14
        else
            arg1 = eax - 4
            
            if (eax == 4)
                char* esi_3 = ((i_8 - 1) u>> 1) + edi
                var_c_1 = (ecx & 0xf) * 0x11
                arg1 = ((i_8 - 1) & 1) << 2
                char* edi_2 = edi - 1 + i_8
                int32_t ebx_1 = 4 - arg1
                
                if (i_8 != 0)
                    int32_t i_2
                    
                    do
                        uint32_t ecx_3
                        ecx_3.b = ebx_1.b
                        char edx_3 = (zx.d(*esi_3) u>> ecx_3.b).b & 0xf
                        arg1.b = edx_3
                        arg1.b <<= 4
                        arg1.b |= edx_3
                        *edi_2 = arg1.b
                        
                        if (ebx_1 != 4)
                            ebx_1 = 4
                        else
                            ebx_1 = 0
                            esi_3 -= 1
                        
                        edi_2 -= 1
                        i_2 = i_8
                        i_8 -= 1
                    while (i_2 != 1)
                    goto label_6ac6e8
                
                ebx = var_10
                edi = var_14
        
        *(ebx + 9) = 8
        *(ebx + 0xb) = 8
        ebx[1] = i_8
    
    if (edx != 0)
        arg1.b = *(ebx + 9)
        
        if (arg1.b == 8)
            char* edx_5 = var_14 - 1 + i_8
            char* ecx_5 = var_14 - 1 + (i_8 << 1)
            
            if (i_8 != 0)
                int32_t i_9 = i_8
                int32_t i_3
                
                do
                    if (zx.d(*edx_5) != zx.d(var_c_1.b))
                        *ecx_5 = 0xff
                    else
                        *ecx_5 = 0
                    
                    arg1.b = *edx_5
                    edx_5 -= 1
                    *(ecx_5 - 1) = arg1.b
                    ecx_5 -= 2
                    i_3 = i_9
                    i_9 -= 1
                while (i_3 != 1)
        else if (arg1.b == 0x10)
            arg1 = ebx[1]
            void* edx_11 = edi - 1 + arg1
            void* ecx_14 = (arg1 << 1) + 0xffffffff + edi
            
            if (i_8 != 0)
                int32_t i_12 = i_8
                int32_t i_4
                
                do
                    if (zx.d(*(edx_11 - 1)) != var_c_1 u>> 8 || zx.d(*edx_11) != zx.d(var_c_1.b))
                        *(ecx_14 - 1) = 0xffff
                    else
                        *(ecx_14 - 1) = 0
                    
                    arg1.b = *edx_11
                    *(ecx_14 - 2) = arg1.b
                    arg1.b = *(edx_11 - 1)
                    edx_11 -= 2
                    *(ecx_14 - 3) = arg1.b
                    ecx_14 -= 4
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
        
        arg1.b = *(ebx + 9)
        arg1.b *= 2
        ebx[2].b = 4
        *(ebx + 0xb) = arg1.b
        *(ebx + 0xa) = 2
        eax_11 = zx.d(arg1.b)
        
        if (arg1.b u>= 8)
            int32_t eax_13 = (eax_11 u>> 3) * i_8
            ebx[1] = eax_13
            return eax_13
        
        arg1 = (eax_11 * i_8 + 7) u>> 3
        ebx[1] = arg1
else if (arg1.b == 2)
    arg1 = arg4
    
    if (arg1 != 0)
        arg3.b = *(ebx + 9)
        
        if (arg3.b == 8)
            arg3.b = *(arg1 + 2)
            char var_1a_1 = arg3.b
            arg3.b = *(arg1 + 4)
            arg1.b = *(arg1 + 6)
            char var_18_1 = arg1.b
            void* ecx_17 = edi - 1 + (i_8 << 2)
            char* edx_13 = edi - 1 + ebx[1]
            
            if (i_8 != 0)
                arg1:1.b = var_1a_1
                int32_t i_10 = i_8
                ebx.b = arg3.b
                ebx:1.b = var_18_1
                int32_t i_5
                
                do
                    if (edx_13[0xfffffffe] != arg1:1.b || edx_13[0xffffffff] != ebx.b
                            || *edx_13 != ebx:1.b)
                        *ecx_17 = 0xff
                    else
                        *ecx_17 = 0
                    
                    arg1.b = *edx_13
                    *(ecx_17 - 1) = arg1.b
                    arg1.b = edx_13[0xffffffff]
                    *(ecx_17 - 2) = arg1.b
                    arg1.b = edx_13[0xfffffffe]
                    edx_13 -= 3
                    *(ecx_17 - 3) = arg1.b
                    ecx_17 -= 4
                    i_5 = i_10
                    i_10 -= 1
                while (i_5 != 1)
                ebx = var_10
        else if (arg3.b == 0x10)
            arg3.b = *(arg1 + 3)
            char var_18_2 = arg3.b
            arg3.b = *(arg1 + 5)
            char var_19_2 = arg3.b
            arg3.b = *(arg1 + 7)
            char var_1a_2 = arg3.b
            arg3.b = *(arg1 + 2)
            char var_17_1 = arg3.b
            arg3.b = *(arg1 + 4)
            arg1.b = *(arg1 + 6)
            char var_15_1 = arg1.b
            void* ecx_20 = edi - 1 + (i_8 << 3)
            char* edx_15 = edi - 1 + ebx[1]
            
            if (i_8 != 0)
                arg1:1.b = var_18_2
                int32_t i_11 = i_8
                ebx.b = var_19_2
                ebx:1.b = var_1a_2
                int32_t i_6
                
                do
                    if (edx_15[0xfffffffb] != arg1:1.b)
                        *(ecx_20 - 1) = 0xffff
                    else
                        arg1.b = var_17_1
                        
                        if (edx_15[0xfffffffc] != arg1.b || edx_15[0xfffffffd] != ebx.b)
                            *(ecx_20 - 1) = 0xffff
                        else
                            arg1.b = arg3.b
                            
                            if (edx_15[0xfffffffe] != arg1.b || edx_15[0xffffffff] != ebx:1.b)
                                *(ecx_20 - 1) = 0xffff
                            else
                                arg1.b = var_15_1
                                
                                if (*edx_15 != arg1.b)
                                    *(ecx_20 - 1) = 0xffff
                                else
                                    *(ecx_20 - 1) = 0
                    
                    arg1.b = *edx_15
                    *(ecx_20 - 2) = arg1.b
                    arg1.b = edx_15[0xffffffff]
                    *(ecx_20 - 3) = arg1.b
                    arg1.b = edx_15[0xfffffffe]
                    *(ecx_20 - 4) = arg1.b
                    arg1.b = edx_15[0xfffffffd]
                    *(ecx_20 - 5) = arg1.b
                    arg1.b = edx_15[0xfffffffc]
                    *(ecx_20 - 6) = arg1.b
                    arg1.b = edx_15[0xfffffffb]
                    edx_15 -= 6
                    *(ecx_20 - 7) = arg1.b
                    ecx_20 -= 8
                    i_6 = i_11
                    i_11 -= 1
                while (i_6 != 1)
                ebx = var_10
        
        arg1.b = *(ebx + 9)
        arg1.b <<= 2
        *(ebx + 0xb) = arg1.b
        ebx[2].b = 6
        *(ebx + 0xa) = 4
        eax_11 = zx.d(arg1.b)
        
        if (arg1.b u>= 8)
            int32_t eax_15 = (eax_11 u>> 3) * i_8
            ebx[1] = eax_15
            return eax_15
        
        arg1 = (eax_11 * i_8 + 7) u>> 3
        ebx[1] = arg1
return arg1
