// 函数: sub_423d90
// 地址: 0x423d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7293c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64
int32_t var_84 = var_64
int32_t ecx
int32_t var_88 = ecx
sub_417d50(*arg1, arg1[1])
int32_t* ecx_2 = data_7fcb70
arg1[1] = *arg1
int32_t result = (**ecx_2)(eax_2)
int32_t* esi = data_7fcb70

if (esi != 0)
    int32_t* eax_6 = (*(esi[1] + 0x2c))(0x75d59c)
    struct common::CEXArrayReader::VTable* const var_70 = &common::CEXArrayReader::`vftable'
    int32_t* var_6c_1 = eax_6
    int32_t var_8_1 = 0
    
    if (eax_6 != 0)
        int32_t eax_7 = (*(*eax_6 + 8))()
        int32_t edi_1 = 0
        
        if (eax_7 s> 0)
            do
                struct filesystem::CFilePath::VTable* const var_30 =
                    &filesystem::CFilePath::`vftable'
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_8_1.b = 1
                sub_403590(&var_2c, &data_7fd490, 0, 0xffffffff)
                sub_67eb70(&var_30)
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                char var_48 = 0
                sub_403490(&var_48, 0x75cd37, nullptr)
                var_8_1.b = 2
                char var_60[0x10]
                char* eax_8 = sub_403230(&var_70, &var_60, edi_1, &var_48)
                var_8_1.b = 3
                sub_67eaf0(&var_30)
                sub_4055a0(&var_2c, eax_8, 0, 0xffffffff)
                int32_t var_4c
                
                if (var_4c u>= 0x10)
                    sub_403160(var_60[0].d, var_4c + 1, 1)
                
                var_8_1.b = 1
                var_4c = 0xf
                int32_t var_50_1 = 0
                var_60[0] = 0
                
                if (var_34_1 u>= 0x10)
                    sub_403160(var_48.d, var_34_1 + 1, 1)
                
                sub_424db0(arg1, &var_2c)
                var_8_1.b = 0
                var_30 = &filesystem::CFilePath::`vftable'
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                edi_1 += 1
            while (edi_1 s< eax_7)
    
    result = (*(*esi + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
