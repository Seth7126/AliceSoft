// 函数: sub_476a60
// 地址: 0x476a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 8)
int32_t result = 0
void** esi = *edi

while (esi != edi)
    int32_t eax_1 = (*(*(esi[2] + 4) + 0x18))()
    esi = *esi
    result += eax_1

return result
