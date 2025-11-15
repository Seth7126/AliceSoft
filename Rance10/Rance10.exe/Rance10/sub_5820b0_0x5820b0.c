// 函数: sub_5820b0
// 地址: 0x5820b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
    ** var_4 = arg1

if (arg1[0x87].b != 0)
    sub_4068c0(arg1[0x92])
    int32_t eax_1
    eax_1.b = 0
    arg1[0x87].b = 0
    eax_1.b = arg1[0x87].b

void* result = arg1[0x86]
arg1[0x86] = 0

if (result != 0)
    int32_t var_10_1 = 0xa4
    operator new(result)

result.b = 1

if (arg1[5] != 0)
    arg1[0x87].b = 1
    result.b = arg1[0x87].b
    
    if (arg1[0x90].b == 0)
        result = sub_582150(arg1)
        
        if (result.b == 0)
            return result
    else
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
            ** eax_2 = sub_6e810c(0x10)
        var_4 = eax_2
        eax_2[1] = 1
        *eax_2 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
        eax_2[2] = arg1
        eax_2[3] = sub_582150
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
            ** var_10_2 = eax_2
        sub_406700(arg1[0x92])
    
    result.b = 1

return result
