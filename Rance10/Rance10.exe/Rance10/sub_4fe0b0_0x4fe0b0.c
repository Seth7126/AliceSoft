// 函数: sub_4fe0b0
// 地址: 0x4fe0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0x11]
struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const edi_1

if (eax == 2)
    edi_1 = arg3

if (eax == 2 && edi_1 != 0)
label_4fe0d1:
    eax.b = arg1[0x12].b
    arg3.b = eax.b
    float xmm0_1 = sub_4ff730(arg1)
    sub_4ff6b0(arg1, _mm_cvtepi32_ps(zx.o(edi_1)) + xmm0_1, arg3.b)
else if (eax == 1)
    edi_1 = arg4
    
    if (edi_1 != 0)
        goto label_4fe0d1

if (arg1[0x1a].b != 0)
    arg1[0x1a].b = 0

sub_4fe130(arg1, arg2)
arg4 = &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[3], &arg4, 0)
