// 函数: sub_4d6410
// 地址: 0x4d6410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
HANDLE hHandle = *(arg1 + 0x30)
enum WAIT_EVENT eax

if (hHandle != 0)
    eax = WaitForSingleObject(hHandle, 0)

if (hHandle == 0 || eax != WAIT_TIMEOUT)
    char eax_1 = sub_4065e0(arg1 + 4)
    
    if (eax_1 == 0)
        return eax_1

struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class partsengine::CFlatSprite, bool>::VTable
    ** eax_2 = sub_6e810c(0x14)
struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class partsengine::CFlatSprite, bool>::VTable
    ** var_4 = eax_2
struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class partsengine::CFlatSprite, bool>::VTable
    ** var_c = sub_4d6500(eax_2, arg2)
sub_406700(arg1 + 4)
BOOL eax_4
eax_4.b = 1
return eax_4
