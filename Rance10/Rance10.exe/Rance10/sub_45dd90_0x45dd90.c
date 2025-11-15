// 函数: sub_45dd90
// 地址: 0x45dd90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bdcf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct encodecg::CBMPInfo::VTable* var_54
struct encodecg::CBMPInfo::VTable** ecx = &var_54
sub_45e5f0(ecx)
int32_t var_8_1 = 0
int32_t* arg_4
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result

if (sub_45e6e0(ecx, arg_4) != 0)
    int32_t var_3c
    int32_t var_38
    int16_t* var_20
    int32_t var_68_2 =
        sub_431b80(&var_20, ((((var_38 & 1) + var_38) * ((var_3c & 1) + var_3c)) << 4) + 0x444)
    var_8_1.b = 1
    arg_4 = nullptr
    char eax_8
    int32_t ecx_10
    eax_8, ecx_10 = sub_45db60(&var_54, &arg_4, &var_20, &var_54)
    void* var_14
    int32_t eax_10
    int32_t ecx_12
    int32_t* ebx_1
    
    if (eax_8 != 0)
        ebx_1 = arg_4
        int32_t var_68_3 = ecx_10
        var_14 = nullptr
        eax_10, ecx_12 = sub_45dcb0(&var_54, &var_14, &var_20, ebx_1, &var_54)
    
    int16_t* edi_2
    
    if (eax_8 == 0 || eax_10.b == 0)
        edi_2 = var_20
        result = nullptr
    else
        void* esi = var_14
        int32_t var_68_4 = ecx_12
        edi_2 = var_20
        sub_45e520(eax_10, var_3c, edi_2, var_38, ebx_1, esi)
        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_11 =
            sub_6e810c(0x14)
        arg_4 = eax_11
        var_8_1.b = 2
        result = sub_405830(eax_11, edi_2, esi + 0x44 + ebx_1)
    
    int32_t var_18
    
    if (edi_2 != 0)
        sub_403160(edi_2, var_18 - edi_2, 1)
else
    result = nullptr

void* var_50
int32_t var_48

if (var_50 != 0)
    sub_403160(var_50, var_48 - var_50, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
