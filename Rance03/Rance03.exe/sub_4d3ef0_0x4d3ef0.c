// 函数: sub_4d3ef0
// 地址: 0x4d3ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
sub_468ec0(arg2, (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
int32_t* i = *(arg1 + 4)
char* result

if (i != *(arg1 + 8))
    void* edi_1 = arg2 + 4
    
    do
        uint32_t ecx_2 = *i
        int32_t eax_3 = *(edi_1 + 4)
        arg2 = ecx_2
        var_4.b = ecx_2.b
        int32_t edx_1
        
        if (&var_4 u< eax_3)
            edx_1 = *edi_1
        
        if (&var_4 u>= eax_3 || edx_1 u> &var_4)
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_2 = arg2
            
            char* eax_5 = *(edi_1 + 4)
            
            if (eax_5 != 0)
                *eax_5 = ecx_2.b
        else
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_2 = arg2
            
            char* edx_2 = *(edi_1 + 4)
            
            if (edx_2 != 0)
                int32_t eax_4
                eax_4.b = *(&var_4 - edx_1 + *edi_1)
                *edx_2 = eax_4.b
        
        *(edi_1 + 4) += 1
        int32_t eax_6 = *(edi_1 + 4)
        uint8_t ebx_3 = (ecx_2 u>> 8).b
        var_4:1.b = ebx_3
        int32_t edx_3
        
        if (&var_4:1 u< eax_6)
            edx_3 = *edi_1
            ecx_2 = arg2
        
        if (&var_4:1 u>= eax_6 || edx_3 u> &var_4:1)
            if (eax_6 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_2 = arg2
            
            uint8_t* eax_8 = *(edi_1 + 4)
            
            if (eax_8 != 0)
                *eax_8 = ebx_3
        else
            if (eax_6 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_2 = arg2
            
            char* edx_4 = *(edi_1 + 4)
            
            if (edx_4 != 0)
                int32_t eax_7
                eax_7.b = *(&var_4:1 - edx_3 + *edi_1)
                *edx_4 = eax_7.b
        
        *(edi_1 + 4) += 1
        int32_t eax_9 = *(edi_1 + 4)
        uint8_t ebx_6 = (ecx_2 u>> 0x10).b
        var_4:2.b = ebx_6
        int32_t edx_5
        
        if (&var_4:2 u< eax_9)
            edx_5 = *edi_1
            ecx_2 = arg2
        
        if (&var_4:2 u>= eax_9 || edx_5 u> &var_4:2)
            if (eax_9 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_2 = arg2
            
            uint8_t* eax_11 = *(edi_1 + 4)
            
            if (eax_11 != 0)
                *eax_11 = ebx_6
        else
            if (eax_9 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_2 = arg2
            
            char* edx_6 = *(edi_1 + 4)
            
            if (edx_6 != 0)
                int32_t eax_10
                eax_10.b = *(&var_4:2 - edx_5 + *edi_1)
                *edx_6 = eax_10.b
        
        *(edi_1 + 4) += 1
        result = *(edi_1 + 4)
        uint32_t ecx_8 = ecx_2 u>> 0x18
        var_4:3.b = ecx_8.b
        int32_t edx_7
        
        if (&var_4:3 u< result)
            edx_7 = *edi_1
        
        if (&var_4:3 u>= result || edx_7 u> &var_4:3)
            if (result == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            result = *(edi_1 + 4)
            
            if (result != 0)
                *result = ecx_8.b
        else
            if (result == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_10 = *(edi_1 + 4)
            
            if (ecx_10 != 0)
                result.b = *(&var_4:3 - edx_7 + *edi_1)
                *ecx_10 = result.b
        
        *(edi_1 + 4) += 1
        i = &i[1]
    while (i != *(arg1 + 8))

result.b = 1
return result
