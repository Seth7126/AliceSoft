// 函数: sub_618150
// 地址: 0x618150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = data_7fcbb8
int32_t var_4 = 0
int32_t* eax_2

if (sub_41ac20(0x76b31c, 0x76b2cc) == 0)
    eax_2 = sub_61e850(&ebx[0x63], 0x76b31c)
else
    eax_2 = (*(*ebx + 0x14))(0x76b2cc)

if (eax_2 != 0 && arg2 s< (*(*eax_2 + 0x28))())
    int32_t esi = *eax_2
    int32_t eax_7 = (*(esi + 0x14))((*(esi + 0x2c))(arg2))
    int32_t eax_8
    int32_t edx
    edx:eax_8 = muls.dp.d(0x4bda12f7, ebx[0x1f] - ebx[0x1e])
    int32_t edx_1 = edx s>> 5
    
    if (eax_7 u< (edx_1 u>> 0x1f) + edx_1)
        int32_t ecx_8 = eax_7 * 0x6c
        
        if (ecx_8 != neg.d(ebx[0x1e]))
            void** ecx_10 = ecx_8 + ebx[0x1e] + 0x1c
            *(arg1 + 0x14) = 0xf
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_403590(arg1, ecx_10, 0, 0xffffffff)
            return arg1
    
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
return arg1
