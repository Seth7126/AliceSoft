// 函数: sub_5d40f0
// 地址: 0x5d40f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax

if (*(arg1 + 0xc) != 0)
    eax = *(arg1 + 8)
else
    eax = nullptr

int32_t edx = arg2

while (*eax != 0)
    arg1.b = *eax
    
    if (edx s<= 0)
        if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && (arg1.b u< 0xe0 || arg1.b u> 0xef))
            return zx.d(arg1.b)
        
        return zx.d(*eax)
    
    if (arg1.b u>= 0x81 && arg1.b u<= 0x9f)
        eax = &eax[1]
    else if (arg1.b u>= 0xe0 && arg1.b u<= 0xef)
        eax = &eax[1]
    
    eax = &eax[1]
    edx -= 1

return 0
