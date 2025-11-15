// 函数: sub_568ac0
// 地址: 0x568ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != 0)
        *esi = 0
        esi[1] = 0
        sub_4323a0(esi, edi)
    
    edi = &edi[2]
    esi = &esi[2]
while (edi != arg2)

return esi
