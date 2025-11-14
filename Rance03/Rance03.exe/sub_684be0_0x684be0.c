// 函数: sub_684be0
// 地址: 0x684be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char ebx = 0

if (SendMessageA(*(arg1 + 0x140), 0x40a, 0x9c97, 1) != 0)
    ebx = 1

if (SendMessageA(*(arg1 + 0x140), 0x40a, 0x9c98, 1) != 0)
    ebx |= 2

if (SendMessageA(*(arg1 + 0x140), 0x40b, 0x9c9a, 0) != 0)
    ebx |= 4

if (SendMessageA(*(arg1 + 0x140), 0x40b, 0x9c9b, 0) != 0)
    ebx |= 8

void* result
result.b = SendMessageA(*(arg1 + 0x140), 0x40a, 0x9ca0, 1) == 0

if (*(arg1 + 0x38) != result.b)
    *(arg1 + 0x38) = result.b

if (*(arg1 + 0x44) != ebx)
    if (ebx == 0)
        *(arg1 + 0x3c) = 0
    else if (ebx == 1)
        *(arg1 + 0x3c) = 1
    else if (ebx == 2)
        *(arg1 + 0x3c) = 2
    else if (ebx == 3)
        *(arg1 + 0x3c) = 3
    
    if ((ebx & 4) != 0)
        float xmm0_2 = *(arg1 + 0x40) + 0.25f
        *(arg1 + 0x40) = xmm0_2
        
        if (not(xmm0_2 <= 16f))
            *(arg1 + 0x40) = 0x41800000
        
        if (not(0.25f f<= *(arg1 + 0x40)))
            *(arg1 + 0x40) = 0x3e800000
    
    if ((ebx & 8) != 0)
        float xmm0_4 = *(arg1 + 0x40) - 0.25f
        *(arg1 + 0x40) = xmm0_4
        
        if (not(xmm0_4 <= 16f))
            *(arg1 + 0x40) = 0x41800000
        
        if (not(0.25f f<= *(arg1 + 0x40)))
            *(arg1 + 0x40) = 0x3e800000
    
    result = sub_684220(arg1)

*(arg1 + 0x44) = ebx
return result
