// 函数: sub_5c0b30
// 地址: 0x5c0b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fc89
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_74
sub_5c1100(arg1, &var_74, 7)
int32_t var_8_1 = 0
int32_t var_64
int32_t* ebx

if (var_64 != 0)
    char var_5c
    int32_t* eax_3 = sub_404f20(&var_5c, arg2)
    var_8_1.b = 1
    int32_t* var_44
    sub_417750(eax_3, eax_3, &var_44, &var_74)
    var_8_1.b = 3
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_a8_2 = sub_403490(&var_2c, 0x75d563, nullptr)
    var_8_1.b = 4
    void var_94
    Concurrency::details::_SyncOriginator<uint32_t>::~_SyncOriginator<uint32_t>(&arg1[0xd], 
        sub_57ea50(arg3, &var_94, &var_44, &var_2c))
    var_8_1.b = 5
    int32_t* var_90
    int32_t* esi_1 = var_90
    
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
    
    var_8_1.b = 3
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    char* var_30
    
    if (arg1[0xd] != 0)
        ebx.b = 1
    else
        int32_t* eax_12 = &var_44
        
        if (var_30 u>= 0x10)
            eax_12 = var_44
        
        var_90 = eax_12
        void* var_8c
        sub_403360(&var_8c, 0x76a1a4)
        var_8_1.b = 6
        var_8_1.b = 7
        sub_5e01e0(sub_409240(&var_90, &var_8c, &var_2c, &var_90))
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_78
        
        if (var_78 u>= 0x10)
            sub_403160(var_8c, var_78 + 1, 1)
        
        ebx.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, &var_30[1], 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44.b = 0
else
    ebx.b = 1

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74, var_60 + 1, 1)

char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
