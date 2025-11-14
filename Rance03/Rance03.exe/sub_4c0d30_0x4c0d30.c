// 函数: sub_4c0d30
// 地址: 0x4c0d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg4 - arg3) s/ 0x5c
int32_t result

if (eax_3 s<= 0x28)
    if (arg2[2] s< arg3[2])
        sub_4c0ec0(arg2, arg3)
    
    result = *(arg4 + 8)
    
    if (result s< arg2[2])
        sub_4c0ec0(arg4, arg2)
        result = arg2[2]
        
        if (result s< arg3[2])
            return sub_4c0ec0(arg2, arg3) __tailcall
else
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
    void* esi_2 = eax_7 * 0x5c
    void* ecx = eax_7 * 0xb8
    int32_t* ecx_1 = ecx + arg3
    int32_t* ebp_1 = esi_2 + arg3
    
    if (*(esi_2 + arg3 + 8) s< arg3[2])
        sub_4c0ec0(ebp_1, arg3)
    
    if (ecx_1[2] s< ebp_1[2])
        sub_4c0ec0(ecx_1, ebp_1)
        
        if (ebp_1[2] s< arg3[2])
            sub_4c0ec0(ebp_1, arg3)
    
    void* ebx_1 = esi_2 + arg2
    void* esi_4 = arg2 - esi_2
    
    if (arg2[2] s< *(esi_4 + 8))
        sub_4c0ec0(arg2, esi_4)
    
    if (*(ebx_1 + 8) s< arg2[2])
        sub_4c0ec0(ebx_1, arg2)
        
        if (arg2[2] s< *(esi_4 + 8))
            sub_4c0ec0(arg2, esi_4)
    
    int32_t* esi_6 = arg4 - esi_2
    void* ecx_8 = arg4 - ecx
    
    if (esi_6[2] s< *(ecx_8 + 8))
        sub_4c0ec0(esi_6, ecx_8)
    
    if (*(arg4 + 8) s< esi_6[2])
        sub_4c0ec0(arg4, esi_6)
        int32_t* edx_13 = ecx_8
        
        if (esi_6[2] s< edx_13[2])
            sub_4c0ec0(esi_6, edx_13)
    
    if (arg2[2] s< ebp_1[2])
        sub_4c0ec0(arg2, ebp_1)
    
    result = esi_6[2]
    
    if (result s< arg2[2])
        sub_4c0ec0(esi_6, arg2)
        result = arg2[2]
        
        if (result s< ebp_1[2])
            return sub_4c0ec0(arg2, ebp_1) __tailcall

return result
