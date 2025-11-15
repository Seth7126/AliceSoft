// 函数: sub_429b00
// 地址: 0x429b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729b90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
int32_t* edx = arg1
int32_t* var_20 = edx
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
int32_t* ecx = *edx
void** edi = ecx
int32_t* var_28 = ecx
char var_1c = 1
void** ebx = ecx[1]
void** var_18
int32_t* arg_c

if (*(ebx + 0xd) == 0)
    int32_t* edi_1 = arg_c
    int32_t esi_1 = edi_1[1]
    int32_t* edi_2 = *edi_1
    void** var_24_1
    
    do
        var_18.b = 0
        void** var_3c_1 = var_18
        var_24_1 = ebx
        int32_t* var_40_1 = ecx
        eax_3, ecx = sub_42a380(eax_3, esi_1, edi_2, ebx[4], ebx[5])
        var_1c = eax_3.b
        
        if (eax_3.b == 0)
            ebx = ebx[2]
        else
            ebx = *ebx
    while (*(ebx + 0xd) == 0)
    
    edi = var_24_1
    ecx = var_28
    edx = var_20

void** esi_2 = edi
var_18 = esi_2

if (eax_3.b == 0)
    goto label_429bd7

char var_48_2
void** var_44_2
int32_t* var_40_2
int32_t* ecx_2

if (edi != *ecx)
    ecx = sub_429da0(&var_18)
    esi_2 = var_18
label_429bd7:
    int32_t* eax_6 = arg_c
    int32_t var_3c_3 = 0
    int32_t* var_40_3 = ecx
    char eax_7
    int32_t* ecx_8
    eax_7, ecx_8 = sub_42a380(eax_6, esi_2[5], esi_2[4], *eax_6, eax_6[1])
    
    if (eax_7 == 0)
        sub_428e90(arg3 + 0x10)
        sub_403160(arg3, 1, 0x28)
        *arg2 = esi_2
        arg2[1].b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    void* var_3c_4 = arg3
    var_40_2 = ecx_8
    ecx_2 = var_20
    var_44_2 = edi
    var_48_2 = var_1c
else
    void* var_3c_2 = arg3
    var_40_2 = ecx
    var_44_2 = edi
    var_48_2 = 1
    ecx_2 = edx

*arg2 = *sub_429e00(ecx_2, &arg_c, var_48_2, var_44_2, var_40_2)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
