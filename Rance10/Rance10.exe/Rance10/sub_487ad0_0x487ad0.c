// 函数: sub_487ad0
// 地址: 0x487ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_1 = *(data_7fcb6c + 0x934)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

EnterCriticalSection(*(eax_1 + 0x90) + 4)
int32_t var_c_1 = arg1
struct kiwi::CMultiChannelSet::VTable** eax_4 = sub_47fb60(eax_1 + 0x78)

if (eax_4 != 0)
    eax_4[2] = arg2
    int32_t ecx_1
    ecx_1.b = arg3
    eax_4[3].b = ecx_1.b

LeaveCriticalSection(*(eax_1 + 0x90) + 4)
int32_t eax_7
eax_7.b = 1
return eax_7
