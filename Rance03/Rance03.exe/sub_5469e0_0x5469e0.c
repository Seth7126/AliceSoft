// 函数: sub_5469e0
// 地址: 0x5469e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x4c) == 0)
    if (*(arg1 + 0x50) != 0)
        if (sub_56a320(*(arg1 + 0x48), arg3) == 0)
            return 0
        
        sub_53a360(*(arg1 + 0x50))
        int32_t* ecx_2 = *(arg1 + 0x54)
        *(arg1 + 0x50) = 0
        sub_53a360(ecx_2)
        void* ecx_3 = *(arg1 + 0x68)
        *(arg1 + 0x54) = 0
        sub_53b520(ecx_3)
    
    int32_t* ecx_4 = *(arg1 + 0x48)
    void* esi_1 = *(arg2 + 0x1d8)
    
    if (esi_1 != 0)
        if (ecx_4 == 0)
            goto label_546a8b
        
        if (sub_56a3a0(ecx_4, arg2 + 0x14, *(esi_1 + 0x10)) == 0)
            sub_529c30(*(arg1 + 0x48))
            *(arg1 + 0x48) = 0
        label_546a8b:
            *(arg1 + 0x50) = esi_1
            EnterCriticalSection(*(esi_1 + 0xc) + 4)
            *(esi_1 + 4) += 1
            LeaveCriticalSection(*(esi_1 + 0xc) + 4)
            *(arg1 + 0x54) = arg2
            EnterCriticalSection(*(arg2 + 0xc) + 4)
            *(arg2 + 4) += 1
            LeaveCriticalSection(*(arg2 + 0xc) + 4)
            bool cond:0_1 = *(arg1 + 0x60) == 0
            *(arg1 + 0x4c) = 1
            
            if (not(cond:0_1))
                struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** eax_12 = sub_69adc6(0x10)
                
                if (eax_12 == 0)
                    int32_t var_10_8 = 0
                    sub_5f4a10(*(arg1 + 0x5c))
                    BOOL eax_14
                    eax_14.b = 1
                    return eax_14
                
                *eax_12 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
                eax_12[1] = 1
                eax_12[2] = arg1
                eax_12[3] = sub_546b70
                struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** var_10_7 = eax_12
                sub_5f4a10(*(arg1 + 0x5c))
                BOOL eax_13
                eax_13.b = 1
                return eax_13
            
            if (sub_546b70(arg1) == 0)
                return 0
            
            if (sub_56a320(*(arg1 + 0x48), arg3) == 0)
                return 0
            
            sub_53a360(*(arg1 + 0x50))
            int32_t* ecx_12 = *(arg1 + 0x54)
            *(arg1 + 0x50) = 0
            sub_53a360(ecx_12)
            void* ecx_13 = *(arg1 + 0x68)
            *(arg1 + 0x54) = 0
            sub_53b520(ecx_13)
    else if (ecx_4 != 0)
        sub_529c30(ecx_4)
        void* ecx_5 = *(arg1 + 0x68)
        *(arg1 + 0x48) = esi_1
        sub_53b520(ecx_5)
        int32_t eax_2
        eax_2.b = 1
        return eax_2

return 1
