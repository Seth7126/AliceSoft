// 函数: ?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z
// 地址: 0x6f0e33
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) =
    __ehhandler$?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_3 = &data_6f0e3f
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
int32_t var_14 = 0
Concurrency::details::QuickBitSet::QuickBitSet(arg2, 
    j_Concurrency::details::ResourceManager::GetCoreCount())
int32_t var_8_1 = 0
int32_t var_14_1 = 1
int32_t eax_2 = *arg3 & 0xfffffff

if (eax_2 == 0)
    Concurrency::details::QuickBitSet::Fill(arg2)
else if (eax_2 == 1)
    sub_6f0784(arg2, *(arg1 + 0x1c) + (arg3[2] << 4) + 8)
else if (eax_2 == 2)
    sub_6f0784(arg2, *(*(arg1 + 0x20) + (arg3[2] << 2)) + 8)
else if (eax_2 == 3)
    int32_t var_18 = arg3[2]
    int32_t var_1c
    sub_6f0b17(arg1 + 0x168, &var_18, &var_1c)
    int32_t edx_1 = var_1c
    int32_t ecx_3 = arg2[1]
    uint32_t esi_2 = edx_1 u>> 5
    *(ecx_3 + (esi_2 << 2)) |= 1 << ((edx_1 & 0x1f) u% 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f0ee6
return arg2
