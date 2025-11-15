// 函数: sub_4cc350
// 地址: 0x4cc350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733b1a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* i_11 = arg1
void* i_6 = i_11
int32_t* ecx = *(i_11 + 0x38)
__builtin_memset(i_11 + 8, 0, 0x28)
*(i_11 + 0x34) = 0

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(i_11 + 0x38) = 0

int32_t* edi = *(i_11 + 0x3c)
void* eax_4 = i_11 + 0x3c
int32_t* i = *edi
struct common::CRect::VTable* const var_30

if (i != edi)
    do
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        char var_4c = 0
        sub_403590(&var_4c, &i[4], 0, 0xffffffff)
        int32_t* ecx_2 = i[0xa]
        int32_t var_28_1 = i[0xd]
        int32_t var_24_1 = i[0xe]
        int32_t var_1c_1 = i[0x10]
        int32_t eax_8 = i[0x11]
        int32_t* var_34_1 = ecx_2
        var_30 = &common::CRect::`vftable'
        struct common::CPoint::VTable* const var_2c_1 = &common::CPoint::`vftable'
        struct common::CSize::VTable* const var_20_1 = &common::CSize::`vftable'
        int32_t var_18_1 = eax_8
        int32_t var_8_1 = 0
        (*(*ecx_2 + 4))(eax_2)
        int32_t var_8_2 = 0xffffffff
        var_30 = &common::CRect::`vftable'
        struct common::CSize::VTable* const var_20_2 = &common::CSize::`vftable'
        struct common::CPoint::VTable* const var_2c_2 = &common::CPoint::`vftable'
        
        if (var_38_1 u>= 0x10)
            sub_403160(var_4c.d, var_38_1 + 1, 1)
        
        if (*(i + 0xd) == 0)
            int32_t* i_7 = i[2]
            
            if (*(i_7 + 0xd) != 0)
                int32_t* i_9 = i[1]
                
                if (*(i_9 + 0xd) == 0)
                    while (i == i_9[2])
                        i = i_9
                        i_9 = i_9[1]
                        
                        if (*(i_9 + 0xd) != 0)
                            break
                
                i = i_9
            else
                i = i_7
                int32_t* i_8 = *i
                
                while (*(i_8 + 0xd) == 0)
                    i = i_8
                    i_8 = *i
    while (i != edi)
    
    i_11 = i_6

int32_t* esi = *(i_11 + 0x44)
void* i_1 = *esi
i_6 = i_1

for (; i_1 != esi; i_1 = i_6)
    int32_t var_1c_2 = 0xf
    int32_t var_20_3 = 0
    var_30.b = 0
    sub_403590(&var_30, i_1 + 0x10, 0, 0xffffffff)
    int32_t* ecx_4 = *(i_1 + 0x28)
    int32_t* var_18_2 = ecx_4
    int32_t var_8_3 = 1
    (*(*ecx_4 + 4))(eax_2)
    int32_t var_8_4 = 0xffffffff
    
    if (var_1c_2 u>= 0x10)
        sub_403160(var_30, var_1c_2 + 1, 1)
    
    sub_429080(&i_6)

int32_t* esi_1 = *(i_11 + 0x54)
void* i_2 = *esi_1
i_6 = i_2

for (; i_2 != esi_1; i_2 = i_6)
    int32_t var_1c_3 = 0xf
    int32_t var_20_4 = 0
    var_30.b = 0
    sub_403590(&var_30, i_2 + 0x10, 0, 0xffffffff)
    int32_t* ecx_7 = *(i_2 + 0x28)
    int32_t* var_18_3 = ecx_7
    int32_t var_8_5 = 2
    (*(*ecx_7 + 4))(eax_2)
    int32_t var_8_6 = 0xffffffff
    
    if (var_1c_3 u>= 0x10)
        sub_403160(var_30, var_1c_3 + 1, 1)
    
    sub_429080(&i_6)

int32_t* esi_2 = *(i_11 + 0x5c)
void* i_3 = *esi_2
i_6 = i_3

for (; i_3 != esi_2; i_3 = i_6)
    int32_t var_1c_4 = 0xf
    int32_t var_20_5 = 0
    var_30.b = 0
    sub_403590(&var_30, i_3 + 0x10, 0, 0xffffffff)
    int32_t* ecx_10 = *(i_3 + 0x28)
    int32_t* var_18_4 = ecx_10
    int32_t var_8_7 = 3
    (*(*ecx_10 + 4))(eax_2)
    int32_t var_8_8 = 0xffffffff
    
    if (var_1c_4 u>= 0x10)
        sub_403160(var_30, var_1c_4 + 1, 1)
    
    sub_429080(&i_6)

