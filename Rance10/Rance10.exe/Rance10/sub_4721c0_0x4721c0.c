// 函数: sub_4721c0
// 地址: 0x4721c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dabb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t*** esi = arg2
int32_t*** var_8c = esi
struct _EXCEPTION_REGISTRATION_RECORD** i

if (*(arg1 + 0x14) != 0 && *(arg1 + 0x20) != 0)
    sub_424db0(esi, arg1 + 4)
    void* edi_1 = arg1 + 0x1c
    i = **(arg1 + 0x1c)
    *(arg1 + 0x24) = i
    
    if (*(arg1 + 0x20) != 0 && i != *edi_1)
        struct _EXCEPTION_REGISTRATION_RECORD** i_1 = i
        i = &i[2]
        
        if (i_1 != 0xfffffff8)
            do
                char eax_5
                
                if (i[0xc] == 3)
                    eax_5 = sub_407560(i, "#include")
                
                if (i[0xc] != 3 || eax_5 == 0)
                    *(arg1 + 0x24) = **(arg1 + 0x24)
                else
                    void* eax_8
                    
                    if (*(arg1 + 0x20) != 0 && *(arg1 + 0x24) != *edi_1)
                        eax_8 = **(arg1 + 0x24)
                        *(arg1 + 0x24) = eax_8
                    
                    void* var_2c
                    void** edi_2
                    
                    if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *edi_1 || *(arg1 + 0x20) == 0
                            || eax_8 == *edi_1)
                        edi_2 = nullptr
                    label_4724cd:
                        sub_403360(&var_2c, "#includ")
                        int32_t var_8_3 = 0
                        sub_45ebd0(*(arg1 + 0x28), &var_2c, edi_2)
                        struct _EXCEPTION_REGISTRATION_RECORD** var_18
                        
                        if (var_18 u>= 0x10)
                            sub_403160(var_2c, var_18 + 1, 1)
                        
                        i.b = 0
                        goto label_472426
                    
                    edi_2 = eax_8 + 8
                    
                    if (edi_2 == 0 || edi_2[0xc] != 0x12)
                        goto label_4724cd
                    
                    void var_88
                    char* eax_9 = sub_404fd0(&var_88, arg1 + 4)
                    int32_t var_8_1 = 1
                    int32_t* lpFileName_1
                    sub_417750(eax_9, eax_9, &lpFileName_1, edi_2)
                    var_8_1.b = 3
                    sub_403320(&var_88)
                    int32_t* lpFileName = &lpFileName_1
                    int32_t var_30
                    
                    if (var_30 u>= 0x10)
                        lpFileName = lpFileName_1
                    
                    uint32_t eax_10 = GetFileAttributesA(lpFileName)
                    
                    if (eax_10 != 0xffffffff)
                        eax_10.b = not.b((eax_10 u>> 4).b)
                        eax_10.b &= 1
                    else
                        eax_10.b = 0
                    
                    if (eax_10.b == 0)
                        sub_403360(&var_2c, "#includ")
                        var_8_1.b = 4
                    label_4724a7:
                        sub_45ebd0(*(arg1 + 0x28), &var_2c, edi_2)
                        sub_403320(&var_2c)
                        sub_403320(&lpFileName_1)
                        i.b = 0
                        goto label_472426
                    
                    int32_t var_90
                    int32_t var_a8_4 = var_90
                    int32_t esi_1 = esi[1]
                    
                    if (sub_4324c0(&lpFileName_1, esi_1, *var_8c, &lpFileName_1) != esi_1)
                        sub_403360(&var_2c, "#includ")
                        var_8_1.b = 5
                        goto label_4724a7
                    
                    struct exfile::CTokenList::VTable* var_70
                    sub_471e60(&var_70, *(arg1 + 0x28))
                    var_8_1.b = 6
                    sub_472010(&var_70, &lpFileName_1)
                    
                    if (sub_4721c0(var_8c) == 0)
                        sub_403360(&var_2c, "#includ")
                        var_8_1.b = 7
                        sub_45ebd0(*(arg1 + 0x28), &var_2c, edi_2)
                        sub_403320(&var_2c)
                        sub_471f30(&var_70)
                        sub_403320(&lpFileName_1)
                        i.b = 0
                        goto label_472426
                    
                    int32_t* eax_15 = *(*(arg1 + 0x24) + 4)
                    *(arg1 + 0x24) = eax_15
                    void** edi_3 = *eax_15
                    *eax_15[1] = edi_3
                    *(*eax_15 + 4) = eax_15[1]
                    *(arg1 + 0x20) -= 1
                    sub_408940(&eax_15[2])
                    sub_403160(eax_15, 1, 0x40)
                    *(arg1 + 0x24) = edi_3
                    void* esi_3 = *edi_3
                    *edi_3[1] = esi_3
                    *(*edi_3 + 4) = edi_3[1]
                    *(arg1 + 0x20) -= 1
                    sub_408940(&edi_3[2])
                    sub_403160(edi_3, 1, 0x40)
                    edi_1 = arg1 + 0x1c
                    *(arg1 + 0x24) = esi_3
                    
                    if (esi_3 != **edi_1)
                        var_90.b = 0
                        int32_t var_a8_9 = 0
                    else
                        int32_t var_a8_8 = 0.d
                    
                    int32_t** var_54
                    sub_4744b0(edi_1, esi_3, *var_54, var_54)
                    sub_471f30(&var_70)
                    int32_t var_8_2 = 0xffffffff
                    sub_403320(&lpFileName_1)
                    esi = var_8c
                
                i = sub_471ff0(arg1)
            while (i != 0)

i.b = 1
label_472426:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
