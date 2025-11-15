// 函数: sub_6f3d4a
// 地址: 0x6f3d4a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i
int32_t esi_2

do
    esi_2 = arg1[1] - 1
    arg1[1]
    arg1[1] = esi_2
    
    if (*arg1 s> esi_2)
        arg1[1] = esi_2 + 1
        return Concurrency::details::WorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::SyncPop(
            arg1) __tailcall
    
    i = *(arg1[7] + ((arg1[2] & esi_2) << 2))
while (i == 0)

if ((i.b & 1) != 0)
    i &= 0xfffffffe
    
    if (Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Slot::Claim(
            arg1[8] + ((arg1[2] & esi_2) << 3), nullptr) == 0)
        return 1

return i
