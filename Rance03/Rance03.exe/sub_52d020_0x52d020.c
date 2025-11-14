// 函数: sub_52d020
// 地址: 0x52d020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg3

if (edi == arg2)
    return arg4

struct sealengine::CBone::VTable** esi = arg4

do
    if (esi != 0)
        sub_52cef0(esi, edi)
    
    edi += 0xac
    esi = &esi[0x2b]
while (edi != arg2)

return esi
