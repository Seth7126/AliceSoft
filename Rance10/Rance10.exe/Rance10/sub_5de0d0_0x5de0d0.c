// 函数: sub_5de0d0
// 地址: 0x5de0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7416f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* edx = arg1
int32_t* var_24 = edx
int32_t var_8_1 = 0
bool eax_3 = true
void** ecx = *edx
void** var_18 = ecx
bool var_20 = true
void** ebx = ecx[1]
SRWLOCK* var_1c
int32_t* arg_c

if (*(ebx + 0xd) == 0)
    var_1c = &arg_c[1]
    
    do
        var_18 = ebx
        __Smtx_lock_shared(&ebx[5])
        int32_t edi_1 = ebx[4]
        __Smtx_unlock_shared(&ebx[5])
        __Smtx_lock_shared(var_1c)
        int32_t esi_2 = *arg_c
        __Smtx_unlock_shared(var_1c)
        eax_3 = esi_2 u< edi_1
        var_20 = eax_3
        
        if (eax_3 == 0)
            ebx = ebx[2]
        else
            ebx = *ebx
    while (*(ebx + 0xd) == 0)
    
    ecx = var_18
    edx = var_24

void** esi_3 = ecx
var_1c = esi_3

if (eax_3 == 0)
    goto label_5de1c3

bool var_44
void** var_40
int32_t* var_3c
int32_t* ecx_1

if (ecx != **edx)
    sub_429da0(&var_1c)
    esi_3 = var_1c
label_5de1c3:
    int32_t* ebx_1 = arg_c
    __Smtx_lock_shared(&ebx_1[1])
    arg_c = *ebx_1
    __Smtx_unlock_shared(&ebx_1[1])
    __Smtx_lock_shared(&esi_3[5])
    int32_t edi_3 = esi_3[4]
    int32_t* ecx_6 = __Smtx_unlock_shared(&esi_3[5])
    
    if (edi_3 u>= arg_c)
        sub_5c5bf0(arg3 + 0x10)
        sub_403160(arg3, 1, 0x20)
        *arg2 = esi_3
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    void* var_38_10 = arg3
    var_3c = ecx_6
    var_40 = var_18
    ecx_1 = var_24
    var_44 = var_20
else
    void* var_38_5 = arg3
    var_3c = ecx
    var_40 = ecx
    var_44 = true
    ecx_1 = edx

*arg2 = *sub_5ddeb0(ecx_1, &arg_c, var_44, var_40, var_3c)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
