// 函数: sub_6c68b0
// 地址: 0x6c68b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1

while (*(esi + 0xc) u< *(esi + 0x10))
    char* eax_1 = *(esi + 0xc)
    arg1.b = *eax_1
    
    if (arg1.b u<= 0x20 || arg1.b == 0x7f)
        *(esi + 0xc) = &eax_1[1]
    else if (arg1.b != 0x3b)
        if (&eax_1[1] u>= *(esi + 0x10))
            break
        
        if (arg1.b != 0x2f)
            break
        
        if (eax_1[1] != arg1.b)
            break
        
        *(esi + 0xc) = &eax_1[2]
        sub_6c6870(esi)
    else
        *(esi + 0xc) = &eax_1[1]
        sub_6c6870(esi)

int32_t result

if (*(esi + 0xc) u< *(esi + 0x10))
    result.b = 1
    return result

*(esi + 0x14) = 0
result.b = 0
return result
