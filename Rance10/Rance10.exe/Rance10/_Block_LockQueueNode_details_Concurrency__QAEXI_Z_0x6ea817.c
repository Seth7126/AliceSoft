// 函数: ?Block@LockQueueNode@details@Concurrency@@QAEXI@Z
// 地址: 0x6ea817
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = j_Concurrency::details::ResourceManager::GetCoreCount()

if (((*(arg1 + 8) u>> 2).b & 1) == 0)
    uint32_t edx_4
    
    if (((*(arg1 + 8) u>> 1).b & 1) == 0)
        edx_4 = 1
    else
        edx_4 = (*(arg1 + 8) u>> 3) - (arg2 u>> 3)
    
    if (edx_4 u<= eax + 2)
        int32_t var_c_1 = 0
        int32_t (* var_8_1)() = sub_6eb74c
        void var_14
        Concurrency::details::_SpinWait<0>::_SetSpinCount(&var_14, 
            divu.dp.d(0:((edx_4 - 1) * data_7e1360), eax + 2) + data_7e1360)
        
        while (((*(arg1 + 8)).b & 1) != 0)
            if (Concurrency::details::_SpinWait<0>::_SpinOnce(&var_14) == 0)
                break

return sub_6eb772()
