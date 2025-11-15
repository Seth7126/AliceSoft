// 函数: sub_41d230
// 地址: 0x41d230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_50 = nullptr
int32_t result_1 = 0
int32_t var_48 = 0
int32_t var_8_1 = 0
BOOL result = sub_41f270(&var_50)
char* esi = var_50

if (result.b != 0)
    struct fileimage::CFileImageAnalyser::VTable* const var_44 =
        &fileimage::CFileImageAnalyser::`vftable'
    result = result_1
    char* var_40_1 = esi
    BOOL result_2 = result
    var_8_1.b = 1
    
    if (&esi[4] u<= result)
        void* var_40_2 = &esi[4]
        result = zx.d(*esi)
        
        if ((((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | result) == 0)
            uint32_t var_30
            result = sub_61ec90(&var_44, &var_30)
            
            if (result.b != 0)
                uint32_t var_38
                result = sub_61ec90(&var_44, &var_38)
                
                if (result.b != 0)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    var_8_1.b = 2
                    
                    if (sub_61ed80(&var_44, &var_2c) != 0)
                        void* eax_8 = *(arg1 + 4)
                        uint32_t var_68_4 = var_30
                        int32_t var_34 = 0xffffffff
                        int32_t eax_10 = (*(**(eax_8 + 8) + 0x10))(var_68_4)
                        
                        if (eax_10 u<= 5)
                            uint32_t ebx_1 = var_38
                            
                            switch (eax_10)
                                case 0
                                    if (sub_41faf0(*(arg1 + 4), ebx_1, &var_34) != 0)
                                        sub_41d930(var_34, var_30, ebx_1, &var_2c)
                                case 1
                                    if (sub_41fc20(*(arg1 + 4), var_30, ebx_1, &var_34) != 0)
                                        sub_41d930(var_34, var_30, ebx_1, &var_2c)
                                case 3
                                    if (sub_4207b0(*(arg1 + 4), var_30, &var_34) != 0)
                                        sub_41d930(var_34, var_30, ebx_1, &var_2c)
                                case 4
                                    if (sub_4206e0(*(arg1 + 4), var_30, ebx_1, &var_34) != 0)
                                        sub_41d930(var_34, var_30, ebx_1, &var_2c)
                    
                    result = sub_403320(&var_2c)

if (esi != 0)
    result = sub_403160(esi, var_48 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
