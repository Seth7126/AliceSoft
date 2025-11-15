// 函数: ?UnlockedSteal@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEPAV_UnrealizedChore@23@_N0@Z
// 地址: 0x6fc8a4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (true)
    int32_t result = 0
    
    while (true)
        int32_t edi_1 = *arg1
        *arg1
        *arg1 = edi_1 + 1
        
        if (edi_1 s< arg1[1])
            int32_t ecx_1 = arg1[2] & edi_1
            
            if ((*(arg1[7] + (ecx_1 << 2)) & 1) != 0 && arg2 == 0
                    && sub_6fc5c5(arg1[8] + (ecx_1 << 3)) != 0)
                *arg1 = edi_1
                return 0
            
            if (arg1[5].b != 0 && *arg1 s>= arg1[6])
                arg1[5].b = 0
            
            int32_t* eax_6 = arg1[7] + ((arg1[2] & edi_1) << 2)
            int32_t result_1 = *eax_6
            *eax_6 = 0
            result = result_1
            
            if (result == 0)
                continue
            else if ((result.b & 1) != 0)
                result &= 0xfffffffe
                
                if (Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Slot::Claim(
                        arg1[8] + ((arg1[2] & edi_1) << 3), nullptr) == 0)
                    break
        else
            *arg1 = edi_1
        
        return result
