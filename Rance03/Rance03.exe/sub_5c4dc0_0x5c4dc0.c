// 函数: sub_5c4dc0
// 地址: 0x5c4dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg1[0x8d] -= 4
int32_t esi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_4)
    eax_4 = arg1[0x5d]
    ecx = *(eax_4 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_6 = ecx[3] u>> 2
        
        if (esi u>= eax_6)
            return sub_5c24e0(eax_6, arg1, ecx, arg1, 0x6e6ea0)
        
        int32_t eax_7
        
        if (ecx[3] != 0)
            eax_7 = ecx[2]
        else
            eax_7 = 0
        
        int32_t edx_1 = *(eax_7 + (esi << 2)) - 1
        
        if (ecx[3] == 0)
            *(esi << 2) = edx_1
            return 0
        
        int32_t result = ecx[2]
        *(result + (esi << 2)) = edx_1
        return result

return sub_5c24e0(eax_4, arg1, ecx, arg1, 0x6e6ec0)
