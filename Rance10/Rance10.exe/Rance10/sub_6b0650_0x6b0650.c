// 函数: sub_6b0650
// 地址: 0x6b0650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_8 = nullptr
char* esi = arg2
char var_19 = 0
uint32_t edx = zx.d(*(arg3 + 0x15f))
uint32_t ecx = zx.d(*(arg3 + 0x155))
char* edi_1 = *(arg3 + 0x124) + 1
int32_t ebx = *(arg3 + 0x100)
uint32_t var_18 = ecx

if (edx == 0)
    sub_6a7500(arg3, "internal row logic error")
    noreturn

if (*(arg3 + 0x138) != 0)
    uint32_t eax_2
    
    if (edx u< 8)
        eax_2 = (ebx * edx + 7) u>> 3
    else
        eax_2 = (edx u>> 3) * ebx
    
    if (*(arg3 + 0x138) != eax_2)
        sub_6a7500(arg3, "internal row size calculation error")
        noreturn

if (ebx == 0)
    sub_6a7500(arg3, "internal row width error")
    noreturn

int32_t eax_7 = ebx * edx
int32_t temp3 = eax_7 & 7
char var_14_1 = temp3.b

if (temp3 != 0)
    uint32_t eax_10
    
    if (edx u< 8)
        eax_10 = (eax_7 + 7) u>> 3
    else
        eax_10 = (edx u>> 3) * ebx
    
    char* eax_13 = eax_10 - 1 + esi
    var_8 = eax_13
    eax_13.b = *eax_13
    var_19 = eax_13.b
    char eax_14
    
    if ((*(arg3 + 0x7c) & 0x10000) == 0)
        eax_14 = (0xff s>> var_14_1).b
    else
        eax_14 = (0xff << var_14_1).b
    
    ecx = var_18
    var_14_1 = eax_14

int32_t eax_15

if (*(arg3 + 0x154) != 0)
    eax_15 = *(arg3 + 0x7c)

uint32_t eax_19

if (*(arg3 + 0x154) == 0 || (eax_15.b & 2) == 0 || ecx u>= 6
        || (arg4 != 0 && (arg4 != 1 || (arg4.b & ecx.b) == 0)))
    void* edx_6
    
    if (edx u< 8)
        edx_6 = (eax_7 + 7) u>> 3
    else
        edx_6 = (edx u>> 3) * ebx
    
    eax_19 = sub_700660(esi, edi_1, edx_6)
label_6b0a9d:
    
    if (var_8 != 0)
        eax_19.b = var_14_1
        eax_19.b = not.b(eax_19.b)
        eax_19.b &= *var_8
        eax_19.b |= var_14_1 & var_19
        *var_8 = eax_19.b
