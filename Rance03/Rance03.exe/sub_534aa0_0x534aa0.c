// 函数: sub_534aa0
// 地址: 0x534aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
int32_t eax_3 = arg6
int32_t esi = arg7
int32_t var_4 = 0
int32_t ebx = eax_3 * 2
int32_t var_20

if (ebx s<= esi)
    int32_t eax_4 = eax_3 << 2
    arg7 = eax_4
    
    do
        int32_t var_40_1 = arg8
        void* edx = eax_4 + edi
        void* ebp_1 = eax_4 + edx
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        int32_t var_44_1 = arg5
        arg5 = sub_534f90(arg5, edi, &var_20, edx, edx, ebp_1, 0, nullptr)[4]
        int32_t eax_8 = var_20
        
        if (eax_8 != 0)
            j__free(eax_8)
        
        eax_4 = arg7
        esi -= ebx
        edi = ebp_1
    while (esi s>= ebx)
    
    eax_3 = arg6

if (esi s> eax_3)
    int32_t var_40_4 = arg8
    int32_t* edx_3 = &edi[eax_3]
    int32_t var_4c_2 = 0
    int32_t var_48_3 = 0
    int32_t var_44_3 = arg5
    sub_534f90(arg5, edi, &var_20, edx_3, edx_3, arg2, 0, nullptr)
else
    int32_t var_48_2 = 0
    int32_t var_44_2 = 0
    int32_t var_40_3 = arg5
    sub_534c90(arg5, edi, &var_20, arg2, 0, 0)

int32_t eax_11 = var_20

if (eax_11 != 0)
    j__free(eax_11)

int32_t result = arg4

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
