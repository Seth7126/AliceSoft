// 函数: sub_4da080
// 地址: 0x4da080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg4 - arg3) s/ 0x84
int32_t result

if (eax_3 s<= 0x28)
    if (arg2[0xc] s< arg3[0xc])
        sub_4da700(arg2, arg3)
    
    result = *(arg4 + 0x30)
    
    if (result s< arg2[0xc])
        sub_4da700(arg4, arg2)
        result = arg2[0xc]
        
        if (result s< arg3[0xc])
            return sub_4da700(arg2, arg3) __tailcall
else
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
    void* esi_2 = eax_7 * 0x84
    void* ecx = eax_7 * 0x108
    void** ecx_1 = ecx + arg3
    void** ebp_1 = esi_2 + arg3
    
    if (*(esi_2 + arg3 + 0x30) s< arg3[0xc])
        sub_4da700(ebp_1, arg3)
    
    if (ecx_1[0xc] s< ebp_1[0xc])
        sub_4da700(ecx_1, ebp_1)
        
        if (ebp_1[0xc] s< arg3[0xc])
            sub_4da700(ebp_1, arg3)
    
    void* ebx_1 = esi_2 + arg2
    void* esi_4 = arg2 - esi_2
    
    if (arg2[0xc] s< *(esi_4 + 0x30))
        sub_4da700(arg2, esi_4)
    
    if (*(ebx_1 + 0x30) s< arg2[0xc])
        sub_4da700(ebx_1, arg2)
        
        if (arg2[0xc] s< *(esi_4 + 0x30))
            sub_4da700(arg2, esi_4)
    
    void** esi_6 = arg4 - esi_2
    void* ecx_8 = arg4 - ecx
    
    if (esi_6[0xc] s< *(ecx_8 + 0x30))
        sub_4da700(esi_6, ecx_8)
    
    if (*(arg4 + 0x30) s< esi_6[0xc])
        sub_4da700(arg4, esi_6)
        void** edx_12 = ecx_8
        
        if (esi_6[0xc] s< edx_12[0xc])
            sub_4da700(esi_6, edx_12)
    
    if (arg2[0xc] s< ebp_1[0xc])
        sub_4da700(arg2, ebp_1)
    
    result = esi_6[0xc]
    
    if (result s< arg2[0xc])
        sub_4da700(esi_6, arg2)
        result = arg2[0xc]
        
        if (result s< ebp_1[0xc])
            return sub_4da700(arg2, ebp_1) __tailcall

return result
