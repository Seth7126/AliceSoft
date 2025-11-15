// 函数: sub_602b50
// 地址: 0x602b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg9
int32_t* esi = arg8
int32_t ecx = arg5
int32_t edi = arg4

while (edi != arg6 || ecx != arg7)
    int32_t eax_1 = *esi
    int32_t eax_2
    
    if ((*edi & 1 << ecx.b) == 0)
        eax_2 = eax_1 & not.d(1 << (edx u% 0x20))
    else
        eax_2 = eax_1 | 1 << (edx u% 0x20)
    
    *esi = eax_2
    esi = arg8
    
    if (arg9 u>= 0x1f)
        edx = 0
        esi = &esi[1]
        arg8 = esi
    else
        edx = arg9 + 1
    
    edi = arg4
    arg9 = edx
    
    if (arg5 u>= 0x1f)
        ecx = 0
        edi += 4
        arg5 = 0
        arg4 = edi
    else
        ecx = arg5 + 1
        arg5 = ecx

*arg3 = esi
arg3[1] = edx
return arg3
