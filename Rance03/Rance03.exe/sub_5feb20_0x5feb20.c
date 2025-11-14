// 函数: sub_5feb20
// 地址: 0x5feb20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_75d524
int32_t* result = sub_5fedf0(ebp)

if (result.b != 0)
    struct fileimage::CFileImageMaker::VTable** eax_6 = sub_69adc6(0x10)
    
    if (eax_6 == 0)
        eax_6 = nullptr
    else
        *eax_6 = &fileimage::CFileImageMaker::`vftable'
        eax_6[1] = 0
        eax_6[2] = 0
        eax_6[3] = 0
    
    *(ebp + 4) = eax_6
    int32_t var_18_1 = 0xf
    void* var_1c_1 = nullptr
    char var_2c = 0
    sub_402110(&var_2c, 0x6eb9c8, 3)
    int32_t var_4 = 0
    char* ebx_1 = &var_2c
    char* edx_1 = &var_2c
    int32_t* var_4c_1 = arg1
    
    if (var_18_1 u>= 0x10)
        ebx_1 = var_2c.d
    
    if (var_18_1 u>= 0x10)
        edx_1 = var_2c.d
    
    void* esi_1 = *(ebp + 4)
    sub_468ff0(esi_1 + 4, *(esi_1 + 8), edx_1, var_1c_1 + ebx_1)
    char var_31 = 0
    sub_414b60(esi_1 + 4, &var_31)
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    sub_468ec0(*(ebp + 4), 0)
    
    if (ebp + 0x1c != arg1)
        sub_401ff0(ebp + 0x1c, arg1, 0, 0xffffffff)
    
    *(ebp + 0x18) = 1
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
