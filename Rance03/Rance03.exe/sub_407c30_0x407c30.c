// 函数: sub_407c30
// 地址: 0x407c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_4 = arg2[5]
char* esi

if (eax_4 u< 0x10)
    esi = arg2
else
    esi = *arg2

if (*esi == 0x30 && arg2[4] u> 3)
    int32_t* ecx
    
    if (eax_4 u< 0x10)
        ecx = arg2
    else
        ecx = *arg2
    
    int32_t* ecx_1
    
    if (*(ecx + 1) != 0x78)
        if (eax_4 u< 0x10)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
    
    if (*(ecx + 1) == 0x78 || *(ecx_1 + 1) == 0x58)
        return sub_407ca0(arg1, arg2) __tailcall
    
    int32_t* eax
    
    if (eax_4 u< 0x10)
        eax = arg2
    else
        eax = *arg2
    
    if (*(eax + 1) == 0x62)
        return sub_407d70(arg1, arg2) __tailcall

return sub_407e20(arg1, arg2) __tailcall
