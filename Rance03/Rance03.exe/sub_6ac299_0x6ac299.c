// 函数: sub_6ac299
// 地址: 0x6ac299
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_34
void arg_4
sub_6ac1d1(&var_34, &arg_4)
int16_t var_24
int16_t* var_44_1 = &var_24
char var_48_1 = 0
int32_t var_4c = 0x11
void* var_58 = var_34
void* var_54
void** edi = &var_54
void var_30
void* esi = &var_30
*edi = *esi
edi[1].w = *(esi + 4)
int16_t var_50
arg1[2] = sub_6ac7d9(var_58, var_54, var_50, var_4c, var_48_1, var_44_1)
char var_22
*arg1 = sx.d(var_22)
arg1[1] = sx.d(var_24)
void var_20
void* var_5c = &var_20

if (_strcpy_s(arg2, arg3, var_5c) != 0)
    __builtin_memset(&var_54, 0, 0x14)
    __invoke_watson()
    noreturn

arg1[3] = arg2
sub_69a5bc(eax_1 ^ &__saved_ebp)
return arg1
