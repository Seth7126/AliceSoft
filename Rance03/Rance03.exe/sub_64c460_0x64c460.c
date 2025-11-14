// 函数: sub_64c460
// 地址: 0x64c460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce8c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** result = arg1
result_1 = result
int32_t ecx = sub_650540(arg1)
int32_t var_4 = 0
*result = &dplogviewer::CLogWnd::`vftable'{for `dplogviewer::CTextChildWnd'}
__builtin_memset(&result[0x2e], 0, 0x11)
result[0x37] = 0xf
result[0x36] = 0
result[0x3d] = 0xf
result[0x3c] = 0
result[0x38].b = 0
result[0x44] = 0xf
result[0x43] = 0
result[0x3f].b = 0
var_4.b = 4
bool cond:0 = data_75d534 == 0
__builtin_memset(&result[0x45], 0, 0x11)
result[0x3e].b = 0

if (not(cond:0))
    int32_t var_58_1 = ecx
    int32_t* eax_5 = sub_6203f0()
    
    if (eax_5 != 0)
        int32_t* eax_7 = (**eax_5)(0x7007d0)
        
        if (eax_7 != 0)
            int32_t var_28
            int32_t* eax_10 = sub_401f60(&var_28, (*(*eax_7 + 8))(eax_4))
            var_4.b = 5
            char var_40
            int32_t* eax_11 = sub_410a80(eax_10.b, eax_10, &var_40, "LOG")
            
            if (&result[0x38] != eax_11)
                if (result[0x3d] u>= 0x10)
                    j__free(result[0x38])
                
                result[0x3d] = 0xf
                result[0x3c] = 0
                result[0x38].b = 0
                sub_4030b0(&result[0x38], eax_11)
            
            int32_t var_2c
            
            if (var_2c u>= 0x10)
                j__free(var_40.d)
            
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
