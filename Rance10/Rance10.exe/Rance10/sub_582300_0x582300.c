// 函数: sub_582300
// 地址: 0x582300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_582000(arg1)

if (*(arg1 + 0x14) != 0)
    int32_t ecx
    ecx.b = 1
    char temp0_1 = *(arg1 + 0x228)
    *(arg1 + 0x228) = 1
    ecx.b = temp0_1
    
    if (*(arg1 + 0x240) == 0)
        char result = sub_582370(arg1)
        
        if (result == 0)
            return result
    else
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
            ** eax_2 = sub_6e810c(0x10)
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
            ** var_4_1 = eax_2
        eax_2[1] = 1
        *eax_2 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
        eax_2[2] = arg1
        eax_2[3] = sub_582370
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
            ** var_10_1 = eax_2
        sub_406700(*(arg1 + 0x248))

return 1
