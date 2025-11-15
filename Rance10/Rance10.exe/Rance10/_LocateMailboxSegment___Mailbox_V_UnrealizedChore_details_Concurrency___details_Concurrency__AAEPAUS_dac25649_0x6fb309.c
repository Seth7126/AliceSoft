// 函数: ?LocateMailboxSegment@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@AAEPAUSegment@123@I_N@Z
// 地址: 0x6fb309
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[5] == 0)
    Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::DemandInitialize(
        arg1)

int32_t* result

if (arg3 == 0)
    result = arg1[5]
else
    result = arg1[4]

int32_t* result_1 = result

while (arg2 u>= result[4] + arg1[3])
    result = result[6]
    
    if (result == 0)
        result = Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Grow(
            arg1, result_1)
    
    result_1 = result
    
    if (result == 0)
        break

return result
