// 函数: sub_511b80
// 地址: 0x511b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c2090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t ebx
int32_t var_60 = ebx
void** esi
void** var_64 = esi
int32_t edi
int32_t var_68 = edi
int32_t eax_4 = __security_cookie ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_54 = arg3
void** var_50 = arg2
int32_t eax_6
eax_6.b = *(arg1 + 0x1c) != 0
var_5c = arg2
int32_t var_70 = eax_6
int32_t var_c_1 = 0
char var_4c
sub_511f10(&var_5c, sub_4691f0(&var_4c, 0x6e2924))
int32_t var_c_2 = 0xffffffff
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
sub_402110(&var_4c, 0x6e2938, 8)
int32_t var_c_3 = 1
sub_511f10(&var_5c, &var_4c)
int32_t var_c_4 = 0xffffffff

if (var_38_1 u>= 0x10)
    j__free(var_4c.d)

int32_t var_70_5 = (*(**(*(arg1 + 0x28) + 4) + 8))(eax_4)
int32_t var_c_5 = 2
sub_511f10(&var_5c, sub_4691f0(&var_4c, 0x6e28e4))
int32_t var_c_6 = 0xffffffff

if (var_38_1 u>= 0x10)
    j__free(var_4c.d)

void* eax_12 = *(arg1 + 0x28)
int32_t var_c_7 = 3
bool cond:1 = (*(**(eax_12 + 4) + 0x74))(sub_410930(eax_12, arg2, &var_4c, "*\t"), var_54) == 0
ExceptionList = 0xffffffff
void** ebx_1
ebx_1.b = cond:1
int32_t var_40

if (var_40 u>= 0x10)
    j__free(var_54)

bool result

if (ebx_1.b == 0)
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    var_54.b = 0
    sub_402110(&var_54, 0x6e28fc, 0x10)
    ExceptionList = 4
    sub_511f10(&var_64, &var_54)
    ExceptionList = 0xffffffff
    
    if (var_40_1 u>= 0x10)
        j__free(var_54)
    
    int32_t var_78_5 = (*(**(*(arg1 + 0x28) + 8) + 8))()
    void** eax_19 = sub_4691f0(&var_54, 0x6e2910)
    ExceptionList = 5
    sub_511f10(&var_64, eax_19)
    ExceptionList = 0xffffffff
    
    if (var_40_1 u>= 0x10)
        j__free(var_54)
    
    void* eax_20 = *(arg1 + 0x28)
    int32_t* esi_2 = *(eax_20 + 8)
    int32_t* eax_21 = sub_410930(eax_20, arg3, &var_54, "*\t")
    void** var_78_8 = var_5c
    ExceptionList = 6
    bool cond:2_1 = (*(*esi_2 + 0x74))(eax_21, var_78_8) == 0
    ExceptionList = 0xffffffff
    ebx_1.b = cond:2_1
    
    if (var_40_1 u>= 0x10)
        j__free(var_54)
    
    if (ebx_1.b != 0)
        result = false
    else
        sub_401f60(&var_54, 0x6e29e4)
        ExceptionList = 7
        sub_511f10(&var_64, &var_54)
        ExceptionList = 0xffffffff
        
        if (var_40_1 u>= 0x10)
            j__free(var_54)
        
        int32_t var_78_12 = (*(**(*(arg1 + 0x28) + 0xc) + 8))()
        void** eax_27 = sub_4691f0(&var_54, 0x6e29f4)
        ExceptionList = 8
        sub_511f10(&var_64, eax_27)
        ExceptionList = 0xffffffff
        
        if (var_40_1 u>= 0x10)
            j__free(var_54)
        
        void* eax_28 = *(arg1 + 0x28)
        int32_t* esi_3 = *(eax_28 + 0xc)
        int32_t* eax_29 = sub_410930(eax_28, arg3, &var_3c, "*\t")
        void** var_78_15 = var_5c
        ExceptionList = 9
        ebx_1.b = (*(*esi_3 + 0x74))(eax_29, var_78_15) == 0
        int32_t var_28
        
        if (var_28 u>= 0x10)
            j__free(var_3c)
        
        result = ebx_1.b == 0
else
    result = false

fsbase->NtTib.ExceptionList = eax_2
int32_t var_24
sub_69a5bc(var_24 ^ &var_64)
return result
