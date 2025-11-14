// 函数: sub_5b50a0
// 地址: 0x5b50a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg4 - arg3) s/ 0x38
char result

if (eax_3 s<= 0x28)
    if (sub_5b4020(arg2, arg3) != 0)
        sub_5b5cd0(arg2, arg3)
    
    result = sub_5b4020(arg4, arg2)
    
    if (result != 0)
        sub_5b5cd0(arg4, arg2)
        result = sub_5b4020(arg2, arg3)
        
        if (result != 0)
            return sub_5b5cd0(arg2, arg3) __tailcall
else
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
    void* ecx = eax_7 * 0x70
    int32_t esi_4 = eax_7 * 0x38
    void* ebp_1 = esi_4 + arg3
    
    if (sub_5b4020(ebp_1, arg3) != 0)
        sub_5b5cd0(ebp_1, arg3)
    
    if (sub_5b4020(ecx + arg3, ebp_1) != 0)
        sub_5b5cd0(ecx + arg3, ebp_1)
        
        if (sub_5b4020(ebp_1, arg3) != 0)
            sub_5b5cd0(ebp_1, arg3)
    
    void* ebx_1 = esi_4 + arg2
    void* esi_6 = arg2 - esi_4
    
    if (sub_5b4020(arg2, esi_6) != 0)
        sub_5b5cd0(arg2, esi_6)
    
    if (sub_5b4020(ebx_1, arg2) != 0)
        sub_5b5cd0(ebx_1, arg2)
        
        if (sub_5b4020(arg2, esi_6) != 0)
            sub_5b5cd0(arg2, esi_6)
    
    void* eax_17 = arg4 - ecx
    void* esi_8 = arg4 - esi_4
    
    if (sub_5b4020(esi_8, eax_17) != 0)
        sub_5b5cd0(esi_8, eax_17)
    
    if (sub_5b4020(arg4, esi_8) != 0)
        sub_5b5cd0(arg4, esi_8)
        
        if (sub_5b4020(esi_8, eax_17) != 0)
            sub_5b5cd0(esi_8, eax_17)
    
    if (sub_5b4020(arg2, ebp_1) != 0)
        sub_5b5cd0(arg2, ebp_1)
    
    result = sub_5b4020(esi_8, arg2)
    
    if (result != 0)
        sub_5b5cd0(esi_8, arg2)
        result = sub_5b4020(arg2, ebp_1)
        
        if (result != 0)
            return sub_5b5cd0(arg2, ebp_1) __tailcall

return result
