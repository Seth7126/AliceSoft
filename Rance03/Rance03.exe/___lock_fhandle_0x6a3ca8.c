// 函数: ___lock_fhandle
// 地址: 0x6a3ca8
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x747f60
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747f60 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_6a3cb4
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_75ca40)[arg1 s>> 5]

if (*(esi_3 + 8) == 0)
    __lock(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        sub_69f7a9(esi_3 + 0xc, 0xfa0, 0)
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_6a3d2d()

EnterCriticalSection((&data_75ca40)[arg1 s>> 5] + 0xc + ((arg1 & 0x1f) << 6))
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a3d29
return 1
