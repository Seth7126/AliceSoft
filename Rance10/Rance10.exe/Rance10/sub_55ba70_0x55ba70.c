// 函数: sub_55ba70
// 地址: 0x55ba70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b463
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_38
sub_55bee0(&var_38, arg1 + 0xb4)
int32_t var_8_1 = 0
void var_2c
sub_55bee0(&var_2c, arg1 + 0xc0)
var_8_1.b = 1
void var_20
sub_55bee0(&var_20, arg1 + 0xcc)
int32_t var_8_2 = 2
void* ebx = &var_38
int32_t result

while (true)
    int32_t** esi_1 = *ebx
    
    if (esi_1 != *(ebx + 4))
        while (true)
            char eax_6
            eax_6, ebx = sub_5505a0(*esi_1, arg2, arg3, arg4)
            
            if (eax_6 != 0)
                break
            
            esi_1 = 4
        
        int32_t var_8_4 = 0xffffffff
        `eh vector vbase constructor iterator'(&var_38, 0xc, 3, sub_4043e0)
        result.b = 1
        break
    
    ebx += 0xc
    
    if (ebx == &var_14)
        int32_t var_8_3 = 0xffffffff
        `eh vector vbase constructor iterator'(&var_38, 0xc, 3, sub_4043e0)
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
