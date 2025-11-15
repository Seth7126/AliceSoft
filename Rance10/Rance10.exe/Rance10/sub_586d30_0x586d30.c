// 函数: sub_586d30
// 地址: 0x586d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d62e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18
sub_586cf0(arg1, &var_18, arg2)
int32_t var_8_1 = 0
int32_t eax_3 = arg1[1]
int32_t* esi = *arg1
int32_t result
int32_t* edi
int32_t* var_14

if (esi == eax_3)
label_586d89:
    
    if (eax_3 == arg1[2])
        sub_587320(arg1, 1)
    
    int32_t* ecx_1 = arg1[1]
    
    if (ecx_1 == 0)
        arg1[1] += 8
        edi = var_14
        result = ((arg1[1] - *arg1) s>> 3) - 1
    else
        edi = nullptr
        *ecx_1 = var_18
        ecx_1[1] = var_14
        arg1[1] += 8
        int32_t esi_3 = (arg1[1] - *arg1) s>> 3
        var_18 = 0
        result = esi_3 - 1
        int32_t var_14_1 = 0
else
    while (*esi != 0)
        esi = &esi[2]
        
        if (esi == eax_3)
            break
    
    if (esi == eax_3)
        goto label_586d89
    
    Concurrency::details::_SyncOriginator<uint32_t>::~_SyncOriginator<uint32_t>(esi, &var_18)
    edi = var_14
    result = (esi - *arg1) s>> 3
int32_t var_8_2 = 1

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (**edi)(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
