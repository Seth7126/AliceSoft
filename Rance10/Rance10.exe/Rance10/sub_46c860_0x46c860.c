// 函数: sub_46c860
// 地址: 0x46c860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
int32_t i = *(esi + 0xc)

while (i u> *(esi + 4))
    char* edx_1 = *(esi + 4)
    arg1.b = *edx_1
    
    if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && arg1.b + 0x20 u> 0xf)
        char eax
        eax, arg1 = sub_46ce20(esi)
        
        if (eax != 0)
            break
    else
        if (arg1.b == 0x81 && edx_1[1] == 0x40)
            break
        
        *(esi + 4) += 1
    
    *(esi + 4) += 1
