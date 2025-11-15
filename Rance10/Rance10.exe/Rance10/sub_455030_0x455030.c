// 函数: sub_455030
// 地址: 0x455030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b6a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t esi = arg_4
arg1[0x15].b = 0

if (sub_5f2400(esi) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

sub_454e80(arg1)
void* result_1 = nullptr
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
int32_t* var_14
bool eax_4 = sub_4551d0(&var_14, &result_1, esi)
void* result_2

if (eax_4 != 0)
    result_2 = result_1

int32_t* ebx

if (eax_4 == 0 || result_2 == var_28)
    ebx.b = 0
else
    struct fileimage::CFileImageAnalyser::VTable* const var_20 =
        &fileimage::CFileImageAnalyser::`vftable'
    void* result_3 = result_2
    void* var_18_1 = var_28
    var_8_1.b = 1
    
    if (sub_61ec90(&var_20, &arg_4) == 0)
    label_455189:
        ebx.b = 0
        var_20 = &fileimage::CFileImageAnalyser::`vftable'
    else
        sub_4567b0(&arg1[0xa], arg_4)
        void* i = arg1[0xa]
        
        for (int32_t edi_1 = arg1[0xb]; i != edi_1; i += 0x3c)
            if (sub_4549e0(i + 0x1c, &var_20) == 0)
                goto label_455189
        
        int32_t* esi_1 = var_14
        
        if (sub_455470(arg1, esi_1, &var_20) == 0)
            goto label_455189
        
        if (sub_4555a0(arg1, esi_1, &var_20) == 0)
            goto label_455189
        
        if (sub_455740(arg1, esi_1, &var_20) == 0)
            goto label_455189
        
        if (sub_4557c0(arg1, esi_1, &var_20) == 0)
            goto label_455189
        
        if (sub_455d10(arg1, esi_1, &var_20) == 0)
            goto label_455189
        
        arg1[0x15].b = 1
        ebx.b = 1
        var_20 = &fileimage::CFileImageAnalyser::`vftable'

void* result = result_1

if (result != 0)
    sub_403160(result, var_24 - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
