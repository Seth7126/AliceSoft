// 函数: sub_593a60
// 地址: 0x593a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

char* esi = arg4

do
    if (esi != 0)
        sub_5950e0(esi, edi)
    
    edi = &edi[0xc]
    esi = &esi[0x30]
while (edi != arg2)

return esi
