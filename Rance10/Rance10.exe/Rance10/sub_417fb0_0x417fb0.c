// 函数: sub_417fb0
// 地址: 0x417fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

char* esi = arg4

do
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_4056a0(esi, edi)
    
    edi = &edi[6]
    esi = &esi[0x18]
while (edi != arg2)

return esi
