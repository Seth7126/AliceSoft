// 函数: sub_46eb10
// 地址: 0x46eb10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 4) == 0)
    return 0

struct kiwi::CSoundChannel::VTable** result = nullptr
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t arg_4
int32_t var_10_1 = arg_4
struct kiwi::CMultiChannelSet::VTable** eax_3 = sub_46ea30(arg1)

if (eax_3 != 0)
    arg_4 = arg2
    result = sub_470070(eax_3, &arg_4, &eax_3[6])

LeaveCriticalSection(*(arg1 + 0x18) + 4)
return result
