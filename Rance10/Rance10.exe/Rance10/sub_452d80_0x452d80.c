// 函数: sub_452d80
// 地址: 0x452d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b4a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_7fcb54
void* var_60 = eax_3
char* var_6c = nullptr
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_8_1 = 0
int32_t var_5c
void* result = __vcasan::DumpThisThreadExceptionFilter(eax_3, &var_6c, &var_5c)
char* edi = var_6c
void* ebx

if (result.b != 0)
    struct fileimage::CFileImageMaker::VTable* const var_58 = &fileimage::CFileImageMaker::`vftable'
    void* var_54 = nullptr
    char* var_50_1 = nullptr
    int32_t var_4c_1 = 0
    var_8_1.b = 1
    int32_t var_18_1 = 0xf
    void* var_1c_1 = nullptr
    char var_2c = 0
    sub_403490(&var_2c, "CSD", 3)
    var_8_1.b = 2
    char* esi_1 = &var_2c
    char* edx_1 = &var_2c
    
    if (var_18_1 u>= 0x10)
        esi_1 = var_2c.d
    
    if (var_18_1 u>= 0x10)
        edx_1 = var_2c.d
    
    int32_t var_84_1 = 0.d
    sub_6ca200(&var_54, var_50_1, edx_1, var_1c_1 + esi_1)
    char var_45 = 0
    sub_4263a0(&var_54, &var_45)
    var_8_1.b = 1
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    sub_6ca100(&var_58, 0)
    sub_6ca100(&var_58, var_5c)
    ebx = var_68 - edi
    sub_6ca100(&var_58, ebx)
    bool eax_8 = edi == var_68
    
    if (eax_8 == 0 && edi != 0 && ebx s> 0)
        var_5c.b = eax_8
        int32_t var_84_5 = var_5c
        sub_6ca200(&var_54, var_50_1, edi, edi + ebx)
    
    void* esi_2 = var_60
    void* esi_3 = esi_2 + 8
    
    if ((*(**(esi_2 + 4) + 8))(esi_3, &var_54).b != 0)
        ebx.b = 1
    else
        if (*(esi_3 + 0x14) u>= 0x10)
            esi_3 = *esi_3
        
        var_60 = esi_3
        void* var_44
        sub_403360(&var_44, 0x75df4c)
        var_8_1.b = 3
        var_8_1.b = 4
        sub_6c52e0(sub_409240(&var_60, &var_44, &var_2c, &var_60))
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        void* var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        ebx.b = 0
    
    void* ecx_12 = var_54
    var_58 = &fileimage::CFileImageMaker::`vftable'
    
    if (ecx_12 != 0)
        sub_403160(ecx_12, var_4c_1 - ecx_12, 1)
        var_54 = nullptr
        int32_t var_50_2 = 0
        int32_t var_4c_2 = 0
else
    ebx.b = 0

if (edi != 0)
    sub_403160(edi, var_64 - edi, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
