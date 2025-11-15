// 函数: ?Pop@?$StructuredWorkStealingQueue@VInternalContextBase@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEPAVInternalContextBase@23@XZ
// 地址: 0x6f7e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi_1 = *(arg1 + 4) - 1
int32_t eax = *(arg1 + 0xc)
int32_t edx_1 = *(arg1 + 8) & edi_1
*(arg1 + 4) = edi_1
int32_t* eax_1 = eax + (edx_1 << 2)
int32_t result_1 = *eax_1
*eax_1 = 0
int32_t result = result_1

if (result == 0)
    *(arg1 + 4) = edi_1 + 1

if ((result.b & 1) != 0)
    result &= 0xfffffffe
    
    if (Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Slot::Claim(
            *(arg1 + 0x10) + ((*(arg1 + 8) & edi_1) << 3), nullptr) == 0)
        return 1

return result
