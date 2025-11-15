// 函数: ?find_pe_section@@YAPAU_IMAGE_SECTION_HEADER@@QAEI@Z
// 地址: 0x6e8175
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_1 = *(arg1 + 0x3c) + arg1
void* i = ecx_1 + 0x18 + zx.d(*(ecx_1 + 0x14))

for (void* esi_1 = zx.d(*(ecx_1 + 6)) * 0x28 + i; i != esi_1; i += 0x28)
    if (arg2 u>= *(i + 0xc) && arg2 u< *(i + 8) + *(i + 0xc))
        return i

return nullptr
