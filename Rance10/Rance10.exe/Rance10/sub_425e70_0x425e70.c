// 函数: sub_425e70
// 地址: 0x425e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7296c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = nullptr
int32_t eax_4 = *(arg1 + 8) - *(arg1 + 4)
char* ecx = nullptr
int32_t var_28 = 0
char* var_34 = nullptr
char* var_30 = nullptr
void* var_18 = nullptr
void* var_2c = nullptr
int32_t var_8_1 = 0
int32_t* arg_8
int32_t* esi = arg_8
int32_t edi = esi[1]

for (int32_t* i = *esi; i != edi; i = &i[1])
    char* edx_1 = *i
    
    if (edx_1 s>= 0 && eax_4 s> edx_1)
        void* eax_6
        eax_6.b = *(edx_1 + *(arg1 + 4))
        eax_6.b ^= 0xa4
        char var_11_1 = eax_6.b
        arg_8:3.b = eax_6.b
        
        if (&arg_8:3 u>= ecx || ebx u> &arg_8:3)
            if (ecx == var_18)
                sub_405a20(&var_34, 1)
                ecx = var_30
                ebx = var_34
                var_18 = var_2c
                eax_6.b = var_11_1
            
            if (ecx != 0)
                *ecx = eax_6.b
        else
            eax_6 = &arg_8:3 - ebx
            
            if (ecx == var_18)
                sub_405a20(&var_34, 1)
                ecx = var_30
                ebx = var_34
                var_18 = var_2c
            
            if (ecx != 0)
                eax_6.b = *(ebx + eax_6)
                *ecx = eax_6.b
        
        ecx = &ecx[1]
        var_30 = ecx

arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0

if (ebx != ecx)
    sub_403490(arg2, ebx, ecx - ebx)

if (ebx != 0)
    sub_403160(ebx, var_18 - ebx, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
