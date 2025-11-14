// 函数: sub_475ce0
// 地址: 0x475ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_1 = *(data_75d4e4 + 0x93c)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

EnterCriticalSection(*(eax_1 + 0xac) + 4)
int32_t var_c_1 = arg1
struct kiwi::CMultiChannelSet::VTable** eax_4 = sub_46ea30(eax_1 + 0x94)

if (eax_4 != 0)
    eax_4[2] = arg2
    int32_t ecx_1
    ecx_1.b = arg3
    eax_4[3].b = ecx_1.b

LeaveCriticalSection(*(eax_1 + 0xac) + 4)
int32_t eax_7
eax_7.b = 1
return eax_7
