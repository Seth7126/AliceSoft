// 函数: sub_589dd0
// 地址: 0x589dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t* ebp = arg3
char* result
int32_t ecx_1
result, ecx_1 = sub_468ec0(arg2, (ebp[1] - *ebp) s>> 2)
int32_t* i = *ebp

if (i != ebp[1])
    void* edi_1 = arg2 + 4
    
    do
        int32_t eax_3 = *(edi_1 + 4)
        uint32_t ecx_3 = *i
        arg2 = ecx_3
        var_4.b = ecx_3.b
        int32_t edx_1
        
        if (&var_4 u< eax_3)
            edx_1 = *edi_1
        
        if (&var_4 u>= eax_3 || edx_1 u> &var_4)
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_3 = arg2
            
            char* eax_5 = *(edi_1 + 4)
            
            if (eax_5 != 0)
                *eax_5 = ecx_3.b
        else
            if (eax_3 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_3 = arg2
            
            char* edx_2 = *(edi_1 + 4)
            
            if (edx_2 != 0)
                int32_t eax_4
                eax_4.b = *(&var_4 - edx_1 + *edi_1)
                *edx_2 = eax_4.b
        
        *(edi_1 + 4) += 1
        int32_t eax_6 = *(edi_1 + 4)
        uint8_t ebx_3 = (ecx_3 u>> 8).b
        var_4:1.b = ebx_3
        int32_t edx_3
        
        if (&var_4:1 u< eax_6)
            edx_3 = *edi_1
            ebp = arg3
        
        if (&var_4:1 u>= eax_6 || edx_3 u> &var_4:1)
            if (eax_6 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_3 = arg2
            
            uint8_t* eax_8 = *(edi_1 + 4)
            
            if (eax_8 != 0)
                *eax_8 = ebx_3
        else
            if (eax_6 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_3 = arg2
            
            char* edx_4 = *(edi_1 + 4)
            
            if (edx_4 != 0)
                int32_t eax_7
                eax_7.b = *(&var_4:1 - edx_3 + *edi_1)
                *edx_4 = eax_7.b
        
        *(edi_1 + 4) += 1
        int32_t eax_9 = *(edi_1 + 4)
        uint8_t ebx_6 = (ecx_3 u>> 0x10).b
        var_4:2.b = ebx_6
        int32_t edx_5
        
        if (&var_4:2 u< eax_9)
            edx_5 = *edi_1
            ebp = arg3
        
        if (&var_4:2 u>= eax_9 || edx_5 u> &var_4:2)
            if (eax_9 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_3 = arg2
            
            uint8_t* eax_11 = *(edi_1 + 4)
            
            if (eax_11 != 0)
                *eax_11 = ebx_6
        else
            if (eax_9 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_3 = arg2
            
            char* edx_6 = *(edi_1 + 4)
            
            if (edx_6 != 0)
                int32_t eax_10
                eax_10.b = *(&var_4:2 - edx_5 + *edi_1)
                *edx_6 = eax_10.b
        
        *(edi_1 + 4) += 1
        result = *(edi_1 + 4)
        uint32_t ecx_10 = ecx_3 u>> 0x18
        var_4:3.b = ecx_10.b
        int32_t edx_7
        
        if (&var_4:3 u< result)
            edx_7 = *edi_1
        
        if (&var_4:3 u>= result || edx_7 u> &var_4:3)
            if (result == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            result = *(edi_1 + 4)
            
            if (result != 0)
                *result = ecx_10.b
        else
            if (result == *(edi_1 + 8))
                result = sub_403590(edi_1, 1)
            
            char* ecx_12 = *(edi_1 + 4)
            
            if (ecx_12 != 0)
                result.b = *(&var_4:3 - edx_7 + *edi_1)
                *ecx_12 = result.b
        
        *(edi_1 + 4) += 1
        i = &i[1]
    while (i != ebp[1])

return result
