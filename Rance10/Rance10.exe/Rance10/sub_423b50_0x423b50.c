// 函数: sub_423b50
// 地址: 0x423b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcb3c
sub_427910(esi + 0x14)
sub_403490(esi + 0x64, 0x75cd33, nullptr)
sub_423c90(esi)
int32_t* ecx_3 = *(esi + 8)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    *(esi + 8) = 0

int32_t* ecx_4 = nullptr

if (sub_41ac20(0x75d518, 0x75daa4).b != 0)
    ecx_4 = data_7fcb40

*(esi + 8) = ecx_4
int32_t* result

if (ecx_4 != 0)
    (**ecx_4)(eax_2)
    int32_t* ecx_5 = data_7fcb88
    
    if (ecx_5 == 0)
        result.b = 0
    else
        result = (**ecx_5)(0x75d528)
        
        if (result == 0)
            result.b = 0
        else
            void var_44
            sub_403360(&var_44, (*(*result + 0xc))())
            int32_t var_8_1 = 0
            void var_5c
            char* eax_8 = sub_405070(&var_5c, &var_44)
            var_8_1.b = 1
            int32_t* var_2c
            sub_4176f0(eax_8.b, eax_8, &var_2c, "SF.afa")
            var_8_1.b = 3
            sub_403320(&var_5c)
            
            if (sub_5f2400(&var_2c) != 0)
                int32_t* edx_3 = &var_2c
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    edx_3 = var_2c
                
                (*(**(esi + 8) + 0xc))(7, edx_3)
            
            sub_403320(&var_2c)
            sub_403320(&var_44)
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
