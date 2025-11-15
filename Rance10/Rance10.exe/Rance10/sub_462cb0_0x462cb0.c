// 函数: sub_462cb0
// 地址: 0x462cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c1b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_20 = arg1
int32_t var_8_1 = 0
bool edx = true
int32_t* ebx = *arg1
void** edi = ebx
bool var_1c = true
void** eax_3 = ebx[1]
int32_t* arg_c

if (*(eax_3 + 0xd) == 0)
    do
        edi = eax_3
        edx = *arg_c s< eax_3[4]
        var_1c = edx
        
        if (edx == 0)
            eax_3 = eax_3[2]
        else
            eax_3 = *eax_3
    while (*(eax_3 + 0xd) == 0)
    
    arg1 = var_20

void** esi = edi
void** var_18 = esi

if (edx == 0)
    goto label_462d66

bool var_40
void** var_3c
int32_t* var_38

if (edi != *ebx)
    sub_429da0(&var_18)
    esi = var_18
label_462d66:
    int32_t* ecx_6 = arg_c
    
    if (esi[4] s>= *ecx_6)
        sub_462690(arg3)
        *arg2 = esi
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    var_38 = ecx_6
    arg1 = var_20
    var_3c = edi
    var_40 = var_1c
else
    void* var_34 = arg3
    var_38 = arg1
    var_3c = edi
    var_40 = true

void** eax_5 = arg2
*eax_5 = *sub_462a60(arg1, &arg_c, var_40, var_3c, var_38)
eax_5[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
