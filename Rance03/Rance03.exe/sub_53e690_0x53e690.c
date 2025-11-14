// 函数: sub_53e690
// 地址: 0x53e690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x1dc) != 0)
    sub_5f4ad0(*(arg1 + 0x1fc))
    *(arg1 + 0x1dc) = 0

int32_t* ecx_1 = *(arg1 + 0x1d8)

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    *(arg1 + 0x1d8) = 0

if (*(arg1 + 0x24) != 0)
    bool cond:0_1 = *(arg1 + 0x1f4) == 0
    *(arg1 + 0x1dc) = 1
    
    if (cond:0_1)
        char eax = sub_53e740(arg1)
        
        if (eax == 0)
            return eax
    else
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            eax_1 = sub_69adc6(0x10)
        
        if (eax_1 != 0)
            *eax_1 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `IWorkerThread'}
            eax_1[1] = 1
            eax_1[2] = arg1
            eax_1[3] = sub_53e740
            struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable**
                 var_8_1 = eax_1
            sub_5f4a10(*(arg1 + 0x1fc))
            BOOL eax_2
            eax_2.b = 1
            return eax_2
        
        int32_t var_8_2 = 0
        sub_5f4a10(*(arg1 + 0x1fc))

return 1
