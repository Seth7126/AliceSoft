// 函数: sub_62dd10
// 地址: 0x62dd10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = (**arg1)()
char* ecx = eax

if (ecx == 0)
    return eax

int32_t edx = 0

while (*ecx != 0)
    eax.b = *ecx
    
    if (eax.b u< 0x81 || eax.b u> 0x9f)
        eax.b += 0x20
        
        eax = eax.b u> 0xf ? 1 : 2
    else
        eax = 2
    
    ecx += eax
    edx += 1

return edx
