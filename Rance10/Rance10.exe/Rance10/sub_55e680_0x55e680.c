// 函数: sub_55e680
// 地址: 0x55e680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b6b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_8_1 = 0
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
var_8_1.b = 1
char var_31 = 0x20
sub_4263a0(&var_40, &var_31)
void** ecx_1 = arg1
int32_t esi = ecx_1[5]
void** edx

if (esi u< 0x10)
    edx = ecx_1
else
    edx = *ecx_1

void* eax_5 = ecx_1[4] - 1 + edx

if (esi u>= 0x10)
    ecx_1 = *ecx_1

int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0

if (ecx_1 + 2 != eax_5)
    sub_403490(&var_30, ecx_1 + 2, eax_5 - (ecx_1 + 2))

var_8_1.b = 2
sub_55f0d0(&var_4c, &var_30, &var_40)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

void* esi_1 = var_4c
int32_t result

if (var_48 - esi_1 - 0x30 u>= 0x18)
    result = 7
else if (sub_407560(esi_1 + 0x18, 0x767938) == 0)
    if (sub_407560(esi_1 + 0x18, 0x767940) == 0)
        if (sub_407560(esi_1 + 0x18, 0x767948) == 0)
            if (sub_407560(esi_1 + 0x18, 0x767950) == 0)
                if (sub_407560(esi_1 + 0x18, 0x767958) == 0)
                    if (sub_407560(esi_1 + 0x18, 0x767960) == 0)
                        if (sub_407560(esi_1 + 0x18, 0x767968) != 0)
                            result = 7
                        else if (sub_407560(esi_1 + 0x18, 0x767970) == 0)
                            result = 9
                            
                            if (sub_407560(esi_1 + 0x18, 0x767978) == 0)
                                result = 7
                        else
                            result = 8
                    else
                        result = 6
                else
                    result = 5
            else
                result = 4
        else
            result = 3
    else
        result = 2
else
    result = 1

void* eax_21 = var_40

if (eax_21 != 0)
    sub_403160(eax_21, var_38 - eax_21, 1)

sub_417070(&var_4c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
