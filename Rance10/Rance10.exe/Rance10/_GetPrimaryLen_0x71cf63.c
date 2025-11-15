// 函数: _GetPrimaryLen
// 地址: 0x71cf63
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* ecx = arg1
int32_t result = 0

if (ecx == 0)
    return 0

while (true)
    int16_t eax_2 = *ecx
    ecx = &ecx[1]
    
    if ((eax_2 u< 0x41 || eax_2 u> 0x5a) && eax_2 - 0x61 u> 0x19)
        return result
    
    result += 1
