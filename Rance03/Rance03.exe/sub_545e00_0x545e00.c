// 函数: sub_545e00
// 地址: 0x545e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax

if (*(arg1 + 0x1c) == 0)
    if (*(arg1 + 0x14) != 0)
        if (sub_553640(*(arg1 + 0x18), arg4) == 0)
            return false
        
        sub_54c280(*(arg1 + 0x14))
        *(arg1 + 0x14) = 0
    
    int32_t* ecx_2 = *(arg1 + 0x18)
    void* edi_1 = *(arg2 + 0x1c0)
    
    if (edi_1 != 0)
        if (ecx_2 == 0)
            goto label_545e97
        
        if (ecx_2[5] == edi_1)
            eax.b = arg3
        
        if (ecx_2[5] != edi_1 || ecx_2[0x4d].b != eax.b)
            sub_529c30(ecx_2)
            void* ecx_4 = *(arg1 + 0x68)
            *(arg1 + 0x18) = 0
            sub_53b520(ecx_4)
        label_545e97:
            *(arg1 + 0x14) = edi_1
            EnterCriticalSection(*(edi_1 + 0xc) + 4)
            *(edi_1 + 4) += 1
            LeaveCriticalSection(*(edi_1 + 0xc) + 4)
            bool cond:0_1 = *(arg1 + 0x60) == 0
            *(arg1 + 0x1d) = arg3
            *(arg1 + 0x1c) = 1
            
            if (not(cond:0_1))
                struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** eax_8 = sub_69adc6(0x10)
                
                if (eax_8 == 0)
                    int32_t var_c_5 = 0
                    sub_5f4a10(*(arg1 + 0x5c))
                    BOOL eax_10
                    eax_10.b = 1
                    return eax_10
                
                *eax_8 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
                eax_8[1] = 1
                eax_8[2] = arg1
                eax_8[3] = sub_545f50
                struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** var_c_4 = eax_8
                sub_5f4a10(*(arg1 + 0x5c))
                BOOL eax_9
                eax_9.b = 1
                return eax_9
            
            if (sub_545f50(arg1) == 0)
                return false
            
            if (sub_553640(*(arg1 + 0x18), arg4) == 0)
                return false
            
            sub_54c280(*(arg1 + 0x14))
            *(arg1 + 0x14) = 0
    else if (ecx_2 != 0)
        sub_529c30(ecx_2)
        void* ecx_3 = *(arg1 + 0x68)
        *(arg1 + 0x18) = edi_1
        sub_53b520(ecx_3)
        int32_t eax_2
        eax_2.b = 1
        return eax_2

eax.b = 1
return eax
