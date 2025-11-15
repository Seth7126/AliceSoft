// 函数: sub_55a920
// 地址: 0x55a920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b299
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg1
int32_t var_38 = 0
int32_t* var_3c = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
int32_t var_38_1 = 1
int32_t* i

if (arg2[5] u< 0x10)
    i = arg2
else
    i = *arg2

void* ecx = arg2[4]
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, arg1[2])
void* ebx = ecx + i
int32_t edx_1 = edx s>> 2
int32_t eax_6

if ((edx_1 u>> 0x1f) + edx_1 u< ecx)
    if (ecx u> 0xaaaaaaa)
        sub_6d0927("vector<T> too long")
        noreturn
    
    eax_6, ecx = sub_4173f0(arg1, ecx)

for (; i u< ebx; i += eax_6)
    ecx.b = *i
    char var_2c
    
    if ((ecx.b u< 0x81 || ecx.b u> 0x9f) && (ecx + 0x20).b u> 0xf)
        if (ecx.b != 0xa)
            char var_30 = ecx.b
            char var_2f = 0
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            void* eax_9
            
            if (ecx.b != 0)
                char* eax_10 = &var_30
                
                do
                    ecx.b = *eax_10
                    eax_10 = &eax_10[1]
                while (ecx.b != 0)
                
                eax_9 = eax_10 - &var_2f
            else
                eax_9 = nullptr
            
            sub_403490(&var_2c, &var_30, eax_9)
            int32_t var_8_3 = 2
            sub_431bd0(arg1, &var_2c)
            var_8_3.b = 0
            
            if (var_18_2 u>= 0x10)
                sub_403160(var_2c.d, var_18_2 + 1, 1)
        
        eax_6 = 1
    else
        eax_6.b = *(i + 1)
        var_34.b = ecx.b
        var_34:1.b = eax_6.b
        var_34:2.b = 0
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        void* ecx_2
        
        if (ecx.b != 0)
            char* ecx_3 = &var_34
            
            do
                eax_6.b = *ecx_3
                ecx_3 = &ecx_3[1]
            while (eax_6.b != 0)
            
            ecx_2 = ecx_3 - &var_34:1
        else
            ecx_2 = nullptr
        
        sub_403490(&var_2c, &var_34, ecx_2)
        int32_t var_8_2 = 1
        sub_431bd0(arg1, &var_2c)
        var_8_2.b = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        eax_6 = 2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
