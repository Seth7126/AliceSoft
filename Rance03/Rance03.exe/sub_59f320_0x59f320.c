// 函数: sub_59f320
// 地址: 0x59f320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c88f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t var_8_1 = 0
char eax_3 = 1
void** edi = *arg1
void** arg_c
void** ebx = arg_c
char var_18 = 1
void** esi = edi[1]

if (*(esi + 0xd) == 0)
    do
        edi = esi
        eax_3 = sub_59e060(ebx, &esi[4])
        var_18 = eax_3
        
        if (eax_3 == 0)
            esi = esi[2]
        else
            esi = *esi
    while (*(esi + 0xd) == 0)
    
    arg1 = var_1c

void** esi_1 = edi
arg_c = esi_1

if (eax_3 == 0)
    goto label_59f3d9

char var_3c
void** var_38
int32_t* var_34
void** eax_6

if (edi != **arg1)
    sub_418580(&arg_c)
    esi_1 = arg_c
label_59f3d9:
    char eax_9
    int32_t* ecx_6
    eax_9, ecx_6 = sub_59e060(&esi_1[4], ebx)
    
    if (eax_9 == 0)
        sub_59f100(arg3)
        *arg2 = esi_1
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    var_34 = ecx_6
    arg1 = var_1c
    eax_6 = &var_18
    var_38 = edi
    var_3c = (var_18.d).b
else
    void* var_30_2 = arg3
    eax_6 = &arg_c
    var_34 = arg1
    var_38 = edi
    var_3c = 1

*arg2 = *sub_59f140(arg1, eax_6, var_3c, var_38, var_34)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
