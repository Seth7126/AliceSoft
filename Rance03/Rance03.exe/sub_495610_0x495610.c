// 函数: sub_495610
// 地址: 0x495610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (arg2 == 0 || *(arg1 + 0x20) == arg2)
    return 

sub_4954b0(arg1)
*(arg1 + 0x20) = arg2
(**arg2)()
void* eax_2 = *(arg1 + 0x20)
int32_t xmm0_1

if (eax_2 != 0)
    xmm0_1 = fconvert.s(__fpatan(fconvert.t(*(eax_2 + 0x18)), fconvert.t(*(eax_2 + 0x1c) * 0.5f)))
        * 2f * 180f * 0.318309873f
else
    xmm0_1 = (zx.o(0)).d

int32_t var_1c_1 = xmm0_1
float var_20
sub_5123f0(arg1 + 0x28, *(eax_2 + 0x10), *(eax_2 + 0x14), var_20)
struct IInterface::partsengine::CFlatLayerView::VTable** eax = sub_69adc6(0x50)
struct IInterface::partsengine::CFlatLayerView::VTable** edi_2

if (eax == 0)
    edi_2 = nullptr
else
    edi_2 = sub_490010(eax, arg1 + 0x28, *(arg1 + 0xf4), *(arg1 + 0x24))

*(arg1 + 0xf0) = edi_2
int32_t* esi_1 = *(arg1 + 0x20)
int32_t* ebx_1 = esi_1[0xf]

if (esi_1 == 0 || ebx_1 == 0)
    return 

sub_490380(edi_2)
edi_2[4] = esi_1
(**esi_1)()
edi_2[5] = ebx_1
(**ebx_1)()
sub_490470(edi_2)
