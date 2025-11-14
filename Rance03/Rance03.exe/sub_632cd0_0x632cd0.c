// 函数: sub_632cd0
// 地址: 0x632cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_c = nullptr
char* ebx = arg2
char var_1d = 0
uint32_t esi = zx.d(*(arg3 + 0x15f))
uint32_t ecx = zx.d(*(arg3 + 0x155))
int32_t* edx_1 = *(arg3 + 0x124) + 1
int32_t edi = *(arg3 + 0x100)
uint32_t var_18 = ecx

if (esi == 0)
    sub_62a520(arg3, "internal row logic error")
    noreturn

if (*(arg3 + 0x138) != 0)
    uint32_t eax_2
    
    if (esi u< 8)
        eax_2 = (edi * esi + 7) u>> 3
    else
        eax_2 = (esi u>> 3) * edi
    
    if (*(arg3 + 0x138) != eax_2)
        sub_62a520(arg3, "internal row size calculation error")
        noreturn

if (edi == 0)
    sub_62a520(arg3, "internal row width error")
    noreturn

int32_t eax_7 = edi * esi
int32_t temp3 = eax_7 & 7
char var_1c_1 = temp3.b

if (temp3 != 0)
    uint32_t eax_10
    
    if (esi u< 8)
        eax_10 = (eax_7 + 7) u>> 3
    else
        eax_10 = (esi u>> 3) * edi
    
    char* eax_13 = eax_10 - 1 + ebx
    var_c = eax_13
    eax_13.b = *eax_13
    var_1d = eax_13.b
    char eax_14
    
    if ((*(arg3 + 0x7c) & 0x10000) == 0)
        eax_14 = (0xff s>> var_1c_1).b
    else
        eax_14 = (0xff << var_1c_1).b
    
    ecx = var_18
    var_1c_1 = eax_14

int32_t eax_15

if (*(arg3 + 0x154) != 0)
    eax_15 = *(arg3 + 0x7c)

int32_t i_8

if (*(arg3 + 0x154) == 0 || (eax_15.b & 2) == 0 || ecx u>= 6
        || (arg4 != 0 && (arg4 != 1 || (arg4.b & ecx.b) == 0)))
    void* esi_10
    
    if (esi u< 8)
        esi_10 = (eax_7 + 7) u>> 3
    else
        esi_10 = (esi u>> 3) * edi
    
    i_8 = sub_69d850(ebx, edx_1, esi_10)
label_63313d:
    
    if (var_c != 0)
        i_8.b = var_1c_1
        i_8.b = not.b(i_8.b)
        i_8.b &= *var_c
        i_8.b |= var_1c_1 & var_1d
        *var_c = i_8.b
