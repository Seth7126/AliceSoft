// 函数: sub_5c5980
// 地址: 0x5c5980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
arg1[0x8d] -= 4
int32_t* eax = arg1[0x8d]
arg1[0x8d] -= 4
int32_t xmm1 = *eax
int32_t edi = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx = *arg1[0x8d]
int32_t eax_5 = (arg1[0x5e] - arg1[0x5d]) s>> 2

if (ecx u< eax_5)
    eax_5 = arg1[0x5d]
    ecx = *(eax_5 + (ecx << 2))
    
    if (ecx != 0)
        uint32_t eax_7 = ecx[3] u>> 2
        
        if (edi u>= eax_7)
            return sub_5c24e0(eax_7, arg1, ecx, arg1, 0x6e7344)
        
        if (ecx[3] != 0)
            *(ecx[2] + (edi << 2)) = xmm1
            return sub_5ddf50(&arg1[0x88], xmm1) __tailcall
        
        *(edi << 2) = xmm1
        return sub_5ddf50(&arg1[0x88], xmm1) __tailcall

return sub_5c24e0(eax_5, arg1, ecx, arg1, 0x6e736c)
