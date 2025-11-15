// 函数: ?Push@?$StructuredWorkStealingQueue@VInternalContextBase@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEXPAVInternalContextBase@23@@Z
// 地址: 0x6f988a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi = arg1[2]

if (edi s>= *arg1 + esi)
    int32_t* var_10_1 = arg1
    int32_t* var_14_1 = arg1
    return Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::GrowAndPush(
        arg1, arg2, 0, 0)

*(arg1[3] + ((esi & edi) << 2)) = arg2
int32_t result = edi + 1
arg1[1] = result
return result
