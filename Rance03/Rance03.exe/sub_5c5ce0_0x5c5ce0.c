// 函数: sub_5c5ce0
// 地址: 0x5c5ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_2 = arg1
arg1[0x8d] -= 4
int32_t* eax = arg1[0x8d]
arg1[0x8d] -= 4
float xmm0 = *eax
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
            return sub_5c24e0(eax_7, arg1, ecx, arg1, 0x6e7538)
        
        int32_t eax_8
        
        if (ecx[3] != 0)
            eax_8 = ecx[2]
        else
            eax_8 = 0
        
        int32_t xmm1 = (zx.o(0)).d
        xmm0 f- 0
        float eax_9
        eax_9:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2
            | (xmm0 < 0f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            xmm1 = *(eax_8 + (edi << 2)) / xmm0
        
        if (ecx[3] != 0)
            *(ecx[2] + (edi << 2)) = xmm1
            return sub_5ddf50(&arg1[0x88], xmm1) __tailcall
        
        *(edi << 2) = xmm1
        return sub_5ddf50(&arg1[0x88], xmm1) __tailcall

return sub_5c24e0(eax_5, arg1, ecx, arg1, 0x6e74c8)
