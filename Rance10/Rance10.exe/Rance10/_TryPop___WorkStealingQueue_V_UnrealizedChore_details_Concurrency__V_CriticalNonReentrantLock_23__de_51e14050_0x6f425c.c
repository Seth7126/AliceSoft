// 函数: ?TryPop@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEPAV_UnrealizedChore@23@H@Z
// 地址: 0x6f425c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg2 - arg1[3]

if (esi_1 == arg1[1] - 1)
    return sub_6f3d4a(arg1)

if (esi_1 s>= arg1[1] || esi_1 s< *arg1)
    return 0

int32_t* eax_4 = arg1[7] + ((arg1[2] & esi_1) << 2)
int32_t result_1 = *eax_4
*eax_4 = 0
int32_t result = result_1

if ((result.b & 1) != 0)
    result &= 0xfffffffe
    
    if (Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Slot::Claim(
            arg1[8] + ((arg1[2] & esi_1) << 3), nullptr) == 0)
        return 1

return result
