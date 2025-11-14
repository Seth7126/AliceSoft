// 函数: sub_424e90
// 地址: 0x424e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg1[0x38]

if (arg3 s< 0 || arg3 s>= (*(ecx + 0x2c) - *(ecx + 0x28)) s>> 2)
    int32_t eax
    eax.b = 0
    return eax

int32_t esi

if (arg3 s>= (*(ecx + 0x2c) - *(ecx + 0x28)) s>> 2)
    esi = 0xffffffff
else
    esi = *(*(ecx + 0x28) + (arg3 << 2))

if (sub_4315a0((*(**(ecx + 0xc) + 0x18))(esi)) != 0)
    return 0

sub_431730(arg1, arg2, esi)
uint32_t eax_10
eax_10.b = 1
return eax_10
