// 函数: sub_56b260
// 地址: 0x56b260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x5c) == 0 || arg3 == 0)
    return 

bool cond:0_1 = arg2 f> *(arg1 + 0x60)
*(arg1 + 0x60) = arg2

if (cond:0_1)
    return 

void* edi_1 = *(data_75d4e4 + 0x93c)

if (edi_1 != 0)
    EnterCriticalSection(*(edi_1 + 0xac) + 4)
    int32_t var_14_2 = 4
    struct kiwi::CMultiChannelSet::VTable** eax_4 = sub_46ea30(edi_1 + 0x94)
    
    if (eax_4 != 0)
        eax_4[2] = 0xc8
        eax_4[3].b = 1
    
    LeaveCriticalSection(*(edi_1 + 0xac) + 4)

int32_t eax_8 = (*(**(arg1 + 0x5c) + 0x14))()
struct kiwi::CSoundChannel::VTable** eax = (*(**(arg1 + 0x5c) + 0x18))()
void* ecx_4 = *(data_75d4e4 + 0x93c)

if (ecx_4 != 0)
    sub_476120(ecx_4, 4, eax, eax_8, int.d(arg2 * 1000f * 0.0333333351f))
