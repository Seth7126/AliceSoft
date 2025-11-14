// 函数: sub_4ce350
// 地址: 0x4ce350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bef80
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
    int32_t ecx = *edi
    
    do
        esi = eax_3
        edx = ecx s< eax_3[4]
        var_18 = edx
        
        if (edx == 0)
            eax_3 = eax_3[2]
        else
            eax_3 = *eax_3
    while (*(eax_3 + 0xd) == 0)
    
    arg1 = var_1c

int32_t** eax_7 = esi
arg_c = eax_7

if (edx == 0)
    goto label_4ce409

char var_3c
int32_t** var_38
int32_t* var_34
int32_t** eax_4

if (esi != *ebx)
    sub_418580(&arg_c)
    eax_7 = arg_c
label_4ce409:
    
    if (eax_7[4] s>= *edi)
        *arg2 = eax_7
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t var_30_1 = arg3
    arg1 = var_1c
    eax_4 = &var_18
    var_34 = edi
    var_38 = esi
    var_3c = (var_18.d).b
else
    int32_t var_30 = arg3
    eax_4 = &arg_c
    var_34 = edi
    var_38 = esi
    var_3c = 1

int32_t** eax_6 = arg2
*eax_6 = *sub_4a6fe0(arg1, eax_4, var_3c, var_38, var_34)
eax_6[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
