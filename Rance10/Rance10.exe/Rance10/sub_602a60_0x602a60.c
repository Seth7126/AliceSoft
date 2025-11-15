// 函数: sub_602a60
// 地址: 0x602a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg5
int32_t* esi = arg4

while (esi != arg6 || edx != arg7)
    int32_t eax = *esi
    
    if (*arg3 == 0)
        arg1 = eax & not.d(1 << (edx u% 0x20))
    else
        arg1 = eax | 1 << (edx u% 0x20)
    
    *esi = arg1
    esi = arg4
    
    if (arg5 u>= 0x1f)
        edx = 0
        esi = &esi[1]
        arg5 = 0
        arg4 = esi
    else
        edx = arg5 + 1
        arg5 = edx
