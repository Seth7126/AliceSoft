// 函数: sub_6893e0
// 地址: 0x6893e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg1
void* var_4 = edi
int32_t edx = *(edi + 0x24)
void* ebx = edi + 0x28
int32_t var_18 = edx
int32_t var_1c = edx

while (true)
    void* ecx = data_75d4e4
    int32_t var_10_1
    
    if (*(ecx + 0x93c) != 0)
        int32_t eax_2 = (*(*(ecx + 0x92c) + 4))(edx)
        edx = var_18
        var_10_1 = eax_2
    else
        var_10_1 = 0xffffffff
    
    int32_t* i = *ebx
    
    for (int32_t edi_1 = *(edi + 0x2c); i != edi_1; i = &i[1])
        if (edx == *i)
            int32_t ecx_2 = *(ebx + 4)
            int32_t var_14 = 0
            int32_t eax_3
            
            if (&var_14 u< ecx_2)
                eax_3 = *ebx
            
            if (&var_14 u>= ecx_2 || eax_3 u> &var_14)
                int32_t edx_5 = *(ebx + 8)
                
                if (ecx_2 == edx_5 && (edx_5 - ecx_2) s>> 2 u< 1)
                    int32_t ebp_3 = *ebx
                    int32_t ecx_11 = (ecx_2 - ebp_3) s>> 2
                    
                    if (0x3fffffff - ecx_11 u< 1)
                        goto label_689735
                    
                    int32_t edx_7 = (edx_5 - ebp_3) s>> 2
                    uint32_t ecx_14 = edx_7 u>> 1
                    int32_t edx_8
                    
                    if (0x3fffffff - ecx_14 u>= edx_7)
                        edx_8 = edx_7 + ecx_14
                    else
                        edx_8 = 0
                    
                    if (edx_8 u< ecx_11 + 1)
                        edx_8 = ecx_11 + 1
                    
                    sub_412f90(ebx, edx_8)
                
                int32_t* eax_16 = *(ebx + 4)
                
                if (eax_16 != 0)
                    *eax_16 = 0
            else
                int32_t edx_1 = *(ebx + 8)
                
                if (ecx_2 == edx_1 && (edx_1 - ecx_2) s>> 2 u< 1)
                    int32_t ecx_4 = (ecx_2 - *ebx) s>> 2
                    
                    if (0x3fffffff - ecx_4 u< 1)
                        goto label_689735
                    
                    int32_t edx_3 = (edx_1 - *ebx) s>> 2
                    uint32_t ecx_7 = edx_3 u>> 1
                    int32_t edx_4
                    
                    if (0x3fffffff - ecx_7 u>= edx_3)
                        edx_4 = edx_3 + ecx_7
                    else
                        edx_4 = 0
                    
                    if (edx_4 u< ecx_4 + 1)
                        edx_4 = ecx_4 + 1
                    
                    sub_412f90(ebx, edx_4)
                
                int32_t* ecx_9 = *(ebx + 4)
                
                if (ecx_9 != 0)
                    *ecx_9 = *(*ebx + ((&var_14 - eax_3) s>> 2 << 2))
            
            edx = var_18
            *(ebx + 4) += 4
    
    if (edx == 0)
        if (var_10_1 != 0xffffffff)
            break
    else if (var_10_1 != 0xffffffff)
        int32_t eax_17 = *(ebx + 4)
        int32_t ecx_16
        
        if (&var_1c u< eax_17)
            ecx_16 = *ebx
        
        if (&var_1c u>= eax_17 || ecx_16 u> &var_1c)
            if (eax_17 == *(ebx + 8))
                sub_415950(ebx, 1)
                edx = var_18
            
            int32_t* eax_20 = *(ebx + 4)
            
            if (eax_20 != 0)
                *eax_20 = edx
        else
            if (eax_17 == *(ebx + 8))
                sub_415950(ebx, 1)
            
            int32_t* ecx_18 = *(ebx + 4)
            
            if (ecx_18 != 0)
                *ecx_18 = *(*ebx + ((&var_1c - ecx_16) s>> 2 << 2))
        
        edi = var_4
        edx = var_10_1
        *(ebx + 4) += 4
        var_18 = edx
        var_1c = edx
        
        if (*(edi + 0x24) s<= 5)
            continue
        else if (var_10_1 s> 5)
            continue
        else
            *(edi + 0x24) = var_10_1
            continue
    
    int32_t eax_21 = *(ebx + 4)
    int32_t ecx_20
    
    if (&var_1c u< eax_21)
        ecx_20 = *ebx
    
    if (&var_1c u>= eax_21 || ecx_20 u> &var_1c)
        if (eax_21 == *(ebx + 8))
            sub_415950(ebx, 1)
            edx = var_18
        
        int32_t* eax_24 = *(ebx + 4)
        
        if (eax_24 != 0)
            *eax_24 = edx
    else
        if (eax_21 == *(ebx + 8))
            sub_415950(ebx, 1)
        
        int32_t* ecx_22 = *(ebx + 4)
        
        if (ecx_22 != 0)
            *ecx_22 = *(*ebx + ((&var_1c - ecx_20) s>> 2 << 2))
    
    *(ebx + 4) += 4
    break

int32_t ecx_24 = *(ebx + 4)
int32_t var_c
void* eax_25 = &var_c
var_c = 0
int32_t edi_3

if (&var_c u< ecx_24)
    edi_3 = *ebx

if (&var_c u>= ecx_24 || edi_3 u> &var_c)
    int32_t edx_13 = *(ebx + 8)
    
    if (ecx_24 == edx_13 && (edx_13 - ecx_24) s>> 2 u< 1)
        int32_t esi_7 = *ebx
        int32_t ecx_31 = (ecx_24 - esi_7) s>> 2
        
        if (0x3fffffff - ecx_31 u< 1)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t edx_15 = (edx_13 - esi_7) s>> 2
        uint32_t eax_38 = edx_15 u>> 1
        int32_t edx_16
        
        if (0x3fffffff - eax_38 u>= edx_15)
            edx_16 = edx_15 + eax_38
        else
            edx_16 = 0
        
        if (edx_16 u< ecx_31 + 1)
            edx_16 = ecx_31 + 1
        
        sub_412f90(ebx, edx_16)
    
    eax_25 = *(ebx + 4)
    
    if (eax_25 != 0)
        *eax_25 = 0
    
    *(ebx + 4) += 4
    return eax_25

int32_t edx_9 = *(ebx + 8)

if (ecx_24 != edx_9)
label_6896ae:
    int32_t* ecx_29 = *(ebx + 4)
    
    if (ecx_29 == 0)
        *(ebx + 4) += 4
        return eax_25
    
    int32_t eax_32 = *(*ebx + ((&var_c - edi_3) s>> 2 << 2))
    *ecx_29 = eax_32
    *(ebx + 4) += 4
    return eax_32

eax_25 = (edx_9 - ecx_24) s>> 2

if (eax_25 u>= 1)
    goto label_6896ae

int32_t ecx_26 = (ecx_24 - edi_3) s>> 2

if (0x3fffffff - ecx_26 u< 1)
label_689735:
    sub_69a551("vector<T> too long")
    noreturn

int32_t edx_11 = (edx_9 - edi_3) s>> 2
uint32_t eax_30 = edx_11 u>> 1
int32_t edx_12

if (0x3fffffff - eax_30 u>= edx_11)
    edx_12 = edx_11 + eax_30
else
    edx_12 = 0

if (edx_12 u< ecx_26 + 1)
    edx_12 = ecx_26 + 1

eax_25 = sub_412f90(ebx, edx_12)
goto label_6896ae
