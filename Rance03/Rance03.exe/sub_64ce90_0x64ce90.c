// 函数: sub_64ce90
// 地址: 0x64ce90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce9b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t* esi = nullptr
struct fileimage::CFileImageMaker::VTable* const var_74 = &fileimage::CFileImageMaker::`vftable'
int32_t var_70 = 0
int32_t* var_6c = nullptr
int32_t var_68 = 0
int32_t var_c_1 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xbc) - *(arg1 + 0xb8))
int32_t var_78 = 0
int32_t edx_1 = edx s>> 2
char var_4c
int32_t var_38

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    while (true)
        void** ecx_3 = *(arg1 + 0xb8) + ebx
        void* eax_10 = ecx_3[4]
        int32_t eax_11 = ecx_3[5]
        void** edx_2
        
        if (eax_11 u< 0x10)
            edx_2 = ecx_3
        else
            edx_2 = *ecx_3
        
        if (eax_11 u>= 0x10)
            ecx_3 = *ecx_3
        
        void* var_98_1 = eax_10
        sub_468ff0(&var_70, esi, ecx_3, eax_10 + edx_2)
        var_38 = 0xf
        void* var_3c_1 = nullptr
        var_4c = 0
        sub_402110(&var_4c, 0x7007c8, 2)
        var_c_1.b = 1
        char* esi_1 = &var_4c
        char* edx_3 = &var_4c
        void* var_98_2 = eax_10
        
        if (var_38 u>= 0x10)
            esi_1 = var_4c.d
        
        if (var_38 u>= 0x10)
            edx_3 = var_4c.d
        
        sub_468ff0(&var_70, var_6c, edx_3, var_3c_1 + esi_1)
        var_c_1.b = 0
        
        if (var_38 u>= 0x10)
            j__free(var_4c.d)
        
        ebx += 0x18
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xbc) - *(arg1 + 0xb8))
        int32_t esi_3 = var_78 + 1
        int32_t edx_5 = edx_4 s>> 2
        var_78 = esi_3
        
        if (esi_3 s>= (edx_5 u>> 0x1f) + edx_5)
            break
        
        esi = var_6c
    
    ebx = var_70

int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
var_c_1.b = 2

if (arg3 == 0)
    int32_t var_34
    int32_t* eax_20 = sub_410930(sub_607ce0(arg1 + 0xe0), arg1 + 0xe0, &var_34, U"\")
    var_c_1.b = 3
    char* eax_21 = sub_410a80(eax_20.b, eax_20, &var_4c, arg2)
    
    if (&var_64 != eax_21)
        if (var_50 u>= 0x10)
            j__free(var_64.d)
        
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        
        if (*(eax_21 + 0x14) u>= 0x10)
            var_64.d = *eax_21
            *eax_21 = 0
        else
            void* eax_22 = *(eax_21 + 0x10)
            
            if (eax_22 != 0xffffffff)
                _memcpy(&var_64, eax_21, eax_22 + 1, eax_4)
        
        int32_t var_54_2 = *(eax_21 + 0x10)
        var_50 = *(eax_21 + 0x14)
        *(eax_21 + 0x14) = 0xf
        *(eax_21 + 0x10) = 0
        *eax_21 = 0
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_2 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
else if (*arg2 != 0)
    char* ecx_10 = arg2
    int32_t eax_9
    
    do
        eax_9.b = *ecx_10
        ecx_10 = &ecx_10[1]
    while (eax_9.b != 0)
    sub_402110(&var_64, arg2, ecx_10 - &ecx_10[1])
else
    sub_402110(&var_64, arg2, nullptr)

bool result = sub_604d10(&var_64, &var_70) != 0
bool result_1 = result

if (var_50 u>= 0x10)
    j__free(var_64.d)
    result = result_1

int32_t var_50_2 = 0xf
int32_t var_54_3 = 0
var_64 = 0

if (ebx != 0)
    j__free(ebx)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
