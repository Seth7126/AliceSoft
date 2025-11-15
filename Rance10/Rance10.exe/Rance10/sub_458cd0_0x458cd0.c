// 函数: sub_458cd0
// 地址: 0x458cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
result[4] = 0
result[5] = 0
result[5] = 0xf
bool cond:0 = result[5] u< 0x10
result[4] = 0
int32_t* result_1

if (cond:0)
    result_1 = result
else
    result_1 = *result

void* ebx = arg2
*result_1 = 0
sub_4056a0(arg1, ebx)
int32_t var_8_1 = 0
result[6] = *(ebx + 0x18)
arg2 = &result[7]
sub_4275f0(&result[7], ebx + 0x1c)
result[0xa] = *(ebx + 0x28)
result[0xb] = *(ebx + 0x2c)
result[0xc] = 0
result[0xd] = 0
result[0xe] = 0
result[0xc] = *(ebx + 0x30)
result[0xd] = *(ebx + 0x34)
result[0xe] = *(ebx + 0x38)
*(ebx + 0x30) = 0
*(ebx + 0x34) = 0
*(ebx + 0x38) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
