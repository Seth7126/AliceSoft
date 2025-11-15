// 函数: sub_583480
// 地址: 0x583480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d4c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK var_78
var_78.Ptr.b = arg4
int32_t ecx = sub_581d50(arg1)
void** eax_4 = &arg1[0x52]
arg1->__offset(0x160).b = 0
bool cond:0 = eax_4[5] u< 0x10
eax_4[4] = 0

if (not(cond:0))
    eax_4 = *eax_4

void* __offset(_RTL_SRWLOCK, 0x4) var_80
void* __offset(_RTL_SRWLOCK, 0x4) var_94 = var_80
*eax_4 = nullptr
int32_t var_98 = ecx
sub_56b630(arg1, arg1)
arg1->__offset(0x138).b = 0
sub_581f00(arg1)
sub_403490(&arg1[1], 0x75d4cd, nullptr)
struct _RTL_SRWLOCK ecx_4 = arg1
int32_t* result

if (ecx_4 == 0)
    result.b = 0
else
    int32_t* var_7c
    sub_5688b0(&arg1[0x7f], sub_5cbc20(ecx_4, &var_7c, arg2, arg3, (var_78.Ptr).b))
    __seterrormode(&var_78)
    int32_t var_8_1 = 0
    int32_t* edi_1 = var_7c
    
    if (edi_1 != 0)
        var_7c = nullptr
        int32_t ecx_6 = edi_1[1]
        edi_1[1] -= 1
        (**edi_1)(ecx_6 - 1)
    
    int32_t var_8_2 = 0xffffffff
    ___crtSetUnhandledExceptionFilter(&var_78)
    __Smtx_lock_shared(&arg1[0x80])
    __Smtx_unlock_shared(&arg1[0x80])
    
    if (arg1 != 0)
        __Smtx_lock_shared(&arg1[0x80])
        struct _RTL_SRWLOCK edi_3 = arg1
        __Smtx_unlock_shared(&arg1[0x80])
        result = *(edi_3 + 0x60)
        int32_t ecx_11 = *(edi_3 + 0x64)
        
        if (result == ecx_11)
        label_583671:
            result.b = 1
        else
            while (true)
                void* edx_3
                edx_3.b = *(*result + 0x6d)
                
                if (edx_3.b != 0)
                    break
                
                result = &result[1]
                
                if (result == ecx_11)
                    goto label_583671_1
            
            SRWLOCK* var_94_7 = arg1
            
            if (sub_563ed0(arg1).b != 0)
            label_583671_1:
                result.b = 1
            else
                void* __offset(_RTL_SRWLOCK, 0x4) eax_16 = &arg1[1]
                
                if (arg1 u>= 0x10)
                    eax_16 -= 4
                
                var_80 = eax_16
                void var_5c
                sub_403360(&var_5c, 0x7681f0)
                int32_t var_8_4 = 3
                var_8_4.b = 4
                void var_74
                sub_5e01e0(sub_409240(&var_80, &var_5c, &var_74, &var_80))
                sub_403320(&var_74)
                sub_403320(&var_5c)
                result.b = 0
    else
        void* var_44
        sub_403360(&var_44, 0x768160)
        int32_t var_8_3 = 1
        var_8_3.b = 2
        char var_2c
        sub_5e01e0(sub_6ca360(&var_2c, &var_44))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t* var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
