// 函数: sub_51ca70
// 地址: 0x51ca70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c2af0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
var_64 = arg2
int32_t eax_6
eax_6.b = *(ebx + 0xc8) != 0
int32_t var_60 = arg3
int32_t var_78 = eax_6
int32_t var_c_1 = 0
int32_t var_4c
sub_51cfe0(&var_64, sub_4691f0(&var_4c, 0x6e2dd8))
int32_t var_c_2 = 0xffffffff
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_78_3 = *(ebx + 0xd0)
int32_t var_c_3 = 1
sub_51cfe0(&var_64, sub_4691f0(&var_4c, 0x6e2d64))
int32_t var_c_4 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_78_6 = *(ebx + 0xd4)
int32_t var_c_5 = 2
sub_51cfe0(&var_64, sub_4691f0(&var_4c, 0x6e2d80))
int32_t var_c_6 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_78_9 = *(ebx + 0xc4)
int32_t var_7c = *(ebx + 0xc0)
int32_t var_80_3 = *(ebx + 0xbc)
int32_t var_84 = *(ebx + 0xb8)
int32_t var_c_7 = 3
sub_51cfe0(&var_64, sub_4691f0(&var_4c, 0x6e2d94))
int32_t var_c_8 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_34
char* eax_12 = sub_51d0b0(&var_34, ebx + 0xdc)
int32_t var_c_9 = 4

if (*(eax_12 + 0x14) u>= 0x10)
    eax_12 = *eax_12

char* var_78_13 = eax_12
var_c_9.b = 5
sub_51cfe0(&var_64, sub_4691f0(&var_4c, 0x6e2dbc))

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_c_10 = 0xffffffff
int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c.b = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t eax_14
eax_14.b = *(ebx + 0xf4) != 0
int32_t var_78_17 = eax_14
int32_t var_c_11 = 6
sub_51cfe0(&var_64, sub_4691f0(&var_34, 0x6e2e90))
int32_t var_c_12 = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t eax_16
eax_16.b = *(ebx + 0xf5) != 0
int32_t var_78_20 = eax_16
int32_t var_c_13 = 7
sub_51cfe0(&var_64, sub_4691f0(&var_34, 0x6e2ea4))
int32_t var_c_14 = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t var_c_15 = 8
sub_51cfe0(&var_64, sub_4691f0(&var_34, 0x6e2ebc))

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t var_20_1 = 0xf
int32_t var_24 = 0
var_34.b = 0
int32_t var_c_16 = 9
void* esi = *(ebx + 0x88)
int32_t edi = *(ebx + 0x8c)

if (esi != edi)
    int32_t ebx_1 = 0
    
    do
        int32_t var_78_25 = ebx_1
        var_c_16.b = 0xa
        sub_51cfe0(&var_64, sub_4691f0(&var_4c, 0x6e2ec8))
        ebx_1 += 1
        var_c_16.b = 9
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c)
        
        int32_t var_78_28 = *(esi + 4)
        var_c_16.b = 0xb
        sub_51cfe0(&var_64, sub_4691f0(&var_4c, "*\t*\t"))
        var_c_16.b = 9
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c)
        
        int32_t var_78_31 = *(esi + 8)
        var_c_16.b = 0xc
        sub_51cfe0(&var_64, sub_4691f0(&var_4c, "*\t*\t"))
        var_c_16.b = 9
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c)
        
        int32_t var_78_34 = *(esi + 0x18)
        int32_t var_7c_3 = *(esi + 0x14)
        int32_t var_80_10 = *(esi + 0x10)
        var_c_16.b = 0xd
        sub_51cfe0(&var_64, sub_4691f0(&var_4c, "*\t*\t"))
        var_c_16.b = 9
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c)
        
        esi += 0x1c
    while (esi != edi)

int32_t var_38_2 = 0xf
int32_t var_3c_1 = 0
var_4c.b = 0
sub_402110(&var_4c, 0x6e2e80, 0xc)
var_c_16.b = 0xe
int32_t* eax_23 = sub_51cfe0(&var_64, &var_4c)
var_c_16.b = 9

if (var_38_2 u>= 0x10)
    eax_23 = j__free(var_4c)

var_c_16.b = 0xf
var_c_16.b = 9
bool result = sub_514c10(ebx + 8, sub_410930(eax_23, arg2, &var_4c, "*\t"), arg3) == 0

if (var_38_2 u>= 0x10)
    j__free(var_4c)

if (result == 0)
    int32_t var_38_3 = 0xf
    int32_t var_3c_2 = 0
    var_4c.b = result
    sub_402110(&var_4c, 0x6e2e30, 8)
    var_c_16.b = 0x10
    int32_t* eax_25 = sub_51cfe0(&var_64, &var_4c)
    var_c_16.b = 9
    
    if (var_38_3 u>= 0x10)
        eax_25 = j__free(var_4c)
    
    var_c_16.b = 0x11
    ebx.b = sub_514c10(ebx + 0x48, sub_410930(eax_25, arg2, &var_4c, "*\t"), arg3) == 0
    
    if (var_38_3 u>= 0x10)
        j__free(var_4c)

if (result != 0 || ebx.b != 0)
    result = false
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
