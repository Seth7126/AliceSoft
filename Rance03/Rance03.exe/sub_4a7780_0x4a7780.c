// 函数: sub_4a7780
// 地址: 0x4a7780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* var_14 = nullptr
sub_4a44c0(*(arg1 + 4), &var_18)
int32_t* ecx_1 = var_18
int32_t eax_5 = (var_14 - ecx_1) s>> 2
sub_4a78a0(eax_5, var_14, ecx_1, eax_5, 0.d)
int32_t* esi = var_18
int32_t result

if (esi != var_14)
    do
        if ((*(**(*(*esi + 0x10) + 0x5c) + 0x18))(eax_2) != 0)
            void* eax_12 = *esi
            esi = var_18
            result = *(*(eax_12 + 0x10) + 0x2c)
            goto label_4a7822
        
        esi = &esi[1]
    while (esi != var_14)
    
    esi = var_18

result = 0
label_4a7822:

if (esi != 0)
    j__free(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
