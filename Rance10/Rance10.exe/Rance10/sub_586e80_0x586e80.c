// 函数: sub_586e80
// 地址: 0x586e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t* result = *arg1

if (result == edx)
    result.b = arg2
    arg1[4].b = result.b
    return result

int32_t ebx
ebx.b = arg2

do
    void* ecx = *result
    
    if (ecx != 0)
        *(ecx + 0x240) = ebx.b
    
    result = &result[2]
while (result != edx)

arg1[4].b = ebx.b
return result
