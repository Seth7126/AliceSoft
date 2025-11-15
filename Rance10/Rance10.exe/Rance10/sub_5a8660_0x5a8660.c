// 函数: sub_5a8660
// 地址: 0x5a8660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f034
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5a8920(arg1)
__seterrormode(arg1 + 0x44)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x40)

if (ecx != 0)
    *(arg1 + 0x40) = 0
    (*(*ecx + 4))(eax_2)

int32_t var_8_2 = 0xffffffff
___crtSetUnhandledExceptionFilter(arg1 + 0x44)
void* esi_1 = arg1
void* edi_1 = esi_1 + 0x28
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x4da637d, arg2[2] - arg2[1])
int32_t edx_1 = edx s>> 4
int32_t ecx_5 = (edx_1 u>> 0x1f) + edx_1
int32_t var_1c = ecx_5

if ((*(edi_1 + 8) - *edi_1) s>> 2 u< ecx_5)
    if (ecx_5 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_57c590(edi_1, ecx_5)
    ecx_5 = var_1c

int32_t* ebx = nullptr

if (ecx_5 s> 0)
    do
        int32_t* var_18
        sub_57c3a0(&var_18)
        int32_t var_8_3 = 1
        int32_t* esi_2 = var_18
        char eax_9
        int32_t ecx_9
        eax_9, ecx_9 = sub_57ada0(esi_2, ebx, arg2, arg3, *(esi_1 + 0x78), *(esi_1 + 0x7c))
        
        if (eax_9 == 0)
            if (esi_2 != 0)
                int32_t var_30_9 = ecx_9
                sub_57c340(esi_2)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (*(edi_1 + 4) == *(edi_1 + 8))
            int32_t var_30_4 = ecx_9
            sub_57c530(edi_1)
        
        int32_t** ecx_11 = *(edi_1 + 4)
        
        if (ecx_11 != 0)
            int32_t* eax_11 = esi_2
            esi_2 = nullptr
            var_18 = nullptr
            *ecx_11 = eax_11
        
        *(edi_1 + 4) += 4
        int32_t var_8_4 = 0xffffffff
        
        if (esi_2 != 0)
            int32_t** var_30_5 = ecx_11
            sub_57c340(esi_2)
        
        esi_1 = arg1
        ebx += 1
    while (ebx s< var_1c)

__seterrormode(esi_1 + 0x6c)
int32_t var_8_5 = 2
int32_t* ecx_13 = *(esi_1 + 0x68)

if (ecx_13 != 0)
    *(esi_1 + 0x68) = 0
    (*(*ecx_13 + 4))(eax_2)

int32_t var_8_6 = 0xffffffff
___crtSetUnhandledExceptionFilter(esi_1 + 0x6c)
*(arg1 + 0x70) = 0x7f7fffff
__Smtx_lock_shared(&arg2[7])
int32_t* eax_13 = arg2[6]
__Smtx_unlock_shared(&arg2[7])

if (eax_13 != 0)
    sub_5866d0(arg1 + 0x68, eax_13)

if (arg1 + 8 != &arg2[8])
    sub_403590(arg1 + 8, &arg2[8], 0, 0xffffffff)

*(arg1 + 0x20) = *arg2
void* result = arg2[1]
int32_t ecx_16 = arg2[2]

if (result == ecx_16)
label_5a882f:
    result.b = 0
else
    while (*(result + 4) != 4)
        result += 0x34c
        
        if (result == ecx_16)
            goto label_5a882f
    
    result.b = 1

*(arg1 + 0x24) = result.b
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
