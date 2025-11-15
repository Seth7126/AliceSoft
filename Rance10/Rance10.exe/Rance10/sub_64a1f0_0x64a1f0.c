// 函数: sub_64a1f0
// 地址: 0x64a1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcbcc
char result = sub_64a430(esi)

if (result != 0)
    struct fileimage::CFileImageMaker::VTable** eax_3 = sub_6e810c(0x10)
    struct fileimage::CFileImageMaker::VTable** var_30_1 = eax_3
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    *eax_3 = &fileimage::CFileImageMaker::`vftable'
    eax_3[1] = 0
    eax_3[2] = 0
    eax_3[3] = 0
    *(esi + 4) = eax_3
    char var_2c = 0
    sub_403490(&var_2c, &data_76db14, 3)
    int32_t var_8_1 = 0
    sub_6ca1a0(*(esi + 4), &var_2c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    void* ecx_3 = *(esi + 4)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_6ca100(ecx_3, 0)
    
    if (esi + 0x1c != arg1)
        sub_403590(esi + 0x1c, arg1, 0, 0xffffffff)
    
    *(esi + 0x18) = 1
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
