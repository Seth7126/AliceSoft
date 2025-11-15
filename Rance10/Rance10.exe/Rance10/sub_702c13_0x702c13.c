// 函数: sub_702c13
// 地址: 0x702c13
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = 0xffffffff
void* eax_1 = *(arg2 + 0x10)
int32_t edi = 0
int32_t* var_c = nullptr
int32_t* ebx = nullptr
int32_t* var_20 = nullptr
int32_t* var_10 = nullptr
int32_t esi = *(eax_1 + 0xc)
int32_t eax_2 = *(eax_1 + 8)
int32_t var_28 = esi
int32_t var_18 = 0
int32_t var_14 = 0xffffffff
char var_5 = 1
void* var_1c = 0xffffffff

if (eax_2 != 0)
    while (true)
        int32_t* esi_1 = *(esi + (edi << 2))
        char edx
        
        if (edi - ecx u> var_18)
            void* eax_5 = *esi_1
            int32_t eax_8
            
            if (eax_5 != arg5)
                char* ecx_2 = arg5 + 8
                char* eax_6 = eax_5 + 8
                
                while (true)
                    edx = *eax_6
                    char temp1_1 = *ecx_2
                    bool c_1 = edx u< temp1_1
                    
                    if (edx == temp1_1)
                        if (edx == 0)
                            eax_8 = 0
                            break
                        
                        edx = eax_6[1]
                        char temp3_1 = ecx_2[1]
                        c_1 = edx u< temp3_1
                        
                        if (edx == temp3_1)
                            eax_6 = &eax_6[2]
                            ecx_2 = &ecx_2[2]
                            
                            if (edx != 0)
                                continue
                            
                            eax_8 = 0
                            break
                    
                    eax_8 = sbb.d(eax_6, eax_6, c_1) | 1
                    break
            
            if (eax_5 == arg5 || eax_8 == 0)
                if ((esi_1[5].b & 3) == 0)
                    var_20 = esi_1
                
                var_10 = esi_1
                var_14 = edi
                var_18 = esi_1[1]
        
        void* eax_10 = *esi_1
        int32_t eax_13
        
        if (eax_10 != arg3)
            char* ecx_4 = arg3 + 8
            char* eax_11 = eax_10 + 8
            
            while (true)
                edx = *eax_11
                char temp0_1 = *ecx_4
                bool c_2 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        eax_13 = 0
                        break
                    
                    edx = eax_11[1]
                    char temp2_1 = ecx_4[1]
                    c_2 = edx u< temp2_1
                    
                    if (edx == temp2_1)
                        eax_11 = &eax_11[2]
                        ecx_4 = &ecx_4[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax_13 = 0
                        break
                
                eax_13 = sbb.d(eax_11, eax_11, c_2) | 1
                break
        
        int32_t* eax_24
        
        if (eax_10 != arg3 && eax_13 != 0)
            edx = var_5
            eax_24 = var_c
        else if (PMDtoOffset(arg1, &esi_1[2]) != arg4)
            edx = var_5
            eax_24 = var_c
        else
            edx = var_5
            uint32_t ecx_7 = edi - var_14
            
            if (ecx_7 u> var_18)
                if ((esi_1[5].b & 5) != 0)
                    eax_24 = var_c
                else
                    eax_24 = esi_1
                    var_c = eax_24
            else if (edx == 0)
                eax_24 = var_c
            else
                int32_t* esi_2
                
                if ((var_10[5].b & 0x40) != 0)
                    esi_2 = var_10
                    int32_t eax_21 = *(*(*(esi_2[6] + 0xc) + (ecx_7 << 2)) + 0x14)
                    ecx_7 = eax_21 u>> 2
                    eax_21.b &= 1
                    ecx_7.b = not.b(ecx_7.b)
                    ecx_7.b &= 1
                    char temp4_1 = eax_21.b
                    eax_21.b = neg.b(eax_21.b)
                    eax_21.b = sbb.b(eax_21.b, eax_21.b, temp4_1 != 0)
                    eax_21.b = not.b(eax_21.b)
                    edx &= eax_21.b
                    var_5 = edx
                else
                    if (var_14 == 0)
                        int32_t eax_17
                        eax_17.b = esi_1[5].b
                        eax_17.b &= 1
                        char temp5_1 = eax_17.b
                        eax_17.b = neg.b(eax_17.b)
                        eax_17.b = sbb.b(eax_17.b, eax_17.b, temp5_1 != 0)
                        eax_17.b = not.b(eax_17.b)
                        edx &= eax_17.b
                        var_5 = edx
                    
                    esi_2 = var_10
                    ecx_7.b = 1
                
                if (edx == 0 || ecx_7.b == 0)
                    eax_24 = var_c
                else
                    void* eax_23 = PMDtoOffset(arg1, &esi_2[2])
                    
                    if (ebx != 0 && var_1c != eax_23)
                        break
                    
                    ebx = esi_2
                    var_1c = eax_23
                    edx = var_5
                    eax_24 = var_c
        
        edi += 1
        
        if (edi u>= eax_2)
            if (edx != 0 && ebx != 0)
                return ebx
            
            if (eax_24 != 0 && var_20 != 0)
                return var_20
            
            break
        
        ecx = var_14
        esi = var_28

return nullptr
