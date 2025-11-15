// 函数: sub_6fae1d
// 地址: 0x6fae1d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t eax_2 = *arg2 & 0xfffffff
int32_t ebx
ebx.b = eax_2 == 0
void* ListHead = arg3 + 0x60

if (eax_2 != 0)
    ListHead = arg3 + 0x10

SLIST_ENTRY* eax_3 = InterlockedPopEntrySList(ListHead)
void* __offset(_SINGLE_LIST_ENTRY, -0x120) result

if (eax_3 != 0)
    result = &eax_3[-0x48]

if (eax_3 == 0 || result == 0)
    int32_t esi_1 = *(*arg1 + 0x20)
    j_sub_4033e0()
    result = esi_1(arg3, arg2)
else
    Concurrency::details::ScheduleGroupSegmentBase::Initialize(result, arg1, arg3, arg2)

result + 0x120 = *((ebx << 2) + 0xc + arg1)
*((ebx << 2) + 0xc + arg1) = result

if (*(arg3 + 0xbc) == 0)
    Concurrency::details::SchedulingRing::Activate(arg3)

void* ecx_5 = arg3 + 0x60

if ((*arg2 & 0xfffffff) != 0)
    ecx_5 = arg3 + 0x10

sub_6fab7c(ecx_5, result)
return result
