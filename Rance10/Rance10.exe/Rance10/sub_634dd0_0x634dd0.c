// 函数: sub_634dd0
// 地址: 0x634dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745a1c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_8_1 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
sub_632bc0(&var_30, 1, arg3)
var_8_1.b = 1
int16_t* ecx_1 = &var_30

if (var_1c u>= 8)
    ecx_1 = var_30.d

int16_t* ecx_2 = &var_30

if (var_1c u>= 8)
    ecx_2 = var_30.d

void* var_60
int32_t* eax_5 = sub_636330(arg4, &var_60, ecx_2, &ecx_1[var_20])

if (&var_30 != eax_5)
    if (var_1c u>= 8)
        sub_403160(var_30.d, var_1c + 1, 2)
    
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_631d30(&var_30, eax_5)

var_8_1.b = 1
int32_t var_4c

if (var_4c u>= 8)
    sub_403160(var_60, var_4c + 1, 2)

int32_t* ebx

if (esi == 0)
label_634f85:
    ebx.b = 0
else
    while (true)
        ebx = nullptr
        
        if (esi[2] u> 0)
            while (true)
                sub_6317b0(&var_48, esi[3] + (ebx << 1), *esi)
                int16_t* ecx_6 = &var_48
                
                if (var_34 u>= 8)
                    ecx_6 = var_48.d
                
                char* ecx_7 = &var_48
                
                if (var_34 u>= 8)
                    ecx_7 = var_48.d
                
                int32_t* eax_14 = sub_636330(arg4, &var_60, ecx_7, &ecx_6[var_38])
                
                if (&var_48 != eax_14)
                    if (var_34 u>= 8)
                        sub_403160(var_48.d, var_34 + 1, 2)
                    
                    var_34 = 7
                    var_38 = 0
                    var_48 = 0
                    sub_631d30(&var_48, eax_14)
                
                var_8_1.b = 1
                
                if (var_4c u>= 8)
                    sub_403160(var_60, var_4c + 1, 2)
                
                if (sub_636780(&var_48, &var_30) == 0)
                    ebx.b = 1
                    break
                
                ebx += *esi
                
                if (ebx u>= esi[2])
                    goto label_634f7a
            
            break
        
    label_634f7a:
        esi = esi[4]
        
        if (esi == 0)
            goto label_634f85

if (var_1c u>= 8)
    sub_403160(var_30.d, var_1c + 1, 2)

int32_t var_1c_1 = 7
int32_t var_20_2 = 0
var_30 = 0

if (var_34 u>= 8)
    sub_403160(var_48.d, var_34 + 1, 2)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