else
    eax_19 = var_18
    int32_t ecx_4 = (eax_19 & 1) << (3 - ((ecx + 1) u>> 1).b) & 7
    
    if (ebx u> ecx_4)
        if (edx u< 8)
            int32_t eax_22 = 0
            int32_t edx_3
            
            if ((eax_15 & 0x10000) == 0)
                if (arg4 == 0)
                    if (edx != 1)
                        eax_22.b = edx != 2
                        eax_22 += 1
                    
                    edx_3 = *(((var_18 + eax_22 * 6) << 2) + &data_7743f0)
                else
                    if (edx != 1)
                        eax_22.b = edx != 2
                        eax_22 += 1
                    
                    edx_3 = *((((var_18 u>> 1) + eax_22 * 3) << 2) + &data_77447c)
            else if (arg4 == 0)
                if (edx != 1)
                    eax_22.b = edx != 2
                    eax_22 += 1
                
                edx_3 = *(((var_18 + eax_22 * 6) << 2) + &data_7743a8)
            else
                if (edx != 1)
                    eax_22.b = edx != 2
                    eax_22 += 1
                
                edx_3 = *((((var_18 u>> 1) + eax_22 * 3) << 2) + &data_774458)
            
            char* edi_2 = edi_1 - esi
            
            while (true)
                char eax_29 = edx_3.b
                edx_3 = ror.d(edx_3, 8)
                uint32_t ecx_14 = zx.d(eax_29)
                
                if (eax_29 != 0)
                    eax_29 = *(edi_2 + esi)
                    
                    if (ecx_14 != 0xff)
                        eax_29 &= ecx_14.b
                        ecx_14.b = not.b(ecx_14.b)
                        ecx_14.b &= *esi
                        eax_29 |= ecx_14.b
                    
                    *esi = eax_29
                
                eax_19 = divu.dp.d(0:8, edx)
                
                if (ebx u<= eax_19)
                    break
                
                ebx -= eax_19
                esi = &esi[1]
            
            goto label_6b0a9d
        
        if ((edx.b & 7) != 0)
            sub_6a7500(arg3, "invalid user transform pixel depth")
            noreturn
        
        uint32_t i_11 = edx u>> 3
        int32_t ecx_15 = ecx_4 * i_11
        void* esi_1 = &esi[ecx_15]
        void* edi_3 = &edi_1[ecx_15]
        void* i_6 = ebx * i_11 - ecx_15
        void* i_9
        void* i_8
        
        if (arg4 == 0)
            i_8 = i_11
            i_9 = i_11
        else
            i_8 = i_6
            uint32_t i_10 = i_11 << ((6 - eax_19) u>> 1).b
            
            if (i_10 u<= i_6)
                i_8 = i_10
            
            eax_19 = var_18
            i_9 = i_8
        
        uint32_t edx_4 = i_11 << ((7 - eax_19) u>> 1).b
        
        if (i_8 == 1)
            eax_19.b = *edi_3
            *esi_1 = eax_19.b
            
            if (i_6 u> edx_4)
                do
                    eax_19.b = *(edi_3 + edx_4)
                    edi_3 += edx_4
                    esi_1 += edx_4
                    i_6 -= edx_4
                    *esi_1 = eax_19.b
                while (i_6 u> edx_4)
        else if (i_8 == 2)
            while (true)
                *esi_1 = *edi_3
                eax_19 = zx.d(*(edi_3 + 1))
                *(esi_1 + 1) = eax_19.b
                
                if (i_6 u<= edx_4)
                    break
                
                i_6 -= edx_4
                edi_3 += edx_4
                esi_1 += edx_4
                
                if (i_6 u<= 1)
                    eax_19.b = *edi_3
                    *esi_1 = eax_19.b
                    return eax_19
        else if (i_8 == 3)
            *esi_1 = *edi_3
            *(esi_1 + 1) = *(edi_3 + 1)
            eax_19 = zx.d(*(edi_3 + 2))
            *(esi_1 + 2) = eax_19.b
            
            if (i_6 u> edx_4)
                char eax_49
                
                do
                    char eax_47 = *(edi_3 + edx_4)
                    edi_3 += edx_4
                    esi_1 += edx_4
                    i_6 -= edx_4
                    *esi_1 = eax_47
                    *(esi_1 + 1) = *(edi_3 + 1)
                    eax_49 = *(edi_3 + 2)
                    *(esi_1 + 2) = eax_49
                while (i_6 u> edx_4)
                
                return eax_49
        else
            char eax_37
            
            if (i_8 u< 0x10)
                eax_37 = edx_4.b | i_8.b | edi_3.b | esi_1.b
            
            if (i_8 u>= 0x10 || (eax_37 & 1) != 0)
                eax_19 = sub_700660(esi_1, edi_3, i_8)
                
                if (i_6 u> edx_4)
                    char* eax_44
                    
                    do
                        i_6 -= edx_4
                        edi_3 += edx_4
                        esi_1 += edx_4
                        void* i_7 = i_6
                        
                        if (i_9 u<= i_6)
                            i_7 = i_9
                        
                        i_9 = i_7
                        eax_44 = sub_700660(esi_1, edi_3, i_7)
                    while (i_6 u> edx_4)
                    
                    return eax_44
            else if ((eax_37 & 3) != 0)
                uint32_t var_4_3 = (edx_4 - i_8) u>> 1
                
                while (true)
                    void* i_5 = i_8
                    void* i
                    
                    do
                        eax_19.w = *edi_3
                        esi_1 += 2
                        *(esi_1 - 2) = eax_19.w
                        edi_3 += 2
                        i = i_5
                        i_5 -= 2
                    while (i != 2)
                    
                    if (i_6 u<= edx_4)
                        break
                    
                    i_6 -= edx_4
                    esi_1 += var_4_3 << 1
                    edi_3 += var_4_3 << 1
                    
                    if (i_8 u> i_6)
                        char* edi_5 = edi_3 - esi_1
                        void* i_1
                        
                        do
                            eax_19.b = *(edi_5 + esi_1)
                            esi_1 += 1
                            *(esi_1 - 1) = eax_19.b
                            i_1 = i_6
                            i_6 -= 1
                        while (i_1 != 1)
                        return eax_19
            else
                while (true)
                    void* i_4 = i_8
                    void* i_2
                    
                    do
                        eax_19 = *edi_3
                        edi_3 += 4
                        *esi_1 = eax_19
                        esi_1 += 4
                        i_2 = i_4
                        i_4 -= 4
                    while (i_2 != 4)
                    
                    if (i_6 u<= edx_4)
                        break
                    
                    i_6 -= edx_4
                    uint32_t eax_42 = (edx_4 - i_8) u>> 2 << 2
                    esi_1 += eax_42
                    edi_3 += eax_42
                    
                    if (i_8 u> i_6)
                        char* edi_4 = edi_3 - esi_1
                        void* i_3
                        
                        do
                            eax_42.b = *(edi_4 + esi_1)
                            esi_1 += 1
                            *(esi_1 - 1) = eax_42.b
                            i_3 = i_6
                            i_6 -= 1
                        while (i_3 != 1)
                        return eax_42

return eax_19
