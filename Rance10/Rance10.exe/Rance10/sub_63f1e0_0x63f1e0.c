// 函数: sub_63f1e0
// 地址: 0x63f1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_1c =
    &fileimage::CFileImageAnalyser::`vftable'
char* edx = *arg2
char* var_18 = edx
char* result = arg2[1]
char* result_1 = result
int32_t var_8_1 = 0

if (&edx[4] u<= result)
    void* var_18_1 = &edx[4]
    int32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    
    if (ecx_6 s>= 0)
        sub_63f680(arg1 + 0x18, ecx_6)
        void* i = *(arg1 + 0x18)
        
        for (int32_t edi_1 = *(arg1 + 0x1c); i != edi_1; i += 0x10)
            if (sub_63e6b0(i, &var_1c).b == 0)
                goto label_63f291
        
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

label_63f291:
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
