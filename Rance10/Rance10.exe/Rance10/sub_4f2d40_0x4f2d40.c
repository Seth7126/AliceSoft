// 函数: sub_4f2d40
// 地址: 0x4f2d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7361c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t var_8_1 = 0
bool edx = true
int32_t* ebx = *arg1
int32_t** esi = ebx
int32_t* arg_c
int32_t* edi = arg_c
bool var_18 = true
void** eax_3 = ebx[1]

if (*(eax_3 + 0xd) == 0)
    do
        esi = eax_3
        edx = *edi u< eax_3[4]
        var_18 = edx
        
        if (edx == 0)
            eax_3 = eax_3[2]
        else
            eax_3 = *eax_3
    while (*(eax_3 + 0xd) == 0)
    
    arg1 = var_1c

int32_t* eax_6 = esi
arg_c = eax_6

if (edx == 0)
    goto label_4f2df9

bool var_3c
int32_t** var_38
int32_t* var_34

if (esi != *ebx)
    sub_429da0(&arg_c)
    eax_6 = arg_c
label_4f2df9:
    
    if (eax_6[4] u>= *edi)
        *arg2 = eax_6
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t var_30_1 = arg3
    arg1 = var_1c
    var_34 = edi
    var_38 = esi
    var_3c = var_18
else
    int32_t var_30 = arg3
    var_34 = edi
    var_38 = esi
    var_3c = true

*arg2 = *sub_4f2e40(arg1, &arg_c, var_3c, var_38, var_34)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
