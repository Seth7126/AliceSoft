// 函数: _wcsncmp
// 地址: 0x71c9d5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg3

if (result == 0)
    return result

int16_t* ecx = arg2
int16_t* edx = arg1

while (true)
    int32_t result_1 = result
    result -= 1
    int16_t esi_1
    
    if (result_1 != 1)
        esi_1 = *edx
    
    if (result_1 == 1 || esi_1 == 0 || esi_1 != *ecx)
        return zx.d(*edx) - zx.d(*ecx)
    
    edx = &edx[1]
    ecx = &ecx[1]
