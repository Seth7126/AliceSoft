// 函数: sub_513fe0
// 地址: 0x513fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = data_75d4e4
void* ecx = *(result + 0x93c)

if (ecx != 0)
    EnterCriticalSection(*(ecx + 0xac) + 4)
    int32_t var_8_2 = 2
    struct kiwi::CMultiChannelSet::VTable** eax_2 = sub_46ea30(ecx + 0x94)
    
    if (eax_2 != 0)
        eax_2[2] = 0x32
        eax_2[3].b = 1
    
    LeaveCriticalSection(*(ecx + 0xac) + 4)
    result = data_75d4e4

void* edi_2 = *(result + 0x93c)

if (edi_2 == 0)
    return result

EnterCriticalSection(*(edi_2 + 0xac) + 4)
int32_t var_8_5 = 3
struct kiwi::CMultiChannelSet::VTable** eax_7 = sub_46ea30(edi_2 + 0x94)

if (eax_7 != 0)
    eax_7[2] = 0x32
    eax_7[3].b = 1

return LeaveCriticalSection(*(edi_2 + 0xac) + 4)
