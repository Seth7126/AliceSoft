// 函数: sub_4d1c00
// 地址: 0x4d1c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(arg1 + 0x18)
int32_t edi = *(arg1 + 0x1c)
int32_t* result

if (esi != edi)
    float ebx_1 = arg3
    
    do
        void* ecx = *esi
        result = sub_4d8940(ecx, *(ecx + 0x34))
        
        if (result != 0)
            result, ebx_1, esi, edi = sub_5505a0(result, arg2, ebx_1, arg4)
            
            if (result.b != 0)
                result.b = 1
                return result
        
        esi = &esi[1]
    while (esi != edi)

result.b = 0
return result
