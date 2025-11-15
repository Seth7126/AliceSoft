// 函数: _GetPrimaryLen
// 地址: 0x71d8a2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* ecx = arg1
int32_t result = 0

while (true)
    int16_t eax_1 = *ecx
    ecx = &ecx[1]
    
    if ((eax_1 u< 0x41 || eax_1 u> 0x5a) && eax_1 - 0x61 u> 0x19)
        return result
    
    result += 1
