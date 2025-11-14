// 函数: sub_541840
// 地址: 0x541840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t ecx
int32_t edx
ecx, edx = sub_53e4b0(arg1)
void** eax = arg2

if (*(arg1 + 0x24) != 0)
    if (arg1 + 0x184 != eax)
        sub_401ff0(arg1 + 0x184, eax, 0, 0xffffffff)
    
    if (*(arg1 + 0x194) == 0)
        eax.b = 1
        return eax
    
    bool cond:1_1 = *(arg1 + 0x1f4) == 0
    *(arg1 + 0x168) = 1
    
    if (not(cond:1_1))
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            eax_1 = sub_69adc6(0x10)
        
        if (eax_1 == 0)
            int32_t var_c_3 = 0
            sub_5f4a10(*(arg1 + 0x1fc))
            BOOL eax_3
            eax_3.b = 1
            return eax_3
        
        *eax_1 = &
            thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `IWorkerThread'}
        eax_1[1] = 1
        eax_1[2] = arg1
        eax_1[3] = sub_541900
        struct IWorkerThread::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable** 
            var_c_2 = eax_1
        sub_5f4a10(*(arg1 + 0x1fc))
        BOOL eax_2
        eax_2.b = 1
        return eax_2
    
    if (sub_541900(arg1).b != 0)
        eax.b = 1
        return eax
else
    if (eax[5] u>= 0x10)
        eax = *eax
    
    sub_59f4e0(eax, edx, ecx, 0x6e3988, eax)

eax.b = 0
return eax
