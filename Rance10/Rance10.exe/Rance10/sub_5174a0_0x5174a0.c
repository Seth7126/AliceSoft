// 函数: sub_5174a0
// 地址: 0x5174a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738998
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
char* eax_4 = sub_4ee1f0(*(arg1 + 0x50), &var_2c, 1)
int32_t var_8_1 = 0
bool cond:0 = *(eax_4 + 0x14) u< 0x10
void* eax_5 = *(arg1 + 0x44)
void* var_30 = eax_5
int32_t* var_38

if (cond:0)
    var_38 = eax_4
else
    var_38 = *eax_4

void** var_34

if (*(eax_5 + 0x38) u< 0x10)
    var_34 = eax_5 + 0x24
else
    var_34 = *(eax_5 + 0x24)

int32_t ecx_1 = *(eax_4 + 0x10)
int32_t eax_8 = ecx_1

if (*(eax_5 + 0x34) u< ecx_1)
    eax_8 = *(eax_5 + 0x34)

int32_t eax_9 = sub_406ac0(eax_8, var_38, var_34, eax_8)
int32_t eax_10
int32_t ecx_3

if (eax_9 == 0)
    eax_10 = *(eax_4 + 0x10)
    ecx_3 = *(eax_5 + 0x34)

if (eax_9 != 0 || ecx_3 u< eax_10 || ecx_3 u> eax_10)
    if (eax_5 + 0x24 != eax_4)
        sub_403590(eax_5 + 0x24, eax_4, 0, 0xffffffff)
    
    if (*(eax_4 + 0x10) != 0)
        sub_555d90(var_30, eax_4, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

char* eax_13 = sub_4ee1f0(*(arg1 + 0x50), &var_2c, 2)
int32_t var_8_3 = 1
sub_5561a0(*(arg1 + 0x44), eax_13, 2)
int32_t var_8_4 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

char* eax_16 = sub_4ee1f0(*(arg1 + 0x50), &var_2c, 3)
int32_t var_8_5 = 2
sub_5561a0(*(arg1 + 0x44), eax_16, 3)
int32_t var_8_6 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

void* ecx_12 = *(arg1 + 0x50)
void* eax_19 = *(ecx_12 + 0x40)
var_30 = eax_19

if (eax_19 s> 0)
    ecx_12 = sub_42eb70(*(ecx_12 + 0x78) + 0x14, &var_34, &var_30)

int32_t edi_1 = 0
int32_t* esi_2 = *(arg1 + 0x44) + 0x7c
void* ecx_15 = (sbb.d(ecx_12, ecx_12, &esi_2[4] u< esi_2) & 0xfffffffc) + 4

if (esi_2 u<= &esi_2[4])
    void* ebx_1 = ecx_15
    
    do
        ecx_15 = (*(**esi_2 + 0x38))(arg2)
        edi_1 += 1
        esi_2 = &esi_2[1]
    while (edi_1 != ebx_1)

int32_t var_54_3 = arg5
int32_t result = sub_556270(*(arg1 + 0x44), ecx_15, *(arg1 + 0x50), arg3, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
