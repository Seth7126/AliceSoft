// 函数: sub_545200
// 地址: 0x545200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x10) == 0)
    if (*(arg1 + 0x14) != 0)
        void* edi_1 = *(arg1 + 0xc)
        
        if (sub_583dd0(edi_1, arg3) == 0)
            return 0
        
        if (sub_583f30(edi_1, arg3) == 0)
            return 0
        
        *(edi_1 + 0x10) = 1
        sub_54c280(*(arg1 + 0x14))
        *(arg1 + 0x14) = 0
    
    int32_t* ecx_3 = *(arg1 + 0xc)
    void* edi_2 = *(arg2 + 0x1c0)
    
    if (edi_2 != 0)
        if (ecx_3 == 0)
            goto label_5452a1
        
        if (ecx_3[5] != edi_2)
            sub_529c30(ecx_3)
            void* ecx_5 = *(arg1 + 0x68)
            *(arg1 + 0xc) = 0
            sub_53b520(ecx_5)
        label_5452a1:
            *(arg1 + 0x14) = edi_2
            EnterCriticalSection(*(edi_2 + 0xc) + 4)
            *(edi_2 + 4) += 1
            LeaveCriticalSection(*(edi_2 + 0xc) + 4)
            bool cond:1_1 = *(arg1 + 0x60) == 0
            *(arg1 + 0x10) = 1
            
            if (not(cond:1_1))
                struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** eax_7 = sub_69adc6(0x10)
                
                if (eax_7 == 0)
                    int32_t var_10_6 = 0
                    sub_5f4a10(*(arg1 + 0x5c))
                    BOOL eax_9
                    eax_9.b = 1
                    return eax_9
                
                *eax_7 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
                eax_7[1] = 1
                eax_7[2] = arg1
                eax_7[3] = sub_545350
                struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** var_10_5 = eax_7
                sub_5f4a10(*(arg1 + 0x5c))
                BOOL eax_8
                eax_8.b = 1
                return eax_8
            
            if (sub_545350(arg1) == 0)
                return 0
            
            if (sub_583d10(*(arg1 + 0xc), arg3) == 0)
                return 0
            
            sub_54c280(*(arg1 + 0x14))
            *(arg1 + 0x14) = 0
    else if (ecx_3 != 0)
        sub_529c30(ecx_3)
        void* ecx_4 = *(arg1 + 0x68)
        *(arg1 + 0xc) = edi_2
        sub_53b520(ecx_4)
        int32_t eax_2
        eax_2.b = 1
        return eax_2

void* eax
eax.b = 1
return eax
