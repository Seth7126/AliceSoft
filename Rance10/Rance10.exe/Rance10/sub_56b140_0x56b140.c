// 函数: sub_56b140
// 地址: 0x56b140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3
int32_t* edi = arg4
int32_t eax_2 = (edi - arg3) s>> 2
int32_t result

if (eax_2 s<= 0x28)
    int32_t edx_4 = *arg2
    result = *arg3
    
    if (edx_4 s< result)
        *arg2 = result
        *arg3 = edx_4
    
    int32_t edx_5 = *edi
    
    if (edx_5 s< *arg2)
        *edi = *arg2
        *arg2 = edx_5
        result = *arg3
        
        if (edx_5 s< result)
            *arg2 = result
            *arg3 = edx_5
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t ebp_1 = eax_6 << 2
    var_4 = eax_6 << 3
    int32_t ebx_1 = arg3[eax_6]
    void* edx_3 = &arg3[eax_6]
    int32_t eax_7 = *arg3
    
    if (ebx_1 s< eax_7)
        *edx_3 = eax_7
        *arg3 = ebx_1
    
    int32_t ebx_2 = *(var_4 + arg3)
    
    if (ebx_2 s< *edx_3)
        *(var_4 + arg3) = *edx_3
        edi = arg4
        *edx_3 = ebx_2
        int32_t eax_10 = *arg3
        
        if (ebx_2 s< eax_10)
            *edx_3 = eax_10
            *arg3 = ebx_2
    
    int32_t ebx_3 = *arg2
    void* ecx_1 = arg2 - ebp_1
    int32_t eax_11 = *ecx_1
    
    if (ebx_3 s< eax_11)
        *arg2 = eax_11
        *ecx_1 = ebx_3
    
    int32_t ebx_4 = arg2[eax_6]
    
    if (ebx_4 s< *arg2)
        arg2[eax_6] = *arg2
        *arg2 = ebx_4
        int32_t eax_13 = *ecx_1
        
        if (ebx_4 s< eax_13)
            *arg2 = eax_13
            *ecx_1 = ebx_4
    
    int32_t* ebx_6 = edi - var_4
    int32_t* ecx_3 = edi - ebp_1
    int32_t ebp_2 = *ecx_3
    int32_t eax_14 = *ebx_6
    
    if (ebp_2 s< eax_14)
        *ecx_3 = eax_14
        *ebx_6 = ebp_2
    
    int32_t ebp_3 = *edi
    
    if (ebp_3 s< *ecx_3)
        *edi = *ecx_3
        *ecx_3 = ebp_3
        int32_t eax_16 = *ebx_6
        
        if (ebp_3 s< eax_16)
            *ecx_3 = eax_16
            *ebx_6 = ebp_3
    
    int32_t edi_2 = *arg2
    result = *edx_3
    
    if (edi_2 s< result)
        *arg2 = result
        *edx_3 = edi_2
    
    int32_t edi_3 = *ecx_3
    
    if (edi_3 s< *arg2)
        *ecx_3 = *arg2
        *arg2 = edi_3
        result = *edx_3
        
        if (edi_3 s< result)
            *arg2 = result
            *edx_3 = edi_3

return result
