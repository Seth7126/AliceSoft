// 函数: _strpbrk
// 地址: 0x1000ab00
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_28_1
__builtin_memset(&var_28_1, 0, 0x20)
char* edx = arg2
void* result

while (true)
    result.b = *edx
    result.b = result.b
    
    if (result.b == 0)
        break
    
    edx = &edx[1]
    var_28_1 |= 1 << (result u% 0x20)

char* esi = arg1

do
    result.b = *esi
    result.b = result.b
    
    if (result.b == 0)
        return result
    
    esi = &esi[1]
while (not(test_bit(var_28_1, result)))

return &esi[0xffffffff]
