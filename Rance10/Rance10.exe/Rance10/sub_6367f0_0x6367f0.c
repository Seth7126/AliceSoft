// 函数: sub_6367f0
// 地址: 0x6367f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745b60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_18 = esi
void* edi = &esi[1]
int32_t var_64 = *esi
int32_t i = 0
void* var_1c = edi
void* var_60
sub_4275f0(&var_60, edi)
int32_t eax_4 = *(edi + 0xc)
void* eax_5 = &esi[5]
int32_t var_8_1 = 0
void* var_50
sub_636730(&var_50, eax_5)
void* eax_6 = arg2
int32_t var_8_2 = 1

if (*(eax_6 + 0x14) s> 0)
    do
        int32_t esi_1 = *esi
        
        if (sub_634030(var_18, *(eax_6 + 0xc)) == 0)
            *var_18 = var_64
            var_18[4] = eax_4
            sub_4274a0(&var_18[1], &var_60)
            sub_635030(&var_18[5], &var_50)
            i.b = 0
            goto label_636a28
        
        eax_6 = arg2
        
        if (esi_1 == *var_18)
            i = *(eax_6 + 0x14) - 1
        
        i += 1
        esi = var_18
    while (i s< *(eax_6 + 0x14))
    
    edi = var_1c

int32_t var_44 = *esi
void* var_40
sub_4275f0(&var_40, edi)
int32_t var_34_1 = *(edi + 0xc)
var_8_2.b = 2
void* var_30
sub_636730(&var_30, &esi[5])
var_8_2.b = 3
int32_t edi_2 = *esi
char var_11_1 = 0

if (sub_634030(esi, *(*(arg2 + 0x1c) + 0xc)) == 0)
    goto label_636904

if (arg3 == 0)
label_6369bb:
    i.b = 1
else
    var_44 = *esi
    int32_t var_34_2 = esi[4]
    sub_4274a0(&var_40, &esi[1])
    sub_635030(&var_30, &esi[5])
    var_11_1 = 1
label_636904:
    
    while (true)
        int32_t ecx_9 = *(arg2 + 0x18)
        int32_t i_1
        
        if (ecx_9 != 0xffffffff)
            i_1 = i
            i += 1
        
        if (ecx_9 == 0xffffffff || i_1 s< ecx_9)
            *esi = edi_2
            esi[4] = eax_4
            sub_4274a0(&esi[1], &var_60)
            
            if (sub_634030(esi, *(arg2 + 0xc)) != 0)
                int32_t esi_2 = *esi
                
                if (sub_634030(var_18, *(*(arg2 + 0x1c) + 0xc)) != 0)
                    if (arg3 == 0)
                        goto label_6369bb
                    
                    var_44 = *var_18
                    int32_t var_34_3 = *(var_1c + 0xc)
                    sub_4274a0(&var_40, var_1c)
                    sub_635030(&var_30, eax_5)
                    var_11_1 = 1
                
                if (edi_2 != esi_2)
                    edi_2 = esi_2
                    esi = var_18
                    continue
        
        i.b = var_11_1
        int32_t* esi_3 = &var_44
        
        if (i.b == 0)
            esi_3 = &var_64
        
        *var_18 = *esi_3
        int32_t* ecx_19 = var_1c
        ecx_19[3] = esi_3[4]
        sub_4274a0(ecx_19, &esi_3[1])
        sub_635030(eax_5, &esi_3[5])
        break

void* ecx_21 = var_30
int32_t var_28

if (ecx_21 != 0)
    sub_403160(ecx_21, (var_28 - ecx_21) s>> 3, 8)
void* ecx_22 = var_40
int32_t var_38

if (ecx_22 != 0)
    sub_403160(ecx_22, (var_38 - ecx_22) s>> 2, 4)
label_636a28:
void* ecx_23 = var_50
int32_t var_48

if (ecx_23 != 0)
    sub_403160(ecx_23, (var_48 - ecx_23) s>> 3, 8)
void* edx_2 = var_60
int32_t var_58

if (edx_2 != 0)
    sub_403160(edx_2, (var_58 - edx_2) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return i.b
