// 函数: sub_6c54a0
// 地址: 0x6c54a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpText = arg1
enum MESSAGEBOX_RESULT result

if (data_7fcbdd == 0)
    PSTR lpCaption = &data_7fd4ac
    
    if (data_7fd4c0 u>= 0x10)
        lpCaption = data_7fd4ac
    
    if (lpText[5] u>= 0x10)
        lpText = *lpText
    
    result = MessageBoxA(data_7fcbe0, lpText, lpCaption, 0x50001)
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void* var_44
    sub_45aae0(sub_4175e0(sub_403490(&var_2c, ".============== usernotice::ErrorOkCancel ", 0x32), 
        &var_2c, &var_44, \n"))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t eax_7 = var_18_1
    
    if (eax_7 u>= 0x10)
        eax_7 = sub_403160(var_2c.d, eax_7 + 1, 1)
    
    int32_t var_8_3 = 2
    sub_45aae0(sub_4175e0(eax_7, lpText, &var_2c, U"\n"))
    int32_t var_8_4 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    int32_t var_8_5 = 3
    var_8_5.b = 4
    sub_45aae0(sub_4175e0(sub_403490(&var_2c, ".============== ", 0x26), &var_2c, &var_44, U"\n"))
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    int32_t var_8_6 = 0xffffffff
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44.b = 0
    int32_t var_8_7 = 5
    var_8_7.b = 6
    void* var_5c
    sub_45aae0(sub_4175e0(sub_403490(&var_44, ".============== usernotice::ErrorOkCancel ", 0x32), 
        &var_44, &var_5c, \n"))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44, var_30_1 + 1, 1)
    
    result = IDOK

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
