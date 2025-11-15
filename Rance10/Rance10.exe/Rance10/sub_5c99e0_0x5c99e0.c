// 函数: sub_5c99e0
// 地址: 0x5c99e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7403b4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t* ecx_2 = data_7fcbd4
int32_t edx

if (ecx_2 != 0)
    (**ecx_2)(eax_2)
    edx = data_7fcbd4
else
    edx = 0

int32_t* var_1c
int32_t* eax_5 = sub_432270(&var_1c, edx)
int32_t* var_2c = nullptr
SRWLOCK var_28
__builtin_memset(&var_28, 0, 4)
sub_4323a0(&var_2c, eax_5)
int32_t var_8_1 = 0
SRWLOCK var_18
__seterrormode(&var_18)
var_8_1.b = 1
int32_t* ecx_5 = var_1c

if (ecx_5 != 0)
    var_1c = nullptr
    (*(*ecx_5 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_18)
__Smtx_lock_shared(&var_28)
void* ebx
ebx.b = var_2c != 0
__Smtx_unlock_shared(&var_28)
char eax_7

if (ebx.b != 0)
    eax_7 = sub_5c79c0(arg1, 0f)

if (ebx.b == 0 || eax_7 == 0)
    ebx.b = 0
else
    int32_t eax_8 = *arg1
    int32_t eax_9 = *(eax_8 + 0xcc)
    var_18 = *(eax_8 + 0xc8)
    int128_t var_50
    __builtin_memset(&var_50, 0, 0x11)
    int32_t var_3c_1 = 0
    char var_38_1 = 0
    var_8_1.b = 2
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    
    if (sub_5ca560(&var_50, var_18, eax_9, 1, 0, 1, esi_1) == 0)
        ebx.b = 0
        sub_431b10(&var_50)
    else
        __Smtx_lock_shared(&arg1[2])
        int32_t* esi_2 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        
        if ((*(*esi_2 + 0x70))(eax_2) == 0)
            ebx.b = 0
            sub_431b10(&var_50)
        else if (sub_5ca770(&var_50) == 0)
            ebx.b = 0
            sub_431b10(&var_50)
        else
            int32_t* eax_15
            int32_t ecx_12
            eax_15, ecx_12 = sub_431af0(&arg1[1])
            int32_t var_64_6 = ecx_12
            
            if ((*(*eax_15 + 0x68))(0, 0x3f800000) == 0)
                ebx.b = 0
                sub_431b10(&var_50)
            else if (sub_5c7e70(arg1) == 0)
                ebx.b = 0
                sub_431b10(&var_50)
            else if (sub_5ca7c0(&var_50) == 0)
                ebx.b = 0
                sub_431b10(&var_50)
            else if ((*(*sub_431af0(&arg1[1]) + 0x78))() == 0)
                ebx.b = 0
                sub_431b10(&var_50)
            else
                int32_t edx_3 = *sub_431af0(&var_2c)
                void var_24
                int32_t* eax_25 = sub_432270(&var_24, (*(edx_3 + 0xc))(var_18, eax_9, 0x20))
                int32_t var_34 = 0
                int32_t var_30_1 = 0
                sub_4323a0(&var_34, eax_25)
                var_8_1.b = 3
                sub_431b10(&var_24)
                
                if (sub_451b90(&var_34) == 0)
                label_5c9c59:
                    ebx.b = 0
                    sub_431b10(&var_34)
                    sub_431b10(&var_50)
                else
                    int32_t* eax_27 = sub_5ca8c0(&var_50)
                    
                    if (eax_27 == 0)
                        goto label_5c9c59
                    
                    if ((*(*eax_27 + 0x40))(sub_431af0(&var_34)) == 0)
                        goto label_5c9c59
                    
                    sub_5c9cc0(arg2, sub_431af0(&var_34))
                    ebx.b = 1
                    sub_431b10(&var_34)
                    sub_431b10(&var_50)

__seterrormode(&var_28)
int32_t var_8_2 = 4
int32_t* ecx_34 = var_2c

if (ecx_34 != 0)
    var_2c = nullptr
    (*(*ecx_34 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_28)
int32_t eax_32
eax_32.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_32
