// 函数: sub_544930
// 地址: 0x544930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg2
void* edi = arg1
void* var_c = edi
sub_468ec0(ebx, (*(edi + 8) - *(edi + 4)) s>> 2)

for (void** i = *(edi + 4); i != *(edi + 8); i = &i[1])
    void* edi_1 = ebx + 4
    int32_t eax_3 = *(edi_1 + 4)
    
    if (*i != 0)
        char var_e = 1
        int32_t ecx_5
        
        if (&var_e u< eax_3)
            ecx_5 = *edi_1
        
        if (&var_e u>= eax_3 || ecx_5 u> &var_e)
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_7 = *(edi_1 + 4)
            
            if (eax_7 != 0)
                *eax_7 = 1
        else
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_7 = *(edi_1 + 4)
            
            if (ecx_7 != 0)
                int32_t eax_6
                eax_6.b = *(&var_e - ecx_5 + *edi_1)
                *ecx_7 = eax_6.b
            
            ebx = arg2
        
        *(edi_1 + 4) += 1
        
        if (sub_541c90(*i, ebx) == 0)
            return 0
    else
        char var_f = 0
        int32_t ecx_1
        
        if (&var_f u< eax_3)
            ecx_1 = *edi_1
        
        if (&var_f u>= eax_3 || ecx_1 u> &var_f)
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_5 = *(edi_1 + 4)
            
            if (eax_5 != 0)
                *eax_5 = 0
            
            *(edi_1 + 4) += 1
        else
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_3 = *(edi_1 + 4)
            
            if (ecx_3 != 0)
                int32_t eax_4
                eax_4.b = *(&var_f - ecx_1 + *edi_1)
                *ecx_3 = eax_4.b
            
            *(edi_1 + 4) += 1
            ebx = arg2
    
    edi = var_c

ebx.b = *(edi + 0x14) != 0
char* eax_9 = *(arg2 + 8)
char var_d = ebx.b
int32_t ecx_10

if (&var_d u< eax_9)
    ecx_10 = *(arg2 + 4)

if (&var_d u>= eax_9 || ecx_10 u> &var_d)
    if (eax_9 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    eax_9 = *(arg2 + 8)
    
    if (eax_9 != 0)
        *eax_9 = ebx.b
else
    if (eax_9 == *(arg2 + 0xc))
        sub_403590(arg2 + 4, 1)
    
    char* ecx_12 = *(arg2 + 8)
    
    if (ecx_12 != 0)
        int32_t eax_10
        eax_10.b = *(&var_d - ecx_10 + *(arg2 + 4))
        *ecx_12 = eax_10.b
        eax_10.b = 1
        *(arg2 + 8) += 1
        return eax_10

*(arg2 + 8) += 1
eax_9.b = 1
return eax_9
