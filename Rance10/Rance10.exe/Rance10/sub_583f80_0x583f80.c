// 函数: sub_583f80
// 地址: 0x583f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = sub_581d50(arg1)
void** eax = &arg1[0x52]
arg1->__offset(0x160).b = 0
bool cond:0 = eax[5] u< 0x10
eax[4] = 0

if (not(cond:0))
    eax = *eax

SRWLOCK* var_1c = arg1
*eax = nullptr
int32_t var_20 = ecx
sub_56b630(arg1, arg1)
arg1->__offset(0x138).b = 0
BOOL result

if (arg1 != 0)
    int32_t ecx_2
    ecx_2.b = 1
    SRWLOCK* ebx
    char temp0_1 = ebx->__offset(0x204).b
    ebx->__offset(0x204).b = 1
    ecx_2.b = temp0_1
    
    if (arg1->__offset(0x240).b == 0)
        result = sub_584090(arg1)
        
        if (result.b == 0)
            return result
    else
        int32_t* eax_5 = sub_6e810c(0x10)
        int32_t* var_c_1 = eax_5
        eax_5[1] = 1
        *eax_5 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
        eax_5[2] = arg1
        eax_5[3] = sub_584090
        sub_5866d0(&arg1[0x82], eax_5)
        __Smtx_lock_shared(&arg1[0x83])
        __Smtx_unlock_shared(&arg1[0x83])
        struct _RTL_SRWLOCK var_1c_4 = arg1
        sub_406700(arg1)

result.b = 1
return result
