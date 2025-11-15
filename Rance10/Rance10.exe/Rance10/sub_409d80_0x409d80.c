// 函数: sub_409d80
// 地址: 0x409d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

char* esi = arg4

do
    if (esi != 0)
        sub_409750(esi, edi)
    
    edi = &edi[0xf]
    esi = &esi[0x3c]
while (edi != arg2)

return esi
