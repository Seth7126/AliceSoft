// 函数: sub_63ec50
// 地址: 0x63ec50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint8_t eax_1 = (arg2 u>> 8).b
uint32_t esi = zx.d(eax_1)
uint32_t edx = zx.d(arg2.b)
int32_t eax_3

if (eax_1 != 0)
    int32_t eax_8
    
    if (esi - 0x81 u<= 0x1e)
        if (edx - 0x40 u<= 0x3e)
            eax_8 = esi * 0xbc - 0x5e5e
        label_63ecf0:
            eax_3 = eax_8 + edx
            goto label_63ecf2
        
        if (edx - 0x80 u<= 0x7c)
            eax_8 = esi * 0xbc - 0x5e5f
            goto label_63ecf0
    else if (esi - 0xe0 u<= 0xf)
        if (edx - 0x40 u<= 0x3e)
            eax_8 = esi * 0xbc - 0x8d5e
            goto label_63ecf0
        
        if (edx - 0x80 u<= 0x7c)
            eax_8 = esi * 0xbc - 0x8d5f
            goto label_63ecf0
else if (edx - 0x20 u<= 0x5e)
    eax_3 = edx - 0x20
label_63ecf2:
    
    if (eax_3 s>= 0 && eax_3 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 4)
        return (eax_3 << 4) + *(arg1 + 8)
else if (edx - 0xa1 u<= 0x3e)
    eax_3 = edx - 0x42
    goto label_63ecf2
return 0
