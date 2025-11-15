// 函数: sub_476a90
// 地址: 0x476a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 8)
void** esi = *edi
int32_t result

if (esi != edi)
    int32_t ebx_1 = arg3
    
    do
        result = (*(*(esi[2] + 4) + 0x14))()
        
        if (ebx_1 s< result)
            return (*(*(esi[2] + 4) + 0x1c))(arg2, ebx_1)
        
        esi = *esi
        ebx_1 -= result
    while (esi != edi)

result.b = 0
return result
