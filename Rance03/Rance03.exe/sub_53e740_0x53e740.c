// 函数: sub_53e740
// 地址: 0x53e740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1 + 0x14
struct sealengine::CParticleEffect::VTable** eax
int32_t ecx_1
int32_t edx
eax, ecx_1, edx = sub_590350(*(arg1 + 0x200), esi)
*(arg1 + 0x1d8) = eax

if (eax != 0)
    sub_53e7a0(arg1)
    *(arg1 + 0x1dc) = 0
    void* eax_2
    eax_2.b = 1
    return eax_2

if (*(esi + 0x14) u>= 0x10)
    esi = *esi

sub_59f4e0(eax, edx, ecx_1, 0x6e3aec, esi)
enum MESSAGEBOX_RESULT eax_1
eax_1.b = 0
return eax_1
