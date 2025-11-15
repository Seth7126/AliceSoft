// 函数: sub_47ffe0
// 地址: 0x47ffe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg1 + 0x18) + 4)
void** var_10
void** arg_4
sub_42eb70(arg1 + 0xc, &var_10, &arg_4)
void** esi = var_10

if (esi != *(arg1 + 0xc))
    LeaveCriticalSection(*(arg1 + 0x18) + 4)
    return esi[5]

void* ecx_1 = *(arg1 + 4)

if (ecx_1 == 0)
    return 0

int32_t var_24_3 = arg2
struct kiwi::CSoundChannel::VTable** result = sub_485990(ecx_1)
var_10 = arg_4
struct kiwi::CSoundChannel::VTable** result_1 = result
int32_t* eax_6
void* ecx_4
eax_6, ecx_4 = sub_435660(&var_10)
int32_t* var_24_5 = eax_6
void* var_28_1 = &eax_6[4]
sub_480a30(arg1 + 0xc, &var_10, ecx_4)
LeaveCriticalSection(*(arg1 + 0x18) + 4)
return result
