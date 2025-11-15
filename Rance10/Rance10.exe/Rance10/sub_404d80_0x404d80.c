// 函数: sub_404d80
// 地址: 0x404d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg1
int32_t esi = 0xffffffff
int32_t ecx = 0
int32_t var_38 = 0
void* eax_8

if (arg2[4] s> 0)
    int32_t edi_1 = arg2[5]
    
    do
        char* eax_4
        
        if (edi_1 u< 0x10)
            eax_4 = arg2
        else
            eax_4 = *arg2
        
        eax_4.b = eax_4[ecx]
        int32_t eax_7
        
        if (eax_4.b u< 0x81 || eax_4.b u> 0x9f)
            eax_4.b += 0x20
            
            if (eax_4.b u> 0xf)
                int32_t* eax_5
                
                if (edi_1 u< 0x10)
                    eax_5 = arg2
                else
                    eax_5 = *arg2
                
                if (*(eax_5 + ecx) == 0x2e)
                    esi = ecx
                
                int32_t* eax_6
                
                if (edi_1 u< 0x10)
                    eax_6 = arg2
                else
                    eax_6 = *arg2
                
                eax_7 = 1
                
                if (*(eax_6 + ecx) == 0x5c)
                    esi = 0xffffffff
            else
                eax_7 = 2
        else
            eax_7 = 2
        
        ecx += eax_7
        eax_8 = arg2[4]
    while (ecx s< eax_8)

if (arg2[4] s<= 0 || esi == 0xffffffff)
    arg1[5] = 0xf
    arg1[4] = 0
    *arg1 = 0
else
    int32_t var_8_1 = 0
    void* var_2c
    sub_4051e0(arg1, sub_405480(arg2, &var_2c, esi + 1, eax_8))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
