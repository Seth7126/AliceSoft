// 函数: sub_423460
// 地址: 0x423460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4b89
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg1[0x45] != arg1[0x46])
    int32_t esi_1 = *(arg1[0x46] - 0x24)
    int32_t eax_8 = (*(**(arg1[0x38] + 8) + 0x14))(esi_1)
    void* ecx_1 = arg1[0x38]
    var_b4 = eax_8
    int32_t ebx_2 = arg2 - 2
    
    if ((*(**(ecx_1 + 8) + 0x14))(esi_1) == 4)
        ebx_2 += sub_423e80(arg1, esi_1, ebx_2)
    
    char var_ac
    void* ecx_12
    
    if (var_b4 - 1 u> 4)
        result.b = 1
    else
        switch (var_b4)
            case 1
                void* esi_2 = arg1[0x38]
                
                if (ebx_2 s< 0
                        || ebx_2 s>= (*(**(esi_2 + 0xc) + 8))((*(**(esi_2 + 8) + 0x18))(esi_1)))
                    result.b = 0
                else if (sub_42cef0(arg1[0x38], esi_1, ebx_2, &var_b4).b == 0)
                    result.b = 0
                else
                    void* esi_3 = arg1[0x46]
                    int32_t eax_14 = GetScrollPos(arg1[0x17], SB_VERT)
                    int32_t ecx_7 = var_b4
                    *(esi_3 - 0x20) = arg2
                    *(esi_3 - 0x1c) = eax_14
                    
                    if (sub_4315a0(ecx_7).b == 0)
                        arg1[0x3b] = arg2
                        result.b = 1
                    else if (sub_42cfa0(arg1[0x38], esi_1, ebx_2, &var_b4).b == 0)
                        result.b = 0
                    else
                        int32_t var_98_1 = 0xf
                        int32_t var_9c_1 = 0
                        var_ac = 0
                        int32_t var_c_1 = 0
                        sub_42d050(arg1[0x38], esi_1, ebx_2, &var_ac)
                        void var_4c
                        sub_408340(&var_ac, sub_4216c0(&var_ac, 0x6da9a4, &var_4c, &var_ac))
                        ecx_12 = &var_4c
                    label_4235f4:
                        sub_401fb0(ecx_12)
                        sub_423ef0(arg1, var_b4, &var_ac, 0)
                        sub_401fb0(&var_ac)
                        result.b = 1
            case 2
                result.b = 1
            case 3
                if (ebx_2 s< 0 || ebx_2 s>= sub_42dd40(arg1[0x38], esi_1))
                    result.b = 0
                else if (sub_42dd60(arg1[0x38], esi_1, &var_b4).b == 0)
                    result.b = 0
                else
                    void* esi_5 = arg1[0x46]
                    int32_t eax_17 = GetScrollPos(arg1[0x17], SB_VERT)
                    int32_t ecx_17 = var_b4
                    *(esi_5 - 0x20) = arg2
                    *(esi_5 - 0x1c) = eax_17
                    
                    if (sub_4315a0(ecx_17).b == 0)
                        arg1[0x3b] = arg2
                        result.b = 1
                    else if (sub_42cfa0(arg1[0x38], esi_1, ebx_2, &var_b4).b == 0)
                        result.b = 0
                    else
                        int32_t var_c8_14 = ebx_2
                        void var_7c
                        void** eax_18 = sub_4691f0(&var_7c, "[%d]")
                        int32_t var_c_2 = 1
                        sub_423ef0(arg1, var_b4, eax_18, 0)
                        sub_401fb0(&var_7c)
                        result.b = 1
            case 4
                void* esi_6 = arg1[0x38]
                
                if (ebx_2 s< 0
                        || ebx_2 s>= (*(**(esi_6 + 0xc) + 0x20))((*(**(esi_6 + 8) + 0x1c))(esi_1)))
                    result.b = 0
                else if (sub_42dbc0(arg1[0x38], esi_1, ebx_2, &var_b4).b == 0)
                    result.b = 0
                else
                    void* esi_7 = arg1[0x46]
                    int32_t eax_21 = GetScrollPos(arg1[0x17], SB_VERT)
                    int32_t ecx_23 = var_b4
                    *(esi_7 - 0x20) = arg2
                    *(esi_7 - 0x1c) = eax_21
                    
                    if (sub_4315a0(ecx_23).b == 0)
                        arg1[0x3b] = arg2
                        result.b = 1
                    else
                        if (sub_42cfa0(arg1[0x38], esi_1, ebx_2, &var_b4).b != 0)
                            int32_t var_98_2 = 0xf
                            int32_t var_9c_2 = 0
                            var_ac = 0
                            int32_t var_c_3 = 2
                            sub_42dc70(arg1[0x38], esi_1, ebx_2, &var_ac)
                            void var_64
                            sub_408340(&var_ac, sub_4216c0(&var_ac, 0x6da9ac, &var_64, &var_ac))
                            ecx_12 = &var_64
                            goto label_4235f4
                        
                        result.b = 0
            case 5
                if (ebx_2 s< 0)
                    result.b = 0
                else if (ebx_2 s>= sub_42de80(arg1[0x38], esi_1))
                    result.b = 0
                else if (sub_42e070(arg1[0x38], esi_1, ebx_2, &var_b4).b == 0)
                    result.b = 0
                else
                    int32_t var_80_1 = 0xf
                    int32_t var_84_1 = 0
                    char var_94 = 0
                    int32_t var_c_4 = 3
                    sub_42deb0(arg1[0x38], esi_1, ebx_2, &var_94)
                    void var_34
                    sub_408340(&var_94, sub_4216c0(&var_94, 0x6da9a8, &var_34, &var_94))
                    sub_401fb0(&var_34)
                    sub_423ef0(arg1, var_b4, &var_94, 0)
                    sub_401fb0(&var_94)
                    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
