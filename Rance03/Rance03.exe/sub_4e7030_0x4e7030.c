// 函数: sub_4e7030
// 地址: 0x4e7030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
void** var_3c
__builtin_memset(&var_3c, 0, 0x30)
var_4.b = 3
int32_t* var_30
int32_t* var_24
int32_t* result_1
sub_4e3640(arg1 + 0x14, &result_1, &var_24, &var_30, &var_3c)
int32_t* result_2 = result_1
int32_t ebx = 0
int32_t* result_3 = result_2
int32_t var_14
uint32_t ebp_3 = (var_14 - result_2 + 3) u>> 2

if (result_2 u> var_14)
    ebp_3 = 0

if (ebp_3 != 0)
    do
        sub_4e72c0(arg1, *result_3)
        ebx += 1
        result_3 = &result_3[1]
    while (ebx != ebp_3)

int32_t* ecx_2 = var_30
int32_t ebx_1 = 0
int32_t* esi = ecx_2
int32_t var_2c
uint32_t ebp_7 = (var_2c - ecx_2 + 3) u>> 2

if (ecx_2 u> var_2c)
    ebp_7 = 0

if (ebp_7 != 0)
    do
        sub_4e7300(arg1, *esi)
        ebx_1 += 1
        esi = &esi[1]
    while (ebx_1 != ebp_7)

void** ecx_4 = var_3c
int32_t ebx_2 = 0
void** esi_1 = ecx_4
int32_t var_38
uint32_t ebp_11 = (var_38 - ecx_4 + 3) u>> 2

if (ecx_4 u> var_38)
    ebp_11 = 0

if (ebp_11 != 0)
    do
        sub_4e7320(arg1, *esi_1)
        ebx_2 += 1
        esi_1 = &esi_1[1]
    while (ebx_2 != ebp_11)

int32_t* ecx_6 = var_24
int32_t ebx_3 = 0
int32_t* esi_2 = ecx_6
int32_t var_20
uint32_t ebp_15 = (var_20 - ecx_6 + 3) u>> 2

if (ecx_6 u> var_20)
    ebp_15 = 0

if (ebp_15 != 0)
    do
        sub_4e7350(arg1, *esi_2)
        ebx_3 += 1
        esi_2 = &esi_2[1]
    while (ebx_3 != ebp_15)

void** eax_3 = var_3c

if (eax_3 != 0)
    j__free(eax_3)

int32_t* eax_4 = var_30

if (eax_4 != 0)
    j__free(eax_4)

int32_t* eax_5 = var_24

if (eax_5 != 0)
    j__free(eax_5)

int32_t* result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
