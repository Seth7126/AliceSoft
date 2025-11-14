// 函数: sub_53e5e0
// 地址: 0x53e5e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x200)
struct sealengine::CLightParamList::VTable** eax_1
int32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_58e400(arg1 + 0x14)
*(arg1 + 0x1d0) = eax_1

if (eax_1 != 0)
    *(arg1 + 0x1d4) = 0
    eax_1.b = 1
    return eax_1

sub_59f4e0(eax_1, edx, ecx_1, 0x6e3ab4, arg2)
enum MESSAGEBOX_RESULT eax_2
eax_2.b = 0
return eax_2
