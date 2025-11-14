// 函数: sub_41d730
// 地址: 0x41d730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4530
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct HWND__** var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1 + 0x10
int32_t* edi = esi
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_401ff0(&var_5c, arg2, 0, 0xffffffff)
int32_t var_4 = 0
void** var_44
sub_402c80(&var_44, &var_5c)
var_4.b = 1
int32_t lParam
int32_t i
int32_t var_30
void* var_2c
int32_t var_18

while (i != 0)
    int32_t* eax_6 = sub_421bc0(edi, &var_44)
    
    if (eax_6 == 0)
        int32_t* ebx_1 = sub_69adc6(0x38)
        var_bc = ebx_1
        var_4.b = 2
        
        if (ebx_1 == 0)
            ebx_1 = nullptr
        else
            *ebx_1 = 0
            ebx_1[6] = 0xf
            ebx_1[5] = 0
            ebx_1[1].b = 0
            sub_401ff0(&ebx_1[1], &var_44, 0, 0xffffffff)
            var_4.b = 3
            ebx_1[0xc] = 0xf
            ebx_1[0xb] = 0
            ebx_1[7].b = 0
            sub_401ff0(&ebx_1[7], &var_44, 0, 0xffffffff)
            ebx_1[0xd] = 0
        
        var_4.b = 1
        int32_t* esi_1 = sub_69adc6(0x3c)
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            *esi_1 = 0
            esi_1[1] = 0
            esi_1[2].b = 0
            esi_1[8] = 0xf
            esi_1[7] = 0
            esi_1[3].b = 0
            __builtin_memset(&esi_1[9], 0, 0x18)
        
        *esi_1 = *edi
        lParam = edi[1]
        void** eax_11 = &var_44
        
        if (var_30 u>= 0x10)
            eax_11 = var_44
        
        void** var_8c_1 = eax_11
        int32_t* var_b8 = esi_1
        int32_t var_88_1 = i + 1
        int32_t var_a0_1 = 0xffff0002
        int32_t var_9c_1 = 0x27
        int32_t var_84_1 = 5
        int32_t var_80_1 = 5
        int32_t* var_78_1 = ebx_1
        esi_1[1] = SendMessageA(*esi_1, 0x1100, 0, &lParam)
        
        if (&esi_1[3] != &var_44)
            sub_401ff0(&esi_1[3], &var_44, 0, 0xffffffff)
        
        int32_t eax_15 = edi[0xa]
        int32_t** ecx_7 = &var_b8
        
        if (&var_b8 u< eax_15)
            ecx_7 = edi[9]
        
        if (&var_b8 u>= eax_15 || ecx_7 u> &var_b8)
            if (eax_15 == edi[0xb])
                int32_t** var_d4_4 = ecx_7
                sub_412f20(&edi[9])
            
            int32_t** eax_18 = edi[0xa]
            
            if (eax_18 != 0)
                *eax_18 = esi_1
        else
            if (eax_15 == edi[0xb])
                int32_t** var_d4_3 = ecx_7
                sub_412f20(&edi[9])
            
            int32_t* ecx_9 = edi[0xa]
            
            if (ecx_9 != 0)
                *ecx_9 = *(edi[9] + ((&var_b8 - ecx_7) s>> 2 << 2))
        
        edi[0xa] += 4
        edi = esi_1
        var_bc = esi_1[1]
        *sub_41ff70(arg1 + 8, &var_bc) = ebx_1
    else
        edi = eax_6
    
    var_4.b = 0
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    char* eax_21 = sub_402b00(&var_2c, &var_5c)
    
    if (&var_5c != eax_21)
        if (var_48 u>= 0x10)
            j__free(var_5c.d)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (*(eax_21 + 0x14) u>= 0x10)
            var_5c.d = *eax_21
            *eax_21 = 0
        else
            void* eax_22 = *(eax_21 + 0x10)
            
            if (eax_22 != 0xffffffff)
                _memcpy(&var_5c, eax_21, eax_22 + 1, eax_4)
        
        int32_t var_4c_2 = *(eax_21 + 0x10)
        var_48 = *(eax_21 + 0x14)
        *(eax_21 + 0x14) = 0xf
        *(eax_21 + 0x10) = 0
        *eax_21 = 0
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    sub_402c80(&var_44, &var_5c)
    var_4.b = 1

if (var_30 u>= 0x10)
    j__free(var_44)

int32_t var_4_1 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_2 = 0xf
int32_t var_4c_3 = 0
var_5c = 0
void** result = sub_41eef0(arg2, esi)

if (result != 0)
    sub_402bc0(&var_2c, arg2)
    int32_t var_4_2 = 4
    int32_t* esi_3 = sub_69adc6(0x38)
    int32_t* var_b4_1 = esi_3
    var_4_2.b = 5
    
    if (esi_3 == 0)
        esi_3 = nullptr
    else
        *esi_3 = 5
        esi_3[6] = 0xf
        esi_3[5] = 0
        esi_3[1].b = 0
        sub_401ff0(&esi_3[1], &var_2c, 0, 0xffffffff)
        var_4_2.b = 6
        esi_3[0xc] = 0xf
        esi_3[0xb] = 0
        esi_3[7].b = 0
        sub_401ff0(&esi_3[7], arg2, 0, 0xffffffff)
        esi_3[0xd] = 1
    
    var_4_2.b = 4
    struct HWND__** eax_28 = sub_421b10(result, &var_2c, 6, esi_3)
    var_bc = eax_28
    
    if (arg3 != 0)
        struct HWND__** var_a0_2 = eax_28
        lParam = 8
        int32_t var_98_1 = 4
        int32_t var_9c_2 = 4
        SendMessageA(*(arg4 + 4), 0x110d, 0, &lParam)
    
    *sub_41ff70(arg1 + 8, &var_bc) = esi_3
    
    if (var_18 u>= 0x10)
        j__free(var_2c)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
