// 函数: sub_437920
// 地址: 0x437920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *arg1
int32_t* var_1c = arg1
uint32_t* esi = arg2
int16_t* result

if (ebx u>= 0x10)
    int32_t edi_1 = arg1[1]
    
    if (edi_1 u>= 0x10)
        int16_t* edx_1 = arg1[8]
        result = arg1[2]
        uint32_t j_5 = ebx u>> 1
        uint32_t i_6 = edi_1 u>> 1
        int16_t* ebp_1 = arg1[5]
        arg2 = edx_1
        uint32_t j_6 = j_5
        int32_t var_20_1 = 0xeb
        
        if (i_6 != 0)
            int32_t j_2 = j_5 - 2
            int32_t j_4 = j_2
            uint32_t i_3 = i_6
            int32_t var_18_1 = 0xf0
            uint32_t i
            
            do
                if (j_5 != 0)
                    uint32_t j_3 = j_5
                    uint32_t j
                    
                    do
                        int16_t ecx_1 = *result
                        char var_14
                        
                        if (ecx_1 s>= 0x10)
                            uint32_t edx_2 = zx.d(ecx_1.b)
                            
                            if (ecx_1 s> 0xeb)
                                edx_2 = 0xeb
                            
                            var_14.d = edx_2
                            edx_1 = arg2
                        else
                            var_14 = 0x10
                        
                        uint16_t ecx_2 = *ebp_1
                        
                        if (ecx_2 s>= 0x10)
                            j_5 = zx.d(ecx_2.b)
                            
                            if (ecx_2 s> 0xf0)
                                j_5 = 0xf0
                        else
                            j_5.b = 0x10
                        
                        int16_t edx_3 = *edx_1
                        
                        if (edx_3 s>= 0x10)
                            ecx_2 = zx.w(edx_3.b)
                            
                            if (edx_3 s> 0xf0)
                                ecx_2 = 0xf0
                        else
                            ecx_2.b = 0x10
                        
                        result = &result[1]
                        ebp_1 = &ebp_1[1]
                        *esi = ((zx.d(ecx_2.b) | 0xffffff00) << 8 | zx.d(j_5.b)) << 8 | zx.d(var_14)
                        esi = &esi[1]
                        edx_1 = &arg2[1]
                        arg2 = edx_1
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    j_2 = j_4
                
                int16_t ebx_1 = *result
                int32_t edx_12 = esi[-1] & 0xffff00
                uint32_t ecx
                
                if (ebx_1 s>= 0x10)
                    ecx = zx.d(ebx_1.b)
                    
                    if (ebx_1 s> 0xeb)
                        ecx = 0xeb
                else
                    ecx.b = 0x10
                
                *esi = zx.d(ecx.b) | edx_12 | 0xff000000
                int16_t ebx_2 = result[1]
                uint32_t ecx_7
                
                if (ebx_2 s>= 0x10)
                    ecx_7 = zx.d(ebx_2.b)
                    
                    if (ebx_2 s> 0xeb)
                        ecx_7 = 0xeb
                else
                    ecx_7.b = 0x10
                
                result = &result[2]
                esi[1] = zx.d(ecx_7.b) | edx_12 | 0xff000000
                esi = &esi[2]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        int16_t edx_13 = *result
                        
                        if (edx_13 s>= 0x10)
                            ecx = zx.d(edx_13.b)
                            
                            if (edx_13 s> 0xeb)
                                ecx = 0xeb
                        else
                            ecx.b = 0x10
                        
                        result = &result[1]
                        *esi = zx.d(ecx.b) | 0xff000000
                        esi = &esi[1]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    j_2 = j_4
                
                i = i_3
                i_3 -= 1
                edx_1 = arg2
                j_5 = j_6
            while (i != 1)
            arg1 = var_1c
        
        int32_t edx_14 = *arg1
        int16_t* i_5 = 2
        arg2 = 2
        int16_t* i_1
        
        do
            int32_t edi_2 = 0
            
            if (edx_14 != 0)
                do
                    int16_t ecx_11 = *result
                    
                    if (ecx_11 s>= 0x10)
                        j_5 = zx.d(ecx_11.b)
                        
                        if (ecx_11 s> 0xeb)
                            j_5 = 0xeb
                    else
                        j_5.b = 0x10
                    
                    edi_2 += 1
                    result = &result[1]
                    *esi = (*(esi - (edx_14 << 2)) & 0xffffff00) | zx.d(j_5.b)
                    esi = &esi[1]
                    edx_14 = *var_1c
                while (edi_2 u< edx_14)
                
                i_5 = arg2
            
            i_1 = i_5
            i_5 -= 1
            arg2 = i_5
        while (i_1 != 1)
        int16_t* i_4 = i_6 - 2
        arg2 = i_4
        
        if (i_6 != 2)
            uint32_t ecx_14 = *var_1c
            int16_t* i_2
            
            do
                int32_t edi_3 = 0
                
                if (ecx_14 != 0)
                    do
                        int16_t edx_20 = *result
                        
                        if (edx_20 s>= 0x10)
                            ecx_14 = zx.d(edx_20.b)
                            
                            if (edx_20 s> 0xeb)
                                ecx_14 = 0xeb
                        else
                            ecx_14.b = 0x10
                        
                        edi_3 += 1
                        result = &result[1]
                        *esi = zx.d(ecx_14.b) | 0xff000000
                        esi = &esi[1]
                        ecx_14 = *var_1c
                    while (edi_3 u< ecx_14)
                    
                    i_4 = arg2
                
                i_2 = i_4
                i_4 -= 1
                arg2 = i_4
            while (i_2 != 1)

result.b = 1
return result
