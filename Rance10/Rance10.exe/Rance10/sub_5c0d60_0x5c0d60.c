// 函数: sub_5c0d60
// 地址: 0x5c0d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fd1c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_a4
sub_5c1100(arg1, &var_a4, 8)
int32_t var_8_1 = 0
int32_t var_94
void* ebx

if (var_94 != 0)
    char var_2c
    int32_t* eax_3 = sub_404f20(&var_2c, arg2)
    var_8_1.b = 1
    int32_t* var_5c
    sub_417750(eax_3, eax_3, &var_5c, &var_a4)
    var_8_1.b = 3
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    char var_8c
    sub_5c1100(arg1, &var_8c, 0xb)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    var_8_1.b = 5
    int32_t var_7c
    void* var_74
    
    if (var_7c != 0)
        char* eax_6 = sub_404f20(&var_74, arg2)
        var_8_1.b = 6
        sub_409670(&var_44, sub_417750(eax_6, eax_6, &var_2c, &var_8c))
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        var_8_1.b = 5
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74, var_60 + 1, 1)
    
    void var_ac
    Concurrency::details::_SyncOriginator<uint32_t>::~_SyncOriginator<uint32_t>(arg1 + 0x3c, 
        sub_57ed90(arg3, &var_ac, &var_5c, &var_44))
    var_8_1.b = 7
    int32_t* var_a8
    int32_t* esi_1 = var_a8
    
    if (esi_1 != 0)
        bool cond:0_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:0_1))
            (**esi_1)(eax_2)
            int32_t edi_1 = esi_1[2]
            esi_1[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi_1 + 4))()
    
    var_8_1.b = 5
    char* var_48
    
    if (*(arg1 + 0x3c) != 0)
        ebx.b = 1
    else
        int32_t* eax_16 = &var_5c
        void** ecx_10 = &var_74
        char* eax_19
        
        if (var_34_1 == 0)
            if (var_48 u>= 0x10)
                eax_16 = var_5c
            
            var_a8 = eax_16
            sub_403360(ecx_10, 0x76a1f4)
            var_8_1.b = 0xa
            eax_19 = sub_409240(&var_a8, &var_74, &var_2c, &var_a8)
            var_8_1.b = 0xb
        else
            if (var_48 u>= 0x10)
                eax_16 = var_5c
            
            var_a8 = eax_16
            sub_403360(ecx_10, 0x76a16c)
            var_8_1.b = 8
            char* eax_17 = &var_44
            
            if (var_30_1 u>= 0x10)
                eax_17 = var_44.d
            
            eax_19 = sub_461a30(&var_a8, &var_74, &var_2c, &var_a8, eax_17)
            var_8_1.b = 9
        
        sub_5e01e0(eax_19)
        sub_403320(&var_2c)
        sub_403320(&var_74)
        ebx.b = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c.d, var_78 + 1, 1)
    
    int32_t var_78_1 = 0xf
    int32_t var_7c_1 = 0
    var_8c = 0
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, &var_48[1], 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c.b = 0
else
    ebx.b = 1

int32_t var_90

if (var_90 u>= 0x10)
    sub_403160(var_a4, var_90 + 1, 1)

char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
