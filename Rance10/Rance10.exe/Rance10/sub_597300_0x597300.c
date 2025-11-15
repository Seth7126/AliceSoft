// 函数: sub_597300
// 地址: 0x597300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_b8 = 0xffffffff
int32_t (* var_bc)(void* arg1) = sub_73e1c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_dc = arg3
int32_t* edi = arg5
int32_t* var_c8 = edi
int32_t var_e0 = 0
int32_t var_a0 = 0xf
int32_t var_a4 = 0
var_b4 = 0
sub_403490(&var_b4, ".bmp", 4)
int32_t var_b8_1 = 0
int32_t var_88 = 0xf
int32_t var_8c = 0
char var_9c = 0
sub_403490(&var_9c, ".tga", 4)
var_b8_1.b = 1
int32_t var_70 = 0xf
int32_t var_74 = 0
char var_84 = 0
sub_403490(&var_84, ".png", 4)
int32_t var_b8_2 = 2
char* esi = &var_b4

while (true)
    char var_68
    int32_t* eax_4 = sub_404f20(&var_68, arg2)
    var_b8_2.b = 3
    char var_50
    int32_t* eax_5 = sub_417750(eax_4, eax_4, &var_50, arg4)
    var_b8_2.b = 4
    void* var_20
    sub_417750(eax_5, eax_5, &var_20, esi)
    int32_t var_3c
    
    if (var_3c u>= 0x10)
        sub_403160(var_50.d, var_3c + 1, 1)
    
    var_3c = 0xf
    int32_t var_40_1 = 0
    var_50 = 0
    var_b8_2.b = 7
    int32_t var_54
    
    if (var_54 u>= 0x10)
        sub_403160(var_68.d, var_54 + 1, 1)
    
    void* ecx_6 = edi[5]
    var_54 = 0xf
    int32_t var_58_1 = 0
    var_68 = 0
    int32_t var_c
    
    if (sub_5d0440(ecx_6, &var_20) != 0)
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        char var_38 = 0
        int32_t var_f4_3 = sub_403490(&var_38, 0x75d55a, nullptr)
        var_b8_2.b = 8
        int32_t var_d0
        sub_57ea50(edi, &var_d0, &var_20, &var_38)
        
        if (var_24_1 u>= 0x10)
            sub_403160(var_38.d, var_24_1 + 1, 1)
        
        int32_t ecx_10 = var_d0
        int32_t eax_13
        eax_13.b = ecx_10 == 0
        eax_13.b ^= 1
        int32_t* var_cc
        
        if (eax_13.b != 0)
            *arg3 = ecx_10
            arg3[1] = var_cc
            var_d0 = 0
            int32_t var_cc_1 = 0
            
            if (var_c u>= 0x10)
                sub_403160(var_20, var_c + 1, 1)
            
            int32_t var_c_1 = 0xf
            int32_t var_10_1 = 0
            var_20.b = 0
            int32_t var_b8_4 = 0xa
            break
        
        var_b8_2.b = 0xb
        
        if (var_cc != 0)
            int32_t eax_15 = eax_13 | 0xffffffff
            bool cond:0_1 = var_cc[1] != neg.d(eax_15)
            var_cc[1]
            var_cc[1] += eax_15
            
            if (not(cond:0_1))
                (**var_cc)(eax_2)
                bool cond:1_1 = var_cc[2] != 1
                var_cc[2]
                var_cc[2] -= 1
                
                if (not(cond:1_1))
                    (*(*var_cc + 4))()
        
        var_b8_2.b = 2
        
        if (var_c u>= 0x10)
            sub_403160(var_20, var_c + 1, 1)
        
        edi = var_c8
    else
        var_b8_2.b = 2
        
        if (var_c u>= 0x10)
            sub_403160(var_20, var_c + 1, 1)
    esi = &esi[0x18]
    void var_6c
    
    if (esi == &var_6c)
        *arg3 = 0
        arg3[1] = 0
        int32_t var_b8_3 = 0xc
        break

`eh vector vbase constructor iterator'(&var_b4, 0x18, 3, sub_403320)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_b4)
return arg3
