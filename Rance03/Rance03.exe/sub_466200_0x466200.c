// 函数: sub_466200
// 地址: 0x466200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, 0x6da1bf, nullptr)
int32_t var_4 = 0
int32_t eax_5 = *(arg1 + 0x1c)

if (eax_5 u<= 0x1e)
    char const* const var_44_1
    
    switch (eax_5)
        case 0
            var_44_1 = "TOKEN_NONE"
        case 1
            var_44_1 = "TOKEN_DATATYPE"
        case 2
            var_44_1 = "TOKEN_SYSTEM"
        case 3
            var_44_1 = "TOKEN_SEMICOLON"
        case 4
            var_44_1 = "TOKEN_COMMA"
        case 5
            var_44_1 = "TOKEN_BLOCK_DEFINE_S"
        case 6
            var_44_1 = "TOKEN_BLOCK_DEFINE_E"
        case 7
            var_44_1 = "TOKEN_BLOCK_DATA_S"
        case 8
            var_44_1 = "TOKEN_BLOCK_DATA_E"
        case 9
            var_44_1 = "TOKEN_BLOCK_ARRAY_S"
        case 0xa
            var_44_1 = "TOKEN_BLOCK_ARRAY_E"
        case 0xb
            var_44_1 = "TOKEN_EQUAL"
        case 0xc
            var_44_1 = "TOKEN_ASTERISK"
        case 0xd
            var_44_1 = "TOKEN_SLASH"
        case 0xe
            var_44_1 = "TOKEN_PLUS"
        case 0xf
            var_44_1 = "TOKEN_MINUS"
        case 0x10
            var_44_1 = "TOKEN_NUMERAL"
        case 0x11
            var_44_1 = "TOKEN_STRING"
        case 0x12
            var_44_1 = "TOKEN_DATANAME"
        case 0x13
            var_44_1 = "TOKEN_LT"
        case 0x14
            var_44_1 = "TOKEN_GT"
        case 0x15
            var_44_1 = "TOKEN_MONADIC"
        case 0x16
            var_44_1 = "TOKEN_LSHIFT"
        case 0x17
            var_44_1 = "TOKEN_RSHIFT"
        case 0x18
            var_44_1 = "TOKEN_PERCENT"
        case 0x19
            var_44_1 = "TOKEN_AND"
        case 0x1a
            var_44_1 = "TOKEN_OR"
        case 0x1b
            var_44_1 = "TOKEN_XOR"
        case 0x1c
            var_44_1 = "TOKEN_TILDE"
        case 0x1d
            var_44_1 = "TOKEN_AT"
        case 0x1e
            var_44_1 = "COMMENT"
    
    sub_402670(&var_2c, var_44_1)

char* ecx_2 = &var_2c
void* eax_6 = arg1 + 4

if (var_18 u>= 0x10)
    ecx_2 = var_2c.d

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

char* var_44_2 = ecx_2
void* var_48 = eax_6
int32_t var_4c = *(arg1 + 0x20)
sub_4691f0(arg2, 0x6dcd78)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return arg2
