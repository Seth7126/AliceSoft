// 函数: sub_5838c0
// 地址: 0x5838c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
sub_581f00(arg1)
int32_t* result

if (*(arg1 + 0x14) != 0)
    char* ecx_3
    
    if (arg1 + 0x1b4 != edi)
        result, ecx_3 = sub_403590(arg1 + 0x1b4, edi, 0, 0xffffffff)
    
    if (*(arg1 + 0x1c4) == 0)
        result.b = 1
    else
        ecx_3.b = 1
        char temp0_1 = *(arg1 + 0x1a8)
        *(arg1 + 0x1a8) = 1
        ecx_3.b = temp0_1
        
        if (*(arg1 + 0x240) == 0)
            if (sub_583ac0(arg1).b == 0)
                result.b = 0
            else
                result.b = 1
        else
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
                ** eax_9 = sub_6e810c(0x10)
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
                ** var_50_1 = eax_9
            eax_9[1] = 1
            *eax_9 = &thread::CWorkerThread<class sealengine::CInstance, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
            eax_9[2] = arg1
            eax_9[3] = sub_583ac0
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstance, bool>::VTable
                ** var_64_2 = eax_9
            sub_406700(*(arg1 + 0x248))
            result.b = 1
else
    if (edi[5] u>= 0x10)
        edi = *edi
    
    void** var_4c = edi
    int32_t* var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, 0x768110, 0x4c)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_48
    sub_5e01e0(sub_409240(&var_4c, &var_30, &var_48, &var_4c))
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
