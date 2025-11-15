// 函数: sub_55b790
// 地址: 0x55b790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b383
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_38
sub_55bee0(&var_38, arg1 + 0xcc)
int32_t var_8_1 = 0
void var_2c
sub_55bee0(&var_2c, arg1 + 0xb4)
var_8_1.b = 1
void var_20
sub_55bee0(&var_20, arg1 + 0xc0)
int32_t var_8_2 = 2
void* i = &var_38

do
    int32_t* j = *i
    
    for (int32_t edi_1 = *(i + 4); j != edi_1; j = &j[1])
        void* eax_7 = **j
        
        if (eax_7 != 0)
            void* ecx_3
            ecx_3.b = *(eax_7 + 0x18)
            
            if (ecx_3.b != 0 && *(eax_7 + 0x118) != 0 && *(eax_7 + 0xc) s> 0)
                void* edx_1 = *(data_7fcb4c + 0x18)
                
                if (edx_1 != 0)
                    void* var_3c = eax_7
                    *(eax_7 + 4) += 1
                    sub_42ccf0(edx_1 + 0x38, &var_3c)
    
    i += 0xc
while (i != &var_14)

int32_t var_8_3 = 0xffffffff
int32_t result = `eh vector vbase constructor iterator'(&var_38, 0xc, 3, sub_4043e0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