void** esi_3 = *(i_11 + 0x64)
void* i_4 = *esi_3
i_6 = i_4

for (; i_4 != esi_3; i_4 = i_6)
    int32_t var_1c_5 = 0xf
    int32_t var_20_6 = 0
    var_30.b = 0
    sub_403590(&var_30, i_4 + 0x10, 0, 0xffffffff)
    int32_t* ecx_13 = *(i_4 + 0x28)
    int32_t* var_18_5 = ecx_13
    int32_t var_8_9 = 4
    (*(*ecx_13 + 4))(eax_2)
    int32_t var_8_10 = 0xffffffff
    
    if (var_1c_5 u>= 0x10)
        sub_403160(var_30, var_1c_5 + 1, 1)
    
    sub_429080(&i_6)

void** esi_4 = *(i_11 + 0x6c)
void* edi_5 = i_11 + 0x6c
void* i_10 = *esi_4
i_6 = i_10

if (i_10 != esi_4)
    do
        int32_t var_1c_6 = 0xf
        int32_t var_20_7 = 0
        var_30.b = 0
        sub_403590(&var_30, i_10 + 0x10, 0, 0xffffffff)
        int32_t* ecx_16 = *(i_10 + 0x28)
        int32_t* var_18_6 = ecx_16
        int32_t var_8_11 = 5
        (*(*ecx_16 + 4))(eax_2)
        int32_t var_8_12 = 0xffffffff
        
        if (var_1c_6 u>= 0x10)
            sub_403160(var_30, var_1c_6 + 1, 1)
        
        sub_429080(&i_6)
        i_10 = i_6
    while (i_10 != esi_4)
    
    edi_5 = i_11 + 0x6c

void** esi_5 = *(i_11 + 0x4c)
void* i_5 = *esi_5
i_6 = i_5

for (; i_5 != esi_5; i_5 = i_6)
    (*(**(i_5 + 0x10) + 4))(eax_2)
    sub_429080(&i_6)

int32_t var_8_13 = 6
sub_4cee40(*(*eax_4 + 4))
void* eax_33 = *eax_4
*(eax_33 + 4) = eax_33
int32_t* eax_34 = *eax_4
*eax_34 = eax_34
void* eax_35 = *eax_4
*(eax_35 + 8) = eax_35
*(eax_4 + 4) = 0
int32_t var_8_14 = 7
sub_432200(*(*(i_11 + 0x44) + 4))
void* eax_37 = *(i_11 + 0x44)
*(eax_37 + 4) = eax_37
int32_t* eax_38 = *(i_11 + 0x44)
*eax_38 = eax_38
void* eax_39 = *(i_11 + 0x44)
*(eax_39 + 8) = eax_39
*(i_11 + 0x48) = 0
int32_t var_8_15 = 8
sub_42e7b0(*(*(i_11 + 0x4c) + 4))
void* eax_41 = *(i_11 + 0x4c)
*(eax_41 + 4) = eax_41
int32_t* eax_42 = *(i_11 + 0x4c)
*eax_42 = eax_42
void* eax_43 = *(i_11 + 0x4c)
*(eax_43 + 8) = eax_43
*(i_11 + 0x50) = 0
int32_t var_8_16 = 9
sub_432200(*(*(i_11 + 0x54) + 4))
void* eax_45 = *(i_11 + 0x54)
*(eax_45 + 4) = eax_45
int32_t* eax_46 = *(i_11 + 0x54)
*eax_46 = eax_46
void* eax_47 = *(i_11 + 0x54)
*(eax_47 + 8) = eax_47
*(i_11 + 0x58) = 0
int32_t var_8_17 = 0xa
sub_432200(*(*(i_11 + 0x5c) + 4))
void* eax_49 = *(i_11 + 0x5c)
*(eax_49 + 4) = eax_49
int32_t* eax_50 = *(i_11 + 0x5c)
*eax_50 = eax_50
void* eax_51 = *(i_11 + 0x5c)
*(eax_51 + 8) = eax_51
*(i_11 + 0x60) = 0
int32_t var_8_18 = 0xb
sub_432200(*(*(i_11 + 0x64) + 4))
void* eax_53 = *(i_11 + 0x64)
*(eax_53 + 4) = eax_53
int32_t* eax_54 = *(i_11 + 0x64)
*eax_54 = eax_54
void* eax_55 = *(i_11 + 0x64)
*(eax_55 + 8) = eax_55
*(i_11 + 0x68) = 0
int32_t var_8_19 = 0xc
sub_432200(*(*edi_5 + 4))
void* eax_57 = *edi_5
*(eax_57 + 4) = eax_57
int32_t* eax_58 = *edi_5
*eax_58 = eax_58
void* result = *edi_5
*(result + 8) = result
*(edi_5 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
