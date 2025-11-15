// 函数: sub_638120
// 地址: 0x638120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745ba0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = *arg1
int32_t esi = 0
void* var_54
sub_4275f0(&var_54, &arg1[1])
int32_t eax_4 = arg1[4]
int32_t var_8_1 = 0
void* var_44
sub_60ebd0(&var_44, &arg1[5])
void* ebx_1 = arg2
int32_t var_8_2 = 1

if (*(ebx_1 + 0x14) s<= 0)
label_6381ae:
    int32_t var_38 = *arg1
    void* var_34
    sub_4275f0(&var_34, &arg1[1])
    int32_t var_28_1 = arg1[4]
    var_8_2.b = 2
    void* var_24
    sub_60ebd0(&var_24, &arg1[5])
    var_8_2.b = 3
    arg2:3.b = 0
    int32_t var_14_1 = *arg1
    
    if (sub_635b70(arg1, *(*(ebx_1 + 0x1c) + 0xc)) == 0)
        goto label_638220
    
    if (arg3 == 0)
    label_6382d9:
        ebx_1.b = 1
    else
        var_38 = *arg1
        int32_t var_28_2 = arg1[4]
        sub_4274a0(&var_34, &arg1[1])
        sub_636640(&var_24, &arg1[5])
        arg2:3.b = 1
    label_638220:
        int32_t eax_18 = var_14_1
        
        while (true)
            int32_t ecx_10 = *(ebx_1 + 0x18)
            
            if (ecx_10 == 0xffffffff)
                goto label_638239
            
            int32_t eax_19 = esi
            esi += 1
            
            if (eax_19 s< ecx_10)
                eax_18 = var_14_1
            label_638239:
                *arg1 = eax_18
                arg1[4] = eax_4
                sub_4274a0(&arg1[1], &var_54)
                
                if (sub_635b70(arg1, *(ebx_1 + 0xc)) != 0)
                    int32_t eax_22 = *arg1
                    
                    if (sub_635b70(arg1, *(*(ebx_1 + 0x1c) + 0xc)) != 0)
                        if (arg3 == 0)
                            goto label_6382d9
                        
                        var_38 = *arg1
                        int32_t var_28_3 = arg1[4]
                        sub_4274a0(&var_34, &arg1[1])
                        sub_636640(&var_24, &arg1[5])
                        arg2:3.b = 1
                    
                    eax_18 = eax_22
                    
                    if (var_14_1 != eax_18)
                        var_14_1 = eax_18
                        continue
            
            ebx_1.b = arg2:3.b
            int32_t* esi_2 = &var_38
            
            if (ebx_1.b == 0)
                esi_2 = &var_58
            
            *arg1 = *esi_2
            arg1[4] = esi_2[4]
            sub_4274a0(&arg1[1], &esi_2[1])
            sub_636640(&arg1[5], &esi_2[5])
            break
    
    void* ecx_21 = var_24
    int32_t var_1c
    
    if (ecx_21 != 0)
        sub_403160(ecx_21, (var_1c - ecx_21) s>> 3, 8)
    void* ecx_22 = var_34
    int32_t var_2c
    
    if (ecx_22 != 0)
        sub_403160(ecx_22, (var_2c - ecx_22) s>> 2, 4)
else
    while (true)
        void* eax_6 = *arg1
        
        if (sub_635b70(arg1, *(ebx_1 + 0xc)) == 0)
            *arg1 = var_58
            arg1[4] = eax_4
            sub_4274a0(&arg1[1], &var_54)
            sub_636640(&arg1[5], &var_44)
            ebx_1.b = 0
            break
        
        if (eax_6 == *arg1)
            esi = *(ebx_1 + 0x14) - 1
        
        esi += 1
        
        if (esi s>= *(ebx_1 + 0x14))
            goto label_6381ae

void* ecx_23 = var_44
int32_t var_3c

if (ecx_23 != 0)
    sub_403160(ecx_23, (var_3c - ecx_23) s>> 3, 8)
void* edx_2 = var_54
int32_t var_4c

if (edx_2 != 0)
    sub_403160(edx_2, (var_4c - edx_2) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx_1.b
