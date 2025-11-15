// 函数: sub_612d80
// 地址: 0x612d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_609d90(arg1 + 0x44, arg2)

if (result == 0)
    return result

void* ebp = *(result + 0x60)
int32_t edi = *(result + 0x4c)

if ((*(result + 0x64) - ebp) s/ 0x70 s< edi)
    return 0

int32_t ecx_3 = 0
int32_t esi = 0

if (edi s> 0)
    int32_t* edx_3 = ebp + 0x34
    
    do
        if (esi == arg3)
            return ecx_3 * 0x70 + ebp
        
        int32_t eax_5 = *edx_3
        
        if (eax_5 == 0x12 || eax_5 == 0x13 || eax_5 == 0x33 || eax_5 == 0x59 || eax_5 == 0x5d)
            ecx_3 += 1
            edx_3 = &edx_3[0x1c]
        
        ecx_3 += 1
        edx_3 = &edx_3[0x1c]
        esi += 1
    while (ecx_3 s< edi)

return 0
