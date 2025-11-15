// 函数: ?crop_zeroes@__crt_stdio_output@@YAXPADQAU__crt_locale_pointers@@@Z
// 地址: 0x70465d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = arg1
int32_t ebx
ebx.b = ***(*arg2 + 0x88)
char* result

while (true)
    result.b = *ecx
    
    if (result.b == 0)
        break
    
    if (result.b == ebx.b)
        break
    
    ecx = &ecx[1]

result.b = *ecx
char* ecx_1 = &ecx[1]

if (result.b != 0)
    while (true)
        result.b = *ecx_1
        
        if (result.b == 0)
            break
        
        if (result.b == 0x65)
            break
        
        if (result.b == 0x45)
            break
        
        ecx_1 = &ecx_1[1]
    
    char* edx_1 = ecx_1
    
    do
        ecx_1 -= 1
    while (*ecx_1 == 0x30)
    
    if (*ecx_1 == ebx.b)
        ecx_1 -= 1
    
    do
        result.b = *edx_1
        ecx_1 = &ecx_1[1]
        edx_1 = &edx_1[1]
        *ecx_1 = result.b
    while (result.b != 0)

return result
