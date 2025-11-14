// 函数: sub_4a2b80
// 地址: 0x4a2b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* ebp = var_18
int32_t* esi = ebp
void** result
void* ebx

if (ebp == var_14)
label_4a2bf6:
    int32_t esi_1 = *(arg1 + 0x2c)
    
    if (esi_1 s> 0)
        result = *(*(arg1 + 0x60) + 0x14)
        void** result_2 = result
        void** result_3 = result[1]
        
        while (*(result_3 + 0xd) == 0)
            if (result_3[4] s>= esi_1)
                result_2 = result_3
                result_3 = *result_3
            else
                result_3 = result_3[2]
        
        void** result_1
        
        if (result_2 != result)
            result_1 = result_2
        
        if (result_2 == result || esi_1 s< result_2[4])
            result_1 = result
        
        ebx.b = result_1 != result
    else
        ebx.b = 0
else
    while (true)
        *esi
        
        if (sub_4a2b80(eax_2).b != 0)
            ebx.b = 1
            break
        
        esi = &esi[1]
        
        if (esi == var_14)
            goto label_4a2bf6

if (ebp != 0)
    j__free(ebp)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
