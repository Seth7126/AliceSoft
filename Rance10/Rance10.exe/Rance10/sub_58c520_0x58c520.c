// 函数: sub_58c520
// 地址: 0x58c520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73daee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_56ff90(*(*arg1 + 4))
void* eax_4 = *arg1
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *arg1
*eax_5 = eax_5
void* eax_6 = *arg1
int32_t var_8_2 = 0xffffffff
char* arg_4
char* edi = arg_4
*(eax_6 + 8) = eax_6
arg1[1] = 0
int32_t* edi_1 = *(edi + 0x48)
void* i = *edi_1
void* i_1 = i

for (; i != edi_1; i = i_1)
    int32_t* ebx_1 = i + 0x10
    
    if (*(i + 0x14) == 0)
    label_58c65b:
        i.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return i
    
    sub_58c470(&arg_4)
    int32_t var_8_3 = 1
    char* esi_1 = arg_4
    
    if (sub_58c020(esi_1, ebx_1[1], arg2).b == 0)
        if (esi_1 != 0)
            sub_570280(esi_1)
            int32_t var_38_5 = 0x58
            operator new(esi_1)
        
        goto label_58c65b
    
    void* var_20
    sub_58c850(arg1, &var_20, ebx_1)
    
    if (var_20 + 0x14 != &arg_4)
        void* ebx_2 = *(var_20 + 0x14)
        char* eax_7 = esi_1
        esi_1 = nullptr
        *(var_20 + 0x14) = eax_7
        arg_4 = nullptr
        
        if (ebx_2 != 0)
            sub_570280(ebx_2)
            int32_t var_38_3 = 0x58
            operator new(ebx_2)
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_1 != 0)
        sub_570280(esi_1)
        int32_t var_38_4 = 0x58
        operator new(esi_1)
    
    sub_429080(&i_1)

i.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return i
