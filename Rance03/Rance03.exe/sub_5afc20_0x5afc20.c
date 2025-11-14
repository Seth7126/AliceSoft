// 函数: sub_5afc20
// 地址: 0x5afc20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg4 - arg3) s/ 0x24
int32_t result

if (eax_3 s<= 0x28)
    if (*arg2 s< *arg3)
        sub_5b0460(arg2, arg3)
    
    result = *arg4
    
    if (result s< *arg2)
        sub_5b0460(arg4, arg2)
        result = *arg2
        
        if (result s< *arg3)
            return sub_5b0460(arg2, arg3) __tailcall
else
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
    int32_t esi_3 = eax_7 * 0x24
    int32_t* ebp_1 = &arg3[eax_7 * 9]
    int32_t* ecx_2 = &arg3[eax_7 * 0x12]
    
    if (arg3[eax_7 * 9] s< *arg3)
        sub_5b0460(ebp_1, arg3)
    
    if (*ecx_2 s< *ebp_1)
        sub_5b0460(ecx_2, ebp_1)
        
        if (*ebp_1 s< *arg3)
            sub_5b0460(ebp_1, arg3)
    
    void* ebx_1 = &arg2[eax_7 * 9]
    void* esi_5 = arg2 - esi_3
    
    if (*arg2 s< *esi_5)
        sub_5b0460(arg2, esi_5)
    
    if (*ebx_1 s< *arg2)
        sub_5b0460(ebx_1, arg2)
        
        if (*arg2 s< *esi_5)
            sub_5b0460(arg2, esi_5)
    
    int32_t* ebx_2 = arg4
    int32_t* esi_7 = ebx_2 - esi_3
    void* ecx_9 = ebx_2 - eax_7 * 0x48
    arg4 = ecx_9
    
    if (*esi_7 s< *ecx_9)
        sub_5b0460(esi_7, ecx_9)
    
    if (*ebx_2 s< *esi_7)
        sub_5b0460(ebx_2, esi_7)
        
        if (*esi_7 s< *arg4)
            sub_5b0460(esi_7, arg4)
    
    if (*arg2 s< *ebp_1)
        sub_5b0460(arg2, ebp_1)
    
    result = *esi_7
    
    if (result s< *arg2)
        sub_5b0460(esi_7, arg2)
        result = *arg2
        
        if (result s< *ebp_1)
            return sub_5b0460(arg2, ebp_1) __tailcall

return result
