// 函数: sub_42c390
// 地址: 0x42c390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t var_58 = 0
int32_t var_1c = 0xf
char var_30 = 0
int32_t var_8_1 = 0
char var_4c

while (*(esi + 0x10) u> *(esi + 8))
    arg1.b = **(esi + 8)
    
    if (arg1.b u>= 0x81 && arg1.b u<= 0x9f)
        break
    
    char* eax_4
    eax_4.b = arg1.b
    eax_4.b += 0x20
    
    if (eax_4.b u<= 0xf)
        break
    
    if (arg1.b == 0xd)
        break
    
    if (arg1.b == 0xa)
        break
    
    char var_6c_2
    
    if (arg1.b != 0x2e)
        eax_4.b = arg1.b
        eax_4.b -= 0x30
        
        if (eax_4.b u> 9)
            break
        
        var_6c_2 = arg1.b
    else
        int32_t var_6c_1 = 1
        var_4c = arg1.b
        void* eax_5
        eax_5, arg1 = sub_42cb30(&var_30, &var_4c, arg1)
        
        if (eax_5 != 0xffffffff)
            break
        
        char* eax_6
        eax_6.b = **(esi + 8)
        var_6c_2 = eax_6.b
    
    arg1 = sub_405500(&var_30, 1, var_6c_2)
    *(esi + 8) += 1

if (*(esi + 0x10) u<= *(esi + 8) || 0 == 0)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403490(&var_48, &(*U"'(.;),{}[]0-=%")[0xa], 1)
    var_8_1.b = 1
    *arg2 = &advengine::CToken::`vftable'
    arg2[1] = 2
    arg2[7] = 0xf
    arg2[6] = 0
    arg2[2].b = 0
    sub_403590(&arg2[2], &var_48, 0, 0xffffffff)
    arg2[8] = 0
    arg2[9] = 0
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, var_34_1 + 1, 1)
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
label_42c5cd:
    
    if (var_1c u>= 0x10)
        int32_t var_6c_6 = 1
        sub_403160(var_30.d, var_1c + 1, 1)
else
    int32_t var_6c_3 = 1
    var_4c = 0x2e
    void* eax_8 = sub_42cb30(&var_30, &var_4c, arg1)
    
    if (eax_8 != 0xffffffff)
        char* eax_9 = *(esi + 8)
        
        if (*eax_9 == 0x66)
            *(esi + 0x14) = eax_9
            *(esi + 8) = &eax_9[1]
            
            if (sub_42c6d0(esi) == 0)
                *(esi + 8) = *(esi + 0x14)
                *(esi + 0x14) = 0
            
            *(esi + 0x14) = 0
        
        *arg2 = &advengine::CToken::`vftable'
        arg2[1] = 3
        arg2[7] = 0xf
        arg2[6] = 0
        arg2[2].b = 0
        sub_403590(&arg2[2], &var_30, 0, 0xffffffff)
        arg2[8] = 0
        arg2[9] = 0
        goto label_42c5cd
    
    *arg2 = &advengine::CToken::`vftable'
    arg2[1] = 2
    arg2[7] = 0xf
    arg2[6] = 0
    arg2[2].b = 0
    sub_403590(&arg2[2], &var_30, 0, eax_8)
    arg2[8] = 0
    arg2[9] = 0
    
    if (var_1c u>= 0x10)
        int32_t var_6c_5 = 1
        sub_403160(var_30.d, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
