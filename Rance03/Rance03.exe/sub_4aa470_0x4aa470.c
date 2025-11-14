// 函数: sub_4aa470
// 地址: 0x4aa470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcdd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_75d4fc
char* esi = nullptr
char* var_24 = nullptr
int32_t result_1 = 0
int32_t var_1c = 0
int32_t var_4 = 0
int32_t* result
int32_t ebx

if (arg2 == 0)
    ebx.b = 0
else
    result = sub_4a97d0(&var_24, arg2)
    esi = var_24
    
    if (result.b == 0)
        ebx.b = 0
    else
        struct fileimage::CFileImageAnalyser::VTable* const var_18 =
            &fileimage::CFileImageAnalyser::`vftable'
        result = result_1
        char* var_14_1 = esi
        int32_t* result_2 = result
        var_4.b = 1
        
        if (&esi[4] u> result)
            ebx.b = 0
            var_18 = &fileimage::CFileImageAnalyser::`vftable'
        else
            void* var_14_2 = &esi[4]
            ebx.b = sub_4d84e0(edi + 0x74, arg1, 
                ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi), &var_18).b
            var_18 = &fileimage::CFileImageAnalyser::`vftable'

if (esi != 0)
    j__free(esi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
