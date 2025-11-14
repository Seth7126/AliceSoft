// 函数: sub_524010
// 地址: 0x524010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_522820(arg1 + 8)
sub_522820(arg1 + 0x44)
int32_t* ecx_2 = *(arg1 + 0x80)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x80) = 0

*(arg1 + 4) = 0
struct IViewTransitionD3D9::viewtrans::CDXTransition::VTable** eax_2 = sub_69adc6(0x30)

if (eax_2 == 0)
    *(arg1 + 0x80) = 0
    int32_t eax_3
    eax_3.b = false
    return 0

struct IViewTransitionD3D9::viewtrans::CDXTransition::VTable** result = sub_5f4bd0(eax_2)
*(arg1 + 0x80) = result
result.b = result != 0
return result
