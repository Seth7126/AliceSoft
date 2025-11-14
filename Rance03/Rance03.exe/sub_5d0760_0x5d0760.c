// 函数: sub_5d0760
// 地址: 0x5d0760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ca250
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
    int32_t ecx_1 = *arg_c
    
    do
        edi = eax_3
        edx = ecx_1 s< eax_3[4]
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
    goto label_5d0816

char var_40
void** var_3c
int32_t* var_38
int32_t** eax_4

if (edi != *ebx)
    sub_418580(&var_18)
    esi = var_18
label_5d0816:
    int32_t* ecx_6 = arg_c
    
    if (esi[4] s>= *ecx_6)
        sub_5d0530(arg3)
        *arg2 = esi
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    var_38 = ecx_6
    arg1 = var_20
    eax_4 = &var_1c
    var_3c = edi
    var_40 = (var_1c.d).b
else
    void* var_34 = arg3
    eax_4 = &arg_c
    var_38 = arg1
    var_3c = edi
    var_40 = 1

void** eax_6 = arg2
*eax_6 = *sub_5d0580(arg1, eax_4, var_40, var_3c, var_38)
eax_6[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
