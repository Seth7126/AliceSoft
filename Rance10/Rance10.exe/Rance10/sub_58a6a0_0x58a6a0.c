// 函数: sub_58a6a0
// 地址: 0x58a6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg2 << 2
int32_t edi = *(arg1 + 4)
int32_t* ebx_1 = edi - result
int32_t* esi = ebx_1

if (ebx_1 != edi)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            result = (**ecx)(1)
        
        esi = &esi[1]
    while (esi != edi)

*(arg1 + 4) = ebx_1
return result
