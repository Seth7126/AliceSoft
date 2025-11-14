// 函数: sub_5273a0
// 地址: 0x5273a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0 && arg2 s< (*(arg1 + 8) - *(arg1 + 4)) s/ 0x38)
    int32_t esi_5 = arg2 * 0x38
    char* ecx_1 = *(arg1 + 4) + esi_5
    
    if (ecx_1 != arg3)
        sub_401ff0(ecx_1, arg3, 0, 0xffffffff)
    
    *(esi_5 + *(arg1 + 4) + 0x18) = 0xffffffff
    int32_t eax_5
    eax_5.b = 1
    return eax_5

int32_t eax
eax.b = 0
return eax
