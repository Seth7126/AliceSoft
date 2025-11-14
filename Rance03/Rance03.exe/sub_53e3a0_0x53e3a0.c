// 函数: sub_53e3a0
// 地址: 0x53e3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x1c4) != 0)
    sub_5f4ad0(*(arg1 + 0x1fc))
    *(arg1 + 0x1c4) = 0

void* edx = *(arg1 + 0x1c0)

if (edx == 0)
    return 

for (int32_t* i = *(edx + 0x4c); i != *(edx + 0x50); i = &i[1])
    if (*(*i + 0x69) != 0)
        void* var_8_1 = arg1
        sub_524820(*(arg1 + 0x1c8))
        struct IWorkerThread::thread::CWorkerThread<class sealengine::C2DDetection, void>::VTable** 
            eax_1 = sub_69adc6(0x10)
        
        if (eax_1 == 0)
            eax_1 = nullptr
        else
            int32_t ecx_3 = *(arg1 + 0x1c8)
            *eax_1 = &thread::CWorkerThread<class sealengine::C2DDetection, void>::`vftable'{for `IWorkerThread'}
            eax_1[1] = 1
            eax_1[2] = ecx_3
            eax_1[3] = sub_5248d0
        
        struct IWorkerThread::thread::CWorkerThread<class sealengine::C2DDetection, void>::VTable** 
            var_8_2 = eax_1
        sub_5f4a10(*(arg1 + 0x1fc))
        break

sub_54c280(*(arg1 + 0x1c0))
*(arg1 + 0x1c0) = 0
