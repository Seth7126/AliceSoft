// 函数: sub_6b0f10
// 地址: 0x6b0f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1
int32_t edi = *(result + 4)
uint32_t ecx_2 = (zx.d(*(result + 0xb)) + 7) u>> 3
void* edx = ecx_2 + arg2

if (ecx_2 u< edi)
    result = edx - arg2
    char* esi_1 = arg2 - ecx_2
    
    do
        ecx_2.b = *(esi_1 + result)
        edx += 1
        *(edx - 1) += ecx_2.b
        result += 1
    while (result u< edi)

return result
