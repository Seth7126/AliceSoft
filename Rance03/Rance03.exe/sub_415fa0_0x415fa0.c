// 函数: sub_415fa0
// 地址: 0x415fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b40b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CTextChildWnd::dpanalysis::CSourceWnd::VTable** result = arg1
struct dpanalysis::CTextChildWnd::dpanalysis::CSourceWnd::VTable** result_1 = result
sub_41a700(arg1)
int32_t var_4 = 0
*result = &dpanalysis::CSourceWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
result[0x1a] = 0
result[0x1c] = &dpanalysis::CBalloonHelp::`vftable'
int32_t* eax_5 = sub_69adc6(0xb8)
int32_t* var_34 = eax_5
var_4.b = 1
int32_t* eax_6

if (eax_5 == 0)
    eax_6 = nullptr
else
    eax_6 = sub_412920(eax_5)

result[0x1d] = eax_6
__builtin_memset(&result[0x29], 0, 0x14)
var_4.b = 3
result[0x2c] = sub_418350()
var_4.b = 4
result[0x2e] = 0
result[0x1e] = 0
result[0x1f] = 0
result[0x20] = 0xff8080
result[0x21] = 0xffffff
result[0x22] = 0x80
result[0x24] = 0xffffffff
result[0x25] = 0xffffffff
result[0x18] = 0
result[0x19] = 0
result[0x1b] = 0
result[0x23] = 0
result[0x26] = 0xffffffff
result[0x27] = 0xffffffff
result[0x28] = 0xffc0c0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t ecx_2 = sub_402110(&var_28, "void", 4)
var_4.b = 5
uint32_t var_48 = zx.d(data_75dd26)
char* var_4c = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_2)
var_4.b = 4

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_1 = 0xf
int32_t var_18_1 = 0
var_28 = 0
int32_t ecx_5 = sub_402110(&var_28, 0x6da4b0, 3)
var_4.b = 6
uint32_t var_48_2 = zx.d(data_75dd26)
char* var_4c_1 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_5)
var_4.b = 4

if (var_14_1 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_2 = 0xf
int32_t var_18_2 = 0
var_28 = 0
int32_t ecx_8 = sub_402110(&var_28, "float", 5)
var_4.b = 7
uint32_t var_48_4 = zx.d(data_75dd26)
char* var_4c_2 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_8)
var_4.b = 4

if (var_14_2 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_3 = 0xf
int32_t var_18_3 = 0
var_28 = 0
int32_t ecx_11 = sub_402110(&var_28, "string", 6)
var_4.b = 8
uint32_t var_48_6 = zx.d(data_75dd26)
char* var_4c_3 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_11)
var_4.b = 4

if (var_14_3 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_4 = 0xf
int32_t var_18_4 = 0
var_28 = 0
int32_t ecx_14 = sub_402110(&var_28, "bool", 4)
var_4.b = 9
uint32_t var_48_8 = zx.d(data_75dd26)
char* var_4c_4 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_14)
var_4.b = 4

if (var_14_4 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_5 = 0xf
int32_t var_18_5 = 0
var_28 = 0
int32_t ecx_17 = sub_402110(&var_28, "const", 5)
var_4.b = 0xa
uint32_t var_48_10 = zx.d(data_75dd26)
char* var_4c_5 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_17)
var_4.b = 4

if (var_14_5 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_6 = 0xf
int32_t var_18_6 = 0
var_28 = 0
int32_t ecx_20 = sub_402110(&var_28, "array", 5)
var_4.b = 0xb
uint32_t var_48_12 = zx.d(data_75dd26)
char* var_4c_6 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_20)
var_4.b = 4

if (var_14_6 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_7 = 0xf
int32_t var_18_7 = 0
var_28 = 0
int32_t ecx_23 = sub_402110(&var_28, "struct", 6)
var_4.b = 0xc
uint32_t var_48_14 = zx.d(data_75dd26)
char* var_4c_7 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_23)
var_4.b = 4

if (var_14_7 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_8 = 0xf
int32_t var_18_8 = 0
var_28 = 0
int32_t ecx_26 = sub_402110(&var_28, "class", 5)
var_4.b = 0xd
uint32_t var_48_16 = zx.d(data_75dd26)
char* var_4c_8 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_26)
var_4.b = 4

if (var_14_8 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_9 = 0xf
int32_t var_18_9 = 0
var_28 = 0
int32_t ecx_29 = sub_402110(&var_28, "functype", 8)
var_4.b = 0xe
uint32_t var_48_18 = zx.d(data_75dd26)
char* var_4c_9 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_29)
var_4.b = 4

if (var_14_9 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_10 = 0xf
int32_t var_18_10 = 0
var_28 = 0
int32_t ecx_32 = sub_402110(&var_28, "delegate", 8)
var_4.b = 0xf
uint32_t var_48_20 = zx.d(data_75dd26)
char* var_4c_10 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_32)
var_4.b = 4

if (var_14_10 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_11 = 0xf
int32_t var_18_11 = 0
var_28 = 0
int32_t ecx_35 = sub_402110(&var_28, 0x6da504, 3)
var_4.b = 0x10
uint32_t var_48_22 = zx.d(data_75dd26)
char* var_4c_11 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_35)
var_4.b = 4

if (var_14_11 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_12 = 0xf
int32_t var_18_12 = 0
var_28 = 0
int32_t ecx_38 = sub_402110(&var_28, "ifdef", 5)
var_4.b = 0x11
uint32_t var_48_24 = zx.d(data_75dd26)
char* var_4c_12 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_38)
var_4.b = 4

if (var_14_12 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_13 = 0xf
int32_t var_18_13 = 0
var_28 = 0
int32_t ecx_41 = sub_402110(&var_28, "ifndef", 6)
var_4.b = 0x12
uint32_t var_48_26 = zx.d(data_75dd26)
char* var_4c_13 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_41)
var_4.b = 4

if (var_14_13 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_14 = 0xf
int32_t var_18_14 = 0
var_28 = 0
int32_t ecx_44 = sub_402110(&var_28, "endif", 5)
var_4.b = 0x13
uint32_t var_48_28 = zx.d(data_75dd26)
char* var_4c_14 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_44)
var_4.b = 4

if (var_14_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_15 = 0xf
int32_t var_18_15 = 0
var_28 = 0
int32_t ecx_47 = sub_402110(&var_28, "assert", 6)
var_4.b = 0x14
uint32_t var_48_30 = zx.d(data_75dd26)
char* var_4c_15 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_47)
var_4.b = 4

if (var_14_15 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_16 = 0xf
int32_t var_18_16 = 0
var_28 = 0
int32_t ecx_50 = sub_402110(&var_28, "objectgroup", 0xb)
var_4.b = 0x15
uint32_t var_48_32 = zx.d(data_75dd26)
char* var_4c_16 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_50)
var_4.b = 4

if (var_14_16 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_17 = 0xf
int32_t var_18_17 = 0
var_28 = 0
int32_t ecx_53 = sub_402110(&var_28, "system", 6)
var_4.b = 0x16
uint32_t var_48_34 = zx.d(data_75dd26)
char* var_4c_17 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_53)
var_4.b = 4

if (var_14_17 u>= 0x10)
    j__free(var_28.d)

int32_t var_14_18 = 0xf
int32_t var_18_18 = 0
var_28 = 0
int32_t ecx_56 = sub_402110(&var_28, "this", 4)
var_4.b = 0x17
uint32_t var_48_36 = zx.d(data_75dd26)
char* var_4c_18 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_56)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_59 = sub_401f60(&var_28, "private")
var_4.b = 0x18
uint32_t var_48_38 = zx.d(data_75dd26)
char* var_4c_19 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_59)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_62 = sub_401f60(&var_28, "public")
var_4.b = 0x19
uint32_t var_48_40 = zx.d(data_75dd26)
char* var_4c_20 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_62)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_65 = sub_401f60(&var_28, "if")
var_4.b = 0x1a
uint32_t var_48_42 = zx.d(data_75dd26)
char* var_4c_21 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_65)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_68 = sub_401f60(&var_28, "else")
var_4.b = 0x1b
uint32_t var_48_44 = zx.d(data_75dd26)
char* var_4c_22 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_68)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_71 = sub_401f60(&var_28, "while")
var_4.b = 0x1c
uint32_t var_48_46 = zx.d(data_75dd26)
char* var_4c_23 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_71)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_74 = sub_401f60(&var_28, "for")
var_4.b = 0x1d
uint32_t var_48_48 = zx.d(data_75dd26)
char* var_4c_24 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_74)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_77 = sub_401f60(&var_28, "do")
var_4.b = 0x1e
uint32_t var_48_50 = zx.d(data_75dd26)
char* var_4c_25 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_77)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_80 = sub_401f60(&var_28, "break")
var_4.b = 0x1f
uint32_t var_48_52 = zx.d(data_75dd26)
char* var_4c_26 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_80)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_83 = sub_401f60(&var_28, "continue")
var_4.b = 0x20
uint32_t var_48_54 = zx.d(data_75dd26)
char* var_4c_27 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_83)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_86 = sub_401f60(&var_28, "return")
var_4.b = 0x21
uint32_t var_48_56 = zx.d(data_75dd26)
char* var_4c_28 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_86)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_89 = sub_401f60(&var_28, "goto")
var_4.b = 0x22
uint32_t var_48_58 = zx.d(data_75dd26)
char* var_4c_29 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_89)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_92 = sub_401f60(&var_28, "switch")
var_4.b = 0x23
uint32_t var_48_60 = zx.d(data_75dd26)
char* var_4c_30 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_92)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_95 = sub_401f60(&var_28, "case")
var_4.b = 0x24
uint32_t var_48_62 = zx.d(data_75dd26)
char* var_4c_31 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_95)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_98 = sub_401f60(&var_28, "default")
var_4.b = 0x25
uint32_t var_48_64 = zx.d(data_75dd26)
char* var_4c_32 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_98)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_101 = sub_401f60(&var_28, "jump")
var_4.b = 0x26
uint32_t var_48_66 = zx.d(data_75dd26)
char* var_4c_33 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_101)
var_4.b = 4

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

int32_t ecx_104 = sub_401f60(&var_28, "jumps")
var_4.b = 0x27
uint32_t var_48_68 = zx.d(data_75dd26)
char* var_4c_34 = &var_28
sub_4183d0(&result[0x2c], &var_34, ecx_104)

if (var_14_18 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
