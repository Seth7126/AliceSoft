// 函数: sub_642c00
// 地址: 0x642c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* edx = arg1
int32_t* var_1c = edx
int32_t var_8_1 = 0
char eax_3 = 1
int32_t* ecx = *edx
int32_t** edi = ecx
void** arg_c
void** ebx = arg_c
char var_18 = 1
void** esi = ecx[1]

if (*(esi + 0xd) == 0)
    void* ecx_1 = &ebx[1]
    
    do
        arg_c = esi
        
        if (sub_643940(ecx_1, &esi[5]) != 0)
            esi = *esi
            eax_3 = 1
        else if (sub_6439e0(&ebx[1], &esi[5]) != 0)
            esi = esi[2]
            eax_3 = 0
        else if (sub_413c90(&ebx[0xe], &esi[0x12]) == 0)
            esi = esi[2]
            eax_3 = 0
        else
            esi = *esi
            eax_3 = 1
        
        ecx_1 = &ebx[1]
        var_18 = eax_3
    while (*(esi + 0xd) == 0)
    
    edi = arg_c
    edx = var_1c

int32_t** esi_1 = edi
arg_c = esi_1

if (eax_3 == 0)
    goto label_642cee

char var_40
int32_t** var_3c
void** var_38
int32_t* ecx_4

if (edi != *ecx)
    sub_429da0(&arg_c)
    esi_1 = arg_c
label_642cee:
    
    if (sub_643940(&esi_1[5], &ebx[1]) == 0)
        char eax_9 = sub_6439e0(&esi_1[5], &ebx[1])
        char eax_10
        
        if (eax_9 == 0)
            eax_10 = sub_413c90(&esi_1[0x12], &ebx[0xe])
        
        if (eax_9 != 0 || eax_10 == 0)
            int32_t*** eax_11 = arg2
            *eax_11 = esi_1
            eax_11[1].b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
    
    int32_t var_34_6 = arg3
    ecx_4 = var_1c
    var_38 = ebx
    var_3c = edi
    var_40 = var_18
else
    int32_t var_34_3 = arg3
    ecx_4 = edx
    var_38 = ebx
    var_3c = edi
    var_40 = 1

*arg2 = *sub_642e40(ecx_4, &arg_c, var_40, var_3c, var_38)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
