// 函数: sub_62f450
// 地址: 0x62f450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg3
void* var_14 = arg2
arg1.b = edi[2].b
int32_t i_9 = *edi
int32_t i_13 = i_9
uint32_t eax_12

if (arg1.b == 0)
    int32_t ebx_1 = arg4
    uint32_t ecx
    
    if (ebx_1 == 0)
        ecx = 0
    else
        ecx = zx.d(*(ebx_1 + 8))
    
    arg1.b = *(edi + 9)
    uint32_t var_c_1 = ecx
    
    if (arg1.b u< 8)
        uint32_t eax = zx.d(arg1.b)
        
        if (eax == 1)
            void* esi_9 = ((i_9 - 1) u>> 3) + arg2
            arg1 = (i_9 - 1) & 7
            void* edi_6 = arg2 - 1 + i_9
            int32_t edx_8 = 7 - arg1
            var_c_1 = (ecx & 1) * 0xff
            
            if (i_9 == 0)
                arg2 = var_14
            else
                int32_t i_7 = i_9
                int32_t i
                
                do
                    arg1.b = *esi_9
                    uint32_t ecx_10
                    ecx_10.b = edx_8.b
                    arg1.b u>>= ecx_10.b
                    arg1.b &= 1
                    char temp3_1 = arg1.b
                    arg1.b = neg.b(arg1.b)
                    arg1.b = sbb.b(arg1.b, arg1.b, temp3_1 != 0)
                    *edi_6 = arg1.b
                    
                    if (edx_8 != 7)
                        edx_8 += 1
                    else
                        edx_8 = 0
                        esi_9 -= 1
                    
                    edi_6 -= 1
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                ebx_1 = arg4
                arg2 = var_14
        else if (eax == 2)
            arg1 = (i_9 - 1) & 3
            void* esi_6 = ((i_9 - 1) u>> 2) + arg2
            void* edi_4 = arg2 - 1 + i_9
            int32_t ebx_6 = (3 - arg1) * 2
            var_c_1 = (ecx & 3) * 0x55
            
            if (i_9 == 0)
                ebx_1 = arg4
            else
                int32_t i_1
                
                do
                    uint32_t ecx_8
                    ecx_8.b = ebx_6.b
                    char edx_7 = (zx.d(*esi_6) u>> ecx_8.b).b & 3
                    arg1.b = edx_7
                    arg1.b <<= 2
                    arg1.b |= edx_7
                    arg1.b <<= 2
                    arg1.b |= edx_7
                    arg1.b <<= 2
                    arg1.b |= edx_7
                    *edi_4 = arg1.b
                    
                    if (ebx_6 != 6)
                        ebx_6 += 2
                    else
                        ebx_6 = 0
                        esi_6 -= 1
                    
                    edi_4 -= 1
                    i_1 = i_9
                    i_9 -= 1
                while (i_1 != 1)
            label_62f506:
                i_9 = i_13
                ebx_1 = arg4
                arg2 = var_14
        else
            arg1 = eax - 4
            
            if (eax == 4)
                var_c_1 = (ecx & 0xf) * 0x11
                char* esi_3 = ((i_9 - 1) u>> 1) + arg2
                arg1 = ((i_9 - 1) & 1) << 2
                char* edi_2 = arg2 - 1 + i_9
                int32_t ebx_2 = 4 - arg1
                
                if (i_9 != 0)
                    int32_t i_2
                    
                    do
                        uint32_t ecx_3
                        ecx_3.b = ebx_2.b
                        char edx_2 = (zx.d(*esi_3) u>> ecx_3.b).b & 0xf
                        arg1.b = edx_2
                        arg1.b <<= 4
                        arg1.b |= edx_2
                        *edi_2 = arg1.b
                        
                        if (ebx_2 != 4)
                            ebx_2 = 4
                        else
                            ebx_2 = 0
                            esi_3 -= 1
                        
                        edi_2 -= 1
                        i_2 = i_9
                        i_9 -= 1
                    while (i_2 != 1)
                    goto label_62f506
                
                ebx_1 = arg4
        
        *(edi + 9) = 8
        *(edi + 0xb) = 8
        edi[1] = i_9
    
    if (ebx_1 != 0)
        arg1.b = *(edi + 9)
        
        if (arg1.b == 8)
            void* edx_4 = arg2 - 1 + i_9
            void* ecx_6 = var_14 + (i_9 << 1) - 1
            
            if (i_9 != 0)
                int32_t i_10 = i_9
                int32_t i_3
                
                do
                    if (zx.d(*edx_4) != zx.d(var_c_1.b))
                        *ecx_6 = 0xff
                    else
                        *ecx_6 = 0
                    
                    arg1.b = *edx_4
                    edx_4 -= 1
                    *(ecx_6 - 1) = arg1.b
                    ecx_6 -= 2
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
        else if (arg1.b == 0x10)
            arg1 = edi[1]
            void* edx_10 = arg2 - 1 + arg1
            void* ecx_14 = var_14 + (arg1 << 1) - 1
            
            if (i_9 != 0)
                int32_t i_8 = i_9
                int32_t i_4
                
                do
                    if (zx.d(*(edx_10 - 1)) != zx.d((var_c_1 u>> 8).b)
                            || zx.d(*edx_10) != zx.d(var_c_1.b))
                        *(ecx_14 - 1) = 0xffff
                    else
                        *(ecx_14 - 1) = 0
                    
                    arg1.b = *edx_10
                    *(ecx_14 - 2) = arg1.b
                    arg1.b = *(edx_10 - 1)
                    edx_10 -= 2
                    *(ecx_14 - 3) = arg1.b
                    ecx_14 -= 4
                    i_4 = i_8
                    i_8 -= 1
                while (i_4 != 1)
        
        arg1.b = *(edi + 9)
        arg1.b *= 2
        edi[2].b = 4
        *(edi + 0xb) = arg1.b
        *(edi + 0xa) = 2
        eax_12 = zx.d(arg1.b)
        
        if (arg1.b u>= 8)
            int32_t eax_14 = (eax_12 u>> 3) * i_9
            edi[1] = eax_14
            return eax_14
        
        arg1 = (eax_12 * i_9 + 7) u>> 3
        edi[1] = arg1
