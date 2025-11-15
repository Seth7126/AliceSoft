// 函数: sub_4dec00
// 地址: 0x4dec00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2

if (edi == 0 || *(arg1 + 8) == edi)
    return 

sub_4deba0(arg1)
*(arg1 + 8) = edi
(**edi)()
void* eax_2 = *(arg1 + 8)
float xmm0_3 = sub_4a7880(*(eax_2 + 0x1c) * 0.5f, *(eax_2 + 0x18))
float var_c_1 = xmm0_3 * 57.2957764f + xmm0_3 * 57.2957764f
float var_10
sub_5572c0(arg1 + 0x10, *(eax_2 + 0x10), *(eax_2 + 0x14), var_10)
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerView::VTable** eax_3 =
    sub_6e810c(0x58)
arg2 = eax_3
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerView::VTable** eax_4 =
    sub_4da560(eax_3, arg1, 0, *(arg1 + 0x6c), *(arg1 + 0xc))
bool cond:0_1 = *(arg1 + 0x144) == 0
*(arg1 + 0x68) = eax_4

if (not(cond:0_1))
    sub_4db280(eax_4)

int32_t* eax_5 = *(arg1 + 8)
sub_4da910(*(arg1 + 0x68), eax_5, eax_5[0xe])