else
    i_8 = (var_18 & 1) << (3 - ((ecx + 1) u>> 1).b) & 7
    
    if (edi u> i_8)
        if (esi u< 8)
            uint32_t temp0_1 = divu.dp.d(0:8, esi)
            int32_t edx_4
            
            if ((eax_15 & 0x10000) == 0)
                if (arg4 == 0)
                    int32_t eax_29 = 0
                    
                    if (esi != 1)
                        eax_29.b = esi != 2
                        eax_29 += 1
                    
                    i_8 = var_18 + eax_29 * 6
                    edx_4 = *((i_8 << 2) + &data_6f1a80)
                else
                    int32_t eax_28 = 0
                    
                    if (esi != 1)
                        eax_28.b = esi != 2
                        eax_28 += 1
                    
                    i_8 = eax_28 * 3
                    edx_4 = *((((var_18 u>> 1) + i_8) << 2) + &data_6f109c)
            else if (arg4 == 0)
                int32_t eax_26 = 0
                
                if (esi != 1)
                    eax_26.b = esi != 2
                    eax_26 += 1
                
                i_8 = var_18 + eax_26 * 6
                edx_4 = *((i_8 << 2) + &data_6f1a38)
            else
                int32_t eax_25 = 0
                
                if (esi != 1)
                    eax_25.b = esi != 2
                    eax_25 += 1
                
                i_8 = eax_25 * 3
                edx_4 = *((((var_18 u>> 1) + i_8) << 2) + &data_6f1078)
            
            char* esi_3 = edx_1 - ebx
            
            while (true)
                char ecx_10 = edx_4.b
                edx_4 = ror.d(edx_4, 8)
                uint32_t ecx_11 = zx.d(ecx_10)
                
                if (ecx_11 != 0)
                    i_8.b = *(esi_3 + ebx)
                    
                    if (ecx_11 != 0xff)
                        i_8.b &= ecx_11.b
                        ecx_11.b = not.b(ecx_11.b)
                        ecx_11.b &= *ebx
                        i_8.b |= ecx_11.b
                    
                    *ebx = i_8.b
                
                if (edi u<= temp0_1)
                    break
                
                edi -= temp0_1
                ebx = &ebx[1]
            
            goto label_63313d
        
        if ((esi.b & 7) != 0)
            sub_62a520(arg3, "invalid user transform pixel depth")
            noreturn
        
        uint32_t i_11 = esi u>> 3
        int32_t eax_31 = i_8 * i_11
        void* edx_5 = edx_1 + eax_31
        void* ebx_1 = &ebx[eax_31]
        void* i_6 = edi * i_11 - eax_31
        void* i_10
        uint32_t i_12
        
        if (arg4 == 0)
            i_12 = i_11
            i_8 = i_11
            i_10 = i_8
        else
            i_12 = i_11
            i_8 = (1 << ((6 - var_18) u>> 1).b) * i_12
            i_10 = i_8
            
            if (i_8 u> i_6)
                i_8 = i_6
                i_10 = i_8
        
        int32_t ebp_2 = 1 << ((7 - var_18) u>> 1).b
        int32_t var_14_2 = ebp_2
        int32_t ecx_17 = ebp_2 * i_12
        
        if (i_8 == 1)
            i_8.b = *edx_5
            *ebx_1 = i_8.b
            
            if (i_6 u> ecx_17)
                do
                    i_8.b = *(edx_5 + ecx_17)
                    edx_5 += ecx_17
                    ebx_1 += ecx_17
                    i_6 -= ecx_17
                    *ebx_1 = i_8.b
                while (i_6 u> ecx_17)
        else if (i_8 == 2)
            while (true)
                *ebx_1 = *edx_5
                i_8 = zx.d(*(edx_5 + 1))
                *(ebx_1 + 1) = i_8.b
                
                if (i_6 u<= ecx_17)
                    break
                
                i_6 -= ecx_17
                edx_5 += ecx_17
                ebx_1 += ecx_17
                
                if (i_6 u<= 1)
                    i_8.b = *edx_5
                    *ebx_1 = i_8.b
                    return i_8
        else if (i_8 == 3)
            *ebx_1 = *edx_5
            *(ebx_1 + 1) = *(edx_5 + 1)
            i_8 = zx.d(*(edx_5 + 2))
            *(ebx_1 + 2) = i_8.b
            
            if (i_6 u> ecx_17)
                char eax_40
                
                do
                    char eax_38 = *(edx_5 + ecx_17)
                    edx_5 += ecx_17
                    ebx_1 += ecx_17
                    i_6 -= ecx_17
                    *ebx_1 = eax_38
                    *(ebx_1 + 1) = *(edx_5 + 1)
                    eax_40 = *(edx_5 + 2)
                    *(ebx_1 + 2) = eax_40
                while (i_6 u> ecx_17)
                
                return eax_40
        else if (i_8 u>= 0x10 || (ebx_1.b & 1) != 0 || (edx_5.b & 1) != 0 || (i_8.b & 1) != 0
                || (ecx_17.b & 1) != 0)
            i_8 = sub_69d850(ebx_1, edx_5, i_8)
            
            if (i_6 u> ecx_17)
                void* esi_8 = edx_5
                int32_t* eax_35
                
                do
                    void* i_9 = i_10
                    i_6 -= ecx_17
                    esi_8 += ecx_17
                    ebx_1 += ecx_17
                    
                    if (i_9 u> i_6)
                        i_9 = i_6
                    
                    i_10 = i_9
                    eax_35 = sub_69d850(ebx_1, esi_8, i_9)
                while (i_6 u> ecx_17)
                
                return eax_35
        else if ((ebx_1.b & 3) != 0 || (edx_5.b & 3) != 0 || (i_8.b & 3) != 0
                || (ecx_17.b & 3) != 0)
            uint32_t ebp_8 = (ecx_17 - i_8) u>> 1
            
            while (true)
                int32_t i_5 = i_8
                int32_t i
                
                do
                    i_8.w = *edx_5
                    ebx_1 += 2
                    *(ebx_1 - 2) = i_8.w
                    edx_5 += 2
                    i = i_5
                    i_5 -= 2
                while (i != 2)
                
                if (i_6 u<= ecx_17)
                    break
                
                i_8 = i_10
                ebx_1 += ebp_8 << 1
                i_6 -= ecx_17
                edx_5 += ebp_8 << 1
                
                if (i_8 u> i_6)
                    char* edx_7 = edx_5 - ebx_1
                    void* i_7 = i_6
                    void* i_1
                    
                    do
                        i_8.b = *(edx_7 + ebx_1)
                        ebx_1 += 1
                        *(ebx_1 - 1) = i_8.b
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    return i_8
        else
            uint32_t ebp_5 = (ecx_17 - i_8) u>> 2
            
            while (true)
                int32_t i_4 = i_8
                int32_t i_2
                
                do
                    i_8 = *edx_5
                    edx_5 += 4
                    *ebx_1 = i_8
                    ebx_1 += 4
                    i_2 = i_4
                    i_4 -= 4
                while (i_2 != 4)
                
                if (i_6 u<= ecx_17)
                    break
                
                uint32_t eax_34 = ebp_5 << 2
                i_6 -= ecx_17
                ebx_1 += eax_34
                edx_5 += eax_34
                i_8 = i_10
                
                if (i_8 u> i_6)
                    char* edx_6 = edx_5 - ebx_1
                    void* i_3
                    
                    do
                        i_8.b = *(edx_6 + ebx_1)
                        ebx_1 += 1
                        *(ebx_1 - 1) = i_8.b
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                    return i_8

return i_8
