// 函数: sub_4f10c0
// 地址: 0x4f10c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735fc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp

if ((*(**(arg1 + 0x74) + 0xc))(__security_cookie ^ &__saved_ebp) == 0x10)
    int32_t eax_8 = (*(**(*(*(arg1 + 0x74) + 0x44) + (arg3 << 2) + 0x7c) + 0x50))(arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

int32_t* var_28
__builtin_memset(&var_28, 0, 0x18)
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_1c
int32_t eax_10 = (*(**(arg1 + 0x74) + 0x3c))(&var_28, &var_1c, 0)
int32_t* esi_1 = var_28
arg3 = 0
int32_t var_24
uint32_t edi_3 = (var_24 - esi_1 + 3) u>> 2

if (esi_1 u> var_24)
    edi_3 = 0

if (edi_3 != 0)
    do
        (*(**(*(**esi_1 + 0x44) + 0x80) + 0x50))(arg2)
        (*(**(*(**esi_1 + 0x44) + 0x84) + 0x50))(arg2)
        (*(**(*(**esi_1 + 0x44) + 0x88) + 0x50))(arg2)
        esi_1 = &esi_1[1]
        eax_10 = arg3 + 1
        arg3 = eax_10
    while (eax_10 != edi_3)
    
    esi_1 = var_28

void* ecx_9 = var_1c

if (ecx_9 != 0)
    int32_t var_14
    eax_10 = sub_403160(ecx_9, (var_14 - ecx_9) s>> 2, 4)
    esi_1 = var_28
    var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0

int32_t var_20

if (esi_1 != 0)
    eax_10 = sub_403160(esi_1, (var_20 - esi_1) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
