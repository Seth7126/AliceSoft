// 函数: sub_60bfe0
// 地址: 0x60bfe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result_1 = arg1
struct ITexture::graphengined3d11::CTexture::VTable** result = sub_69adc6(0x28)

if (result == 0)
    result = nullptr
else
    *result = &graphengined3d11::CTexture::`vftable'{for `ITexture'}
    result[1] = 1
    result[2] = arg1
    __builtin_memset(&result[3], 0, 0x17)
    result[9] = 0

struct ITexture::graphengined3d11::CTexture::VTable* edx = *result
result_1 = result
edx->vFunc_0()
sub_412de0(arg1 + 0xa0, &result_1)
return result
