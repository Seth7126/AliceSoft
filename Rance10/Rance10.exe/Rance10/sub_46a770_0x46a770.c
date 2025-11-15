// 函数: sub_46a770
// 地址: 0x46a770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cfa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char var_48 = arg1.b
void* ebx = arg2[4]
int32_t var_54 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0

if (ebx != 0xffffffff && sub_4036c0(&var_2c, ebx + 0x10, 1) != 0)
    char* eax_6 = &var_2c
    int32_t var_1c_1 = 0
    
    if (var_18 u>= 0x10)
        eax_6 = var_2c.d
    
    *eax_6 = 0

int32_t edi = 0

if (ebx != 0)
    do
        int32_t ecx_1 = arg2[5]
        char* eax_7
        
        if (ecx_1 u< 0x10)
            eax_7 = arg2
        else
            eax_7 = *arg2
        
        eax_7.b = eax_7[edi]
        
        if (eax_7.b == 0xa)
            int32_t var_68_5 = 2
            sub_407430(&var_2c, "\n", 2)
        else if (eax_7.b == 0x22)
            int32_t var_68_4 = 2
            sub_407430(&var_2c, "\"", 2)
        else if (eax_7.b == 0x5c)
            int32_t var_68_3 = 2
            sub_407430(&var_2c, "\\", 2)
        else
            int32_t* eax_8
            
            if (ecx_1 u< 0x10)
                eax_8 = arg2
            else
                eax_8 = *arg2
            
            eax_8.b = *(eax_8 + edi)
            sub_405500(&var_2c, 1, eax_8.b)
            int32_t ecx_3 = arg2[5]
            int32_t* eax_9
            
            if (ecx_3 u< 0x10)
                eax_9 = arg2
            else
                eax_9 = *arg2
            
            eax_9.b = *(eax_9 + edi)
            
            if (eax_9.b u< 0x81 || eax_9.b u> 0x9f)
                eax_9.b += 0x20
                
                if (eax_9.b u<= 0xf)
                    goto label_46a85a
            else
            label_46a85a:
                edi += 1
                int32_t* eax_10
                
                if (ecx_3 u< 0x10)
                    eax_10 = arg2
                else
                    eax_10 = *arg2
                
                eax_10.b = *(eax_10 + edi)
                sub_405500(&var_2c, 1, eax_10.b)
        
        edi += 1
    while (edi u< ebx)

char var_44
int32_t* eax_12 = sub_419600(&var_2c, U""%(*,)%", &var_44, &var_2c)
var_8_1.b = 1
sub_4176f0(eax_12.b, eax_12, arg1, &(*U"["""")[3])
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
