// 函数: sub_476ae0
// 地址: 0x476ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 8)
void** esi = *edi
int32_t result

if (esi != edi)
    int32_t ebx_1 = arg3
    
    do
        result = (*(*(esi[2] + 4) + 0x18))()
        
        if (ebx_1 s< result)
            return (*(*(esi[2] + 4) + 0x20))(arg2, ebx_1)
        
        esi = *esi
        ebx_1 -= result
    while (esi != edi)

result.b = 0
return result
