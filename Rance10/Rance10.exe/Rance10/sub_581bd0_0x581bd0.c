// 函数: sub_581bd0
// 地址: 0x581bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_582000(arg1)

if (arg1->__offset(0x21c).b != 0)
    sub_4068c0(arg1)
    int32_t eax_1
    eax_1.b = 0
    arg1[0x87].Ptr.b = 0
    eax_1.b = arg1[0x87].Ptr.b

struct _RTL_SRWLOCK eax_2 = arg1

if (eax_2 != 0)
    int32_t var_10_1 = 0xa4
    operator new(eax_2)

SRWLOCK* esi = 0
sub_581f00(nullptr)
sub_581f80(esi)
__builtin_memset(&esi[0x5d], 0, 0x30)
int32_t ecx_4 = sub_581d50(esi)
void* eax_3 = &esi[0x52]
esi->__offset(0x160).b = 0
bool cond:0 = *(eax_3 + 0x14) u< 0x10
*(eax_3 + 0x10) = 0

if (not(cond:0))
    eax_3 = *eax_3

SRWLOCK* var_10_2 = arg1
*eax_3 = 0
int32_t var_14_2 = ecx_4
sub_56b630(esi, esi)
esi->__offset(0x138).b = 0
struct _RTL_SRWLOCK eax_7 = esi
esi = 0

if (eax_7 u< 0x10)
    esi->__offset(0x4).b = 0
    esi->__offset(0x10c).b = 1
    return eax_7

struct _RTL_SRWLOCK eax_8 = esi
*eax_8 = 0
esi->__offset(0x10c).b = 1
return eax_8