else if (arg1.b == 2)
    arg1 = arg4
    
    if (arg1 != 0)
        arg3.b = *(edi + 9)
        int32_t ebx
        
        if (arg3.b == 8)
            ebx.b = *(arg1 + 2)
            ebx:1.b = *(arg1 + 4)
            arg1.b = *(arg1 + 6)
            void* ecx_18 = var_14 + (i_9 << 2) - 1
            void* edx_12 = arg2 - 1 + edi[1]
            
            if (i_9 != 0)
                arg1:1.b = arg1.b
                int32_t i_11 = i_9
                int32_t i_5
                
                do
                    if (*(edx_12 - 2) != ebx.b || *(edx_12 - 1) != ebx:1.b || *edx_12 != arg1:1.b)
                        *ecx_18 = 0xff
                    else
                        *ecx_18 = 0
                    
                    arg1.b = *edx_12
                    *(ecx_18 - 1) = arg1.b
                    arg1.b = *(edx_12 - 1)
                    *(ecx_18 - 2) = arg1.b
                    arg1.b = *(edx_12 - 2)
                    edx_12 -= 3
                    *(ecx_18 - 3) = arg1.b
                    ecx_18 -= 4
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
        else if (arg3.b == 0x10)
            arg3.b = *(arg1 + 7)
            ebx.b = *(arg1 + 3)
            ebx:1.b = *(arg1 + 5)
            char var_18_2 = arg3.b
            arg3.b = *(arg1 + 2)
            char var_17_1 = arg3.b
            arg3.b = *(arg1 + 4)
            arg1.b = *(arg1 + 6)
            char var_15_1 = arg1.b
            char* edx_14 = arg2 - 1 + edi[1]
            void* ecx_22 = var_14 + (i_9 << 3) - 1
            
            if (i_9 != 0)
                arg1:1.b = var_18_2
                int32_t i_12 = i_9
                int32_t i_6
                
                do
                    if (edx_14[0xfffffffb] != ebx.b)
                        *(ecx_22 - 1) = 0xffff
                    else
                        arg1.b = var_17_1
                        
                        if (edx_14[0xfffffffc] != arg1.b || edx_14[0xfffffffd] != ebx:1.b)
                            *(ecx_22 - 1) = 0xffff
                        else
                            arg1.b = arg3.b
                            
                            if (edx_14[0xfffffffe] != arg1.b || edx_14[0xffffffff] != arg1:1.b)
                                *(ecx_22 - 1) = 0xffff
                            else
                                arg1.b = var_15_1
                                
                                if (*edx_14 != arg1.b)
                                    *(ecx_22 - 1) = 0xffff
                                else
                                    *(ecx_22 - 1) = 0
                    
                    arg1.b = *edx_14
                    *(ecx_22 - 2) = arg1.b
                    arg1.b = edx_14[0xffffffff]
                    *(ecx_22 - 3) = arg1.b
                    arg1.b = edx_14[0xfffffffe]
                    *(ecx_22 - 4) = arg1.b
                    arg1.b = edx_14[0xfffffffd]
                    *(ecx_22 - 5) = arg1.b
                    arg1.b = edx_14[0xfffffffc]
                    *(ecx_22 - 6) = arg1.b
                    arg1.b = edx_14[0xfffffffb]
                    edx_14 -= 6
                    *(ecx_22 - 7) = arg1.b
                    ecx_22 -= 8
                    i_6 = i_12
                    i_12 -= 1
                while (i_6 != 1)
        arg1.b = *(edi + 9)
        arg1.b <<= 2
        *(edi + 0xb) = arg1.b
        edi[2].b = 6
        *(edi + 0xa) = 4
        eax_12 = zx.d(arg1.b)
        
        if (arg1.b u>= 8)
            int32_t eax_16 = (eax_12 u>> 3) * i_9
            edi[1] = eax_16
            return eax_16
        
        arg1 = (eax_12 * i_9 + 7) u>> 3
        edi[1] = arg1
return arg1
