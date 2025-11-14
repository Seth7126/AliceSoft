// 函数: ?_Reallocate_exactly@?$vector@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@V?$allocator@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@std@@@std@@AAEXI@Z
// 地址: 0x5b99c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c9381
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* i = arg3
int32_t* result = arg4
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[8])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[1] = i[1]
        result[7] = 0xf
        result[6] = 0
        result[2].b = 0
        sub_401ff0(&result[2], &i[2], 0, 0xffffffff)
    
    result = &result[8]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
