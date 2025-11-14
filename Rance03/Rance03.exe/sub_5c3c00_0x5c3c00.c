// 函数: sub_5c3c00
// 地址: 0x5c3c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = arg1[0x8d]
int32_t ebx = *(eax - 4)
int32_t esi = *(eax - 8)
int32_t* ecx = *(eax - 0xc)
arg1[0x8d] = eax - 0xc
int32_t eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_4)
    eax_4 = arg1[0x5d]
    ecx = *(eax_4 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_6 = ecx[3] u>> 2
        
        if (esi u< eax_6)
            int32_t eax_7
            
            if (ecx[3] != 0)
                eax_7 = ecx[2]
            else
                eax_7 = 0
            
            eax_6 = eax_7 + (esi << 2)
            
            if (eax_6 != 0)
                *eax_6 += ebx
                return sub_5ddf10(&arg1[0x88], *eax_6)
        
        return sub_5c24e0(eax_6, arg1, ecx, arg1, 0x6e6740)

return sub_5c24e0(eax_4, arg1, ecx, arg1, 0x6e6764)
