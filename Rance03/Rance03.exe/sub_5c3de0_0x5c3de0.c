// 函数: sub_5c3de0
// 地址: 0x5c3de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = arg1[0x8d]
int32_t esi = *(eax - 4)
int32_t* ecx = *(eax - 0xc)
int32_t edi = *(eax - 8)
arg1[0x8d] = eax - 0xc
int32_t eax_4 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_4)
    eax_4 = arg1[0x5d]
    ecx = *(eax_4 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_6 = ecx[3] u>> 2
        
        if (edi u< eax_6)
            if (ecx[3] != 0)
                eax_6 = ecx[2]
            else
                eax_6 = 0
            
            ecx = eax_6 + (edi << 2)
            
            if (ecx != 0)
                if (esi == 0)
                    *ecx = esi
                    return sub_5ddf10(&arg1[0x88], esi)
                
                int32_t temp0 = divs.dp.d(sx.q(*ecx), esi)
                *ecx = temp0
                return sub_5ddf10(&arg1[0x88], temp0)
        
        return sub_5c24e0(eax_6, arg1, ecx, arg1, 0x6e6c70)

return sub_5c24e0(eax_4, arg1, ecx, arg1, 0x6e6c94)
