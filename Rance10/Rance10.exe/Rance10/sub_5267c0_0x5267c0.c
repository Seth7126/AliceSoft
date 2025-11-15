// 函数: sub_5267c0
// 地址: 0x5267c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 8)

if (arg2 s>= ecx && *(arg1 + 4) + ecx s> arg2)
    int32_t* ebx_1 = (*(arg1 + 0xc))[arg2 - ecx]
    
    if (ebx_1 != 0)
        sub_4ed5c0(ebx_1, *(arg1 + 0x1c))
        sub_4f1f60(&ebx_1[0x19])
        (*(*ebx_1 + 4))()
        (*(arg1 + 0xc))[arg2 - ecx] = 0
        sub_5264d0(arg1, arg2)
        int32_t eax_6
        eax_6.b = 1
        return eax_6

int32_t* eax
eax.b = 0
return eax
