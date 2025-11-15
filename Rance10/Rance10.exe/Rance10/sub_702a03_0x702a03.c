// 函数: sub_702a03
// 地址: 0x702a03
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = nullptr
int32_t var_10 = 0
int32_t ecx = 0xffffffff
void* eax_1 = *(arg2 + 0x10)
int32_t ebx = 0
int32_t* edi = nullptr
int32_t* var_8 = nullptr
int32_t var_c = 0xffffffff
int32_t esi = *(eax_1 + 0xc)
int32_t eax_2 = *(eax_1 + 8)
int32_t var_18 = esi

if (eax_2 != 0)
    while (true)
        int32_t* esi_1 = *(esi + (ebx << 2))
        
        if (ebx - ecx u> var_10)
            void* eax_5 = *esi_1
            
            if (eax_5 == arg5)
                goto label_702a7f
            
            char* ecx_2 = arg5 + 8
            char* eax_6 = eax_5 + 8
            int32_t eax_8
            
            while (true)
                edx.b = *eax_6
                char temp1_1 = *ecx_2
                bool c_1 = edx.b u< temp1_1
                
                if (edx.b == temp1_1)
                    if (edx.b == 0)
                        eax_8 = 0
                        break
                    
                    edx.b = eax_6[1]
                    char temp3_1 = ecx_2[1]
                    c_1 = edx.b u< temp3_1
                    
                    if (edx.b == temp3_1)
                        eax_6 = &eax_6[2]
                        ecx_2 = &ecx_2[2]
                        
                        if (edx.b != 0)
                            continue
                        
                        eax_8 = 0
                        break
                
                eax_8 = sbb.d(eax_6, eax_6, c_1) | 1
                break
            
            if (eax_8 == 0)
                edx = var_8
            label_702a7f:
                
                if (edx != 0)
                    if ((esi_1[5].b & 3) == 0 && (edx[5].b & 1) == 0)
                        return esi_1
                    
                    break
                
                edi = esi_1
                var_c = ebx
                var_10 = esi_1[1]
        
        void* eax_10 = *esi_1
        int32_t eax_13
        
        if (eax_10 != arg3)
            char* ecx_4 = arg3 + 8
            void* eax_11 = eax_10 + 8
            
            while (true)
                edx.b = *eax_11
                char temp0_1 = *ecx_4
                bool c_2 = edx.b u< temp0_1
                
                if (edx.b == temp0_1)
                    if (edx.b == 0)
                        eax_13 = 0
                        break
                    
                    edx.b = *(eax_11 + 1)
                    char temp2_1 = ecx_4[1]
                    c_2 = edx.b u< temp2_1
                    
                    if (edx.b == temp2_1)
                        eax_11 += 2
                        ecx_4 = &ecx_4[2]
                        
                        if (edx.b != 0)
                            continue
                        
                        eax_13 = 0
                        break
                
                eax_13 = sbb.d(eax_11, eax_11, c_2) | 1
                break
        
        if (eax_10 != arg3 && eax_13 != 0)
            edx = var_8
        else if (PMDtoOffset(arg1, &esi_1[2]) != arg4)
            edx = var_8
        else
            if (edi != 0)
                int32_t ebx_1 = ebx - var_c
                
                if (ebx_1 u<= var_10)
                    if ((edi[5].b & 0x40) != 0)
                        void* eax_20
                        eax_20.b = *(*(*(edi[6] + 0xc) + (ebx_1 << 2)) + 0x14)
                        eax_20.b &= 1
                        uint32_t eax_21 = zx.d(eax_20.b)
                        int32_t eax_22 = neg.d(eax_21)
                        return not.d(sbb.d(eax_22, eax_22, eax_21 != 0)) & edi
                    
                    if (var_c != 0 || (esi_1[5].b & 1) == 0)
                        return edi
                else if ((edi[5].b & 3) == 0 && (esi_1[5].b & 1) == 0)
                    return edi
                
                break
            
            edx = esi_1
            var_8 = edx
        
        ebx += 1
        
        if (ebx u>= eax_2)
            break
        
        ecx = var_c
        esi = var_18

return nullptr
