// 函数: sub_530990
// 地址: 0x530990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg3

if (edi == arg2)
    return arg4

struct sealengine::CDetectPolygon::VTable** esi = arg4

do
    if (esi != 0)
        sub_530900(esi, edi)
    
    edi += 0x84
    esi = &esi[0x21]
while (edi != arg2)

return esi
