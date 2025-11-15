// 函数: sub_62e070
// 地址: 0x62e070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg3
int32_t esi = arg2
int32_t edi = arg1[5]

while (true)
    char* eax_1
    
    if (edi u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (eax_1[ecx] == 0)
        return 0xffffffff
    
    if (esi == 0)
        break
    
    esi -= 1
    int32_t* eax_2
    
    if (edi u< 0x10)
        eax_2 = arg1
    else
        eax_2 = *arg1
    
    eax_2.b = *(eax_2 + ecx)
    
    if (eax_2.b u< 0x81 || eax_2.b u> 0x9f)
        eax_2.b += 0x20
        
        if (eax_2.b u> 0xf)
            ecx += 1
            continue
    
    ecx += 2

return ecx - arg3
