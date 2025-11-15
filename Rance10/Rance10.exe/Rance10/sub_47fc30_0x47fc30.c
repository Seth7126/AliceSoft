// 函数: sub_47fc30
// 地址: 0x47fc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (*(arg1 + 4) == 0)
    return 0

struct kiwi::CSoundChannel::VTable** result = nullptr
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t arg_4
int32_t var_10_1 = arg_4
struct kiwi::CMultiChannelSet::VTable** eax_3 = sub_47fb60(arg1)

if (eax_3 != 0)
    arg_4 = arg2
    result = sub_4816a0(eax_3, &arg_4, &eax_3[6])

LeaveCriticalSection(*(arg1 + 0x18) + 4)
return result
