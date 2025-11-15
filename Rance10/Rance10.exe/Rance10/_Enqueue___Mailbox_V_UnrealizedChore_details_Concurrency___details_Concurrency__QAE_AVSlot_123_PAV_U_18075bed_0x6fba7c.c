// 函数: ?Enqueue@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@QAE?AVSlot@123@PAV_UnrealizedChore@23@@Z
// 地址: 0x6fba7c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
Concurrency::details::_NonReentrantLock::_Acquire(&arg1[8])
int32_t* eax_1 = Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::LocateMailboxSegment(
    arg1, arg1[7], 1)
int32_t edi_1 = arg1[7] - eax_1[4]
*(eax_1[3] + (edi_1 << 2)) = arg3
arg1[7] += 1
arg1[8] = 0
arg2[1] = edi_1
*arg2 = eax_1
return arg2
