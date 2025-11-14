// 函数: sub_4a2df0
// 地址: 0x4a2df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_4 = *(arg1 + 0x58)
int32_t ecx = *(eax_4 + 0x98)
int32_t* esi = *(eax_4 + 0x94)
int32_t* eax = esi

if (eax != ecx)
    while (*eax != arg2)
        eax = &eax[1]
        
        if (eax == ecx)
            break
    
    if (eax != ecx)
        return (eax - esi) s>> 2

return 0xffffffff
