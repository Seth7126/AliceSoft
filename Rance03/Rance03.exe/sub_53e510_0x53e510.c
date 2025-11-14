// 函数: sub_53e510
// 地址: 0x53e510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x1d4) != 0)
    sub_5f4ad0(*(arg1 + 0x1fc))
    *(arg1 + 0x1d4) = 0

int32_t* ecx_1 = *(arg1 + 0x1d0)

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    *(arg1 + 0x1d0) = 0

struct sealengine::CLightParamList::VTable** eax

if (*(arg1 + 0x24) != 0)
    bool cond:0_1 = *(arg1 + 0x1f4) == 0
    *(arg1 + 0x1d4) = 1
    
    if (not(cond:0_1))
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            eax_1 = sub_69adc6(0x10)
        
        if (eax_1 == 0)
            int32_t var_8_2 = 0
            sub_5f4a10(*(arg1 + 0x1fc))
            BOOL eax_3
            eax_3.b = 1
            return eax_3
        
        *eax_1 = &
            thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `IWorkerThread'}
        eax_1[1] = 1
        eax_1[2] = arg1
        eax_1[3] = sub_53e5e0
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            var_8_1 = eax_1
        sub_5f4a10(*(arg1 + 0x1fc))
        BOOL eax_2
        eax_2.b = 1
        return eax_2
    
    *(arg1 + 0x200)
    int32_t ecx_5
    int32_t edx_1
    eax, ecx_5, edx_1 = sub_58e400(arg1 + 0x14)
    *(arg1 + 0x1d0) = eax
    
    if (eax == 0)
        sub_59f4e0(eax, edx_1, ecx_5, 0x6e3ab4, arg2)
        enum MESSAGEBOX_RESULT eax_5
        eax_5.b = 0
        return eax_5
    
    *(arg1 + 0x1d4) = 0

eax.b = 1
return eax
