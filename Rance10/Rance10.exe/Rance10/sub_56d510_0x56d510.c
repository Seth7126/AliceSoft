// 函数: sub_56d510
// 地址: 0x56d510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != 0)
        sub_56d4c0(esi, edi)
    
    edi = &edi[9]
    esi = &esi[9]
while (edi != arg2)

return esi
