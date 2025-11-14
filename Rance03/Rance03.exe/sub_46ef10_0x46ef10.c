// 函数: sub_46ef10
// 地址: 0x46ef10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t* var_10
int32_t* arg_4
sub_42f3d0(arg1 + 0xc, &var_10, &arg_4)
int32_t* esi = var_10

if (esi != *(arg1 + 0xc))
    LeaveCriticalSection(*(arg1 + 0x18) + 4)
    return esi[5]

void* ecx_1 = *(arg1 + 4)

if (ecx_1 == 0)
    return 0

int32_t var_24_3 = arg2
struct kiwi::CSoundChannel::VTable** result = sub_4730b0(ecx_1)
var_10 = arg_4
struct kiwi::CSoundChannel::VTable** result_1 = result
int32_t* eax_6
int32_t ecx_4
eax_6, ecx_4 = sub_442a00(&var_10)
int32_t* var_24_5 = eax_6
void* var_28_1 = &eax_6[4]
sub_430ad0(arg1 + 0xc, &var_10, ecx_4)
LeaveCriticalSection(*(arg1 + 0x18) + 4)
return result
