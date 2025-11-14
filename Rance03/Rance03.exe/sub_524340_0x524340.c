// 函数: sub_524340
// 地址: 0x524340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*arg3 + 0x5c))(arg1, arg2)

if (eax_1 == 0)
    return eax_1

struct chipmunk::CTexture::VTable** esi = sub_69adc6(0x10)

if (esi == 0)
    esi = nullptr
else
    *esi = &chipmunk::CTexture::`vftable'
    esi[1] = 1
    esi[2] = 0
    esi[3].b = 0

int32_t* ecx_1 = esi[2]

if (eax_1 != ecx_1)
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        esi[2] = 0
    
    esi[2] = eax_1

esi[3].b = arg2.b
return esi
